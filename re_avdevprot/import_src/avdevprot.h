#ifndef _AVDEVPROT_H_
#define _AVDEVPROT_H_






















NTSTATUS sub_140009388(PUNICODE_STRING src , PUNICODE_STRING dst);


NTSTATUS sub_1400093E8(PUNICODE_STRING RegistryPath);

NTSTATUS sub_1400019EC(void *a1);
void sub_14000172C();


void sub_1400027F4();
void sub_140002978(int itrue);
void sub_140002E74(HANDLE ParentId , HANDLE ProcessId , BOOLEAN Create);









//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/27 22:04
//	函数功能  :	创建和关闭派遣函数 sub_14000170C
//************************************************************************************************************
NTSTATUS avk_DispatchCreateClose(_Inout_ struct _DEVICE_OBJECT *DeviceObject , _Inout_ struct _IRP *Irp);



//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/27 22:09
//	函数功能  :	设备控制派遣函数函数 sub_140009198
//************************************************************************************************************
NTSTATUS avk_DispatchDeviceControl(_Inout_ struct _DEVICE_OBJECT *DeviceObject , _Inout_ struct _IRP *Irp);



















#endif // !_AVDEVPROT_H_
