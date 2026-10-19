/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00130514` (_code @ 0x130514, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int nw_snd_internal_TaskThread_ThreadFunc(); /* 0x140664 */
extern unsigned char LAB_0014da38; /* 0x14da38 */
extern unsigned char LAB_001525f8; /* 0x1525f8 */
extern unsigned char LAB_00152604; /* 0x152604 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0014db9c. */
/* Supplied declaration required: FUN_002bb020. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


unsigned char FUN_00130514(int *param_1,unsigned int param_2,int *param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  int temp_v0;
  unsigned char temp_v1 [4];
  int *temp_v2;
  int uStack_30;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(unsigned char *)(param_1 + 5) = 1;
    FUN_002bb020();
    FUN_0014db9c();
    temp_v0 = *param_1;
    puVar1 = temp_v1;
    FUN_002c40f8(puVar1,&temp_v0,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 1) = 1;
    nn_os_Thread_FinalizeImpl((unsigned int)param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
    param_1[4] = -1;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
  }
  *(unsigned char *)(param_1 + 5) = 0;
  FUN_002c38fc(param_1 + 2);
  uStack_30 = 4;
  temp_v3 = &LAB_0014da38;
  temp_v4 = &LAB_00152604;
  temp_v5 = &LAB_001525f8;
  temp_v0 = 0;
  piVar2 = param_1;
  temp_v2 = param_1;
  FUN_002bcc60(param_1,&uStack_30,nw_snd_internal_TaskThread_ThreadFunc,&temp_v2,
               *param_3 + param_3[1],param_2,0xfffffffe);
  if ((((unsigned int)piVar2 & 0x7e00000) != 0x600000) && ((int)piVar2 < 0)) {
    FUN_002c526c(piVar2);
  }
  if (-1 < (int)piVar2) {
    *(unsigned char *)((int)param_1 + 0x15) = 1;
  }
  return -1 < (int)piVar2;
}
