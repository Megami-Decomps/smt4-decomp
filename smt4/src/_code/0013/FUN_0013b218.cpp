/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b218` (_code @ 0x13b218, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5820(...);
int FUN_002bcc60(...);
int FUN_002c38fc(...);
int FUN_002c526c(...);
int nn_os_SharedMemoryBlock_AttachAndMap(...);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int nn_gxlow_CTR_InterruptReceiver_ReceiverThreadFunc(...); /* 0x147ab8 */
extern unsigned char LAB_0014da38; /* 0x14da38 */
extern unsigned char LAB_001525f8; /* 0x1525f8 */
extern unsigned char LAB_00152604; /* 0x152604 */

extern int FUN_00147dd0(void);
extern unsigned int FUN_002ad264(void);
extern int nngxCheckVramBank(void);
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_gxlow_CTR_CmdReqQueueTx_Initialize(unsigned int, unsigned int);
extern unsigned int nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue(unsigned int, unsigned int, unsigned int, unsigned int, int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);
/* Supplied declaration required: nn_os_SharedMemoryBlock_AttachAndMap. */


void FUN_0013b218(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned char *temp_v8;
  int temp_v9;
  
  puVar1 = (unsigned char *)&temp_v2;
  temp_v4 = 0;
  FUN_002c38fc();
  nn_os_CriticalSection_Enter(param_1);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  temp_v2 = 0;
  FUN_002b5820(&temp_v2,0);
  if (-1 < (int)puVar1) {
    puVar1 = (unsigned char *)0x0;
    *(unsigned int *)(param_1 + 0x2c) = temp_v2;
  }
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 0x77) = 0;
  *(unsigned char *)(param_1 + 0x76) = 0;
  nn_os_LightEvent_Initialize(param_1 + 100,0);
  temp_v2 = FUN_002ad264();
  temp_v0 = nngxCheckVramBank();
  if (temp_v0 == 0) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 2;
  }
  temp_v0 = FUN_00147dd0();
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 | 4;
  }
  temp_v1 = nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue
                    (temp_v2,*(unsigned int *)(param_1 + 0x2c),temp_v1,(unsigned int)&temp_v4,&temp_v3);
  *(char *)(param_1 + 0x74) = (char)temp_v3;
  nn_os_SharedMemoryBlock_AttachAndMap(param_1 + 0x38,temp_v4,0x1000,0);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x40) + temp_v3 * 0x40;
  nn_gxlow_CTR_CmdReqQueueTx_Initialize
            (param_1 + 0x58,temp_v3 * 0x200 + 0x800 + *(int *)(param_1 + 0x40));
  temp_v0 = temp_v3 * 0x80 + 0x200 + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = temp_v0;
  *(int *)(param_1 + 0x60) = temp_v0 + 0x40;
  if (temp_v1 == 0x2a07) {
    *(unsigned char *)(param_1 + 0x75) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x75) = 0;
  }
  temp_v5 = 4;
  temp_v6 = &LAB_0014da38;
  temp_v7 = &LAB_00152604;
  temp_v8 = &LAB_001525f8;
  temp_v0 = param_1 + 0x6c;
  temp_v9 = param_1;
  FUN_002bcc60(temp_v0,&temp_v5,nn_gxlow_CTR_InterruptReceiver_ReceiverThreadFunc,&temp_v9);
  if (temp_v0 < 0) {
    FUN_002c526c();
  }
  nn_os_CriticalSection_Leave(param_1);
  return;
}

} /* extern "C" */
