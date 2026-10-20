/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00425ab0` (_code @ 0x425ab0, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(...);
int memAlloc(...);
int resultReportIfFailed(...);
int nn_os_CriticalSection_Initialize(...);
int nn_os_LightEvent_Initialize(...);
int nn_os_LightEvent_Signal(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);
int counterPairReset(...);

/* stack frame of param_6: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

extern int FUN_004241a8(...); /* 0x4241a8 */
extern unsigned char LAB_00514a84; /* 0x514a84 */
extern unsigned char LAB_00514b2c; /* 0x514b2c */
extern unsigned char LAB_00514b8c; /* 0x514b8c */
extern unsigned int DAT_00588100; /* 0x588100 */
extern unsigned int *DAT_00588104; /* 0x588104 */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: resultReportIfFailed. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */
/* Supplied declaration required: counterPairReset. */


unsigned int
FUN_00425ab0(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6 [2];
  
  if ((param_2 != 0 && param_3 != 0) && (param_4 != 0 && param_5 != 0)) {
    *(int *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x1b8) = param_4;
    *(int *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x1bc) = param_5;
    *(unsigned int *)(param_1 + 0x1c0) = param_6;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x558) = 0;
    *(unsigned int *)(param_1 + 0x554) = 0;
    *(unsigned int *)(param_1 + 0x550) = 0;
    *(unsigned int *)(param_1 + 0x548) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x484) = 0;
    *(unsigned int *)(param_1 + 0x2e8) = 0;
    *(unsigned int *)(param_1 + 0x46c) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x1c4) = 0;
    *(unsigned int *)(param_1 + 0x474) = 0;
    *(unsigned int *)(param_1 + 0x47c) = 0;
    *(unsigned int *)(param_1 + 0x470) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x478) = 0;
    *(unsigned int *)(param_1 + 0x480) = 0;
    *(unsigned char *)(param_1 + 0x54c) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
    *(unsigned int *)(param_1 + 0x134) = 0;
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x140) = 0;
    *(unsigned int *)(param_1 + 0x150) = 0;
    *(unsigned int *)(param_1 + 0x154) = 0;
    *(unsigned int *)(param_1 + 0x144) = 0;
    *(unsigned int *)(param_1 + 0x148) = 0;
    *(unsigned int *)(param_1 + 0x14c) = 0;
    counterPairReset(param_1 + 0x158);
    nn_os_LightEvent_Initialize(param_1 + 0x20,1);
    nn_os_CriticalSection_Initialize(param_1);
    nn_os_LightEvent_Signal(param_1 + 0x20);
    *(unsigned char *)(param_1 + 0x10) = 0;
    *(unsigned char *)(param_1 + 0x11) = 0;
    temp_v0 = 0x100;
    memAlloc(0x100,0x100,0,0x2000,0x1000,1);
    puVar2 = (unsigned int *)0x18;
    DAT_00588100 = temp_v0;
    asdOperatorNew();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    DAT_00588104 = puVar2;
    resultReportIfFailed();
    temp_v1 = param_1 + 0x28;
    temp_v2 = 4;
    temp_v3 = &LAB_00514a84;
    temp_v4 = &LAB_00514b8c;
    temp_v5 = &LAB_00514b2c;
    temp_v6[0] = param_1;
    FUN_002fb0d4(temp_v1,&temp_v2,FUN_004241a8,temp_v6,DAT_00588104[3] + DAT_00588104[2],0x11,
                 0xfffffffe,0);
    if (temp_v1 < 0) {
      FUN_002e3140();
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
