/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042e388` (_code @ 0x42e388, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int DAT_006426c0; /* 0x6426c0 */

/* Supplied declaration required: FUN_00501928. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_GetMessHeader. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_ReadOutBoxIndex. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_WriteBoxInfo. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int * FUN_0042e388(int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  int *piVar6;
  int temp_v3;
  
  nn_os_CriticalSection_Enter(&DAT_006426c0);
  if (param_1[1] == 0) {
    nn_os_CriticalSection_Leave(&DAT_006426c0);
    return (int *)0xc8810bea;
  }
  if (param_2 != 1) {
    piVar2 = param_1;
    FUN_00501928(param_1,param_2,param_3);
    temp_v3 = 0;
    if ((piVar2 != (int *)0xffffffff) &&
       (temp_v0 = nn_cec_CTR_MessageBox_GetMessHeader(param_1,param_2,piVar2), temp_v3 = 0, temp_v0 != 0))
    {
      temp_v3 = *(int *)(temp_v0 + 4);
    }
    piVar2 = (int *)(**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],6,param_2,param_3,8);
    if (-1 < (int)piVar2) {
      if (param_4 != 0) {
        nn_cec_CTR_MessageBox_WriteBoxInfo(param_1,0,param_1 + 0x7f,param_1 + 0x87);
        piVar2 = param_1;
        if ((int)param_1 < 0) {
          nn_os_CriticalSection_Leave(&DAT_006426c0);
          return piVar2;
        }
      }
      else {
        if (*(char *)((int)param_1 + 10) == '\0') {
          param_1[0x21f] = param_1[0x7f];
          param_1[0x220] = param_1[0x80];
          param_1[0x221] = param_1[0x81];
          param_1[0x222] = param_1[0x82];
          param_1[0x223] = param_1[0x83];
          param_1[0x224] = param_1[0x84];
          param_1[0x225] = param_1[0x85];
          param_1[0x226] = param_1[0x86];
        }
        *(unsigned char *)((int)param_1 + 10) = 1;
        param_1[0x222] = param_1[0x222] - temp_v3;
        param_1[0x224] = param_1[0x224] - 1;
      }
      nn_os_CriticalSection_Leave(&DAT_006426c0);
      return piVar2;
    }
    if (param_4 == 0) {
      if (*(char *)((int)param_1 + 10) == '\0') {
        param_1[0x21f] = param_1[0x7f];
        param_1[0x220] = param_1[0x80];
        param_1[0x221] = param_1[0x81];
        param_1[0x222] = param_1[0x82];
        param_1[0x223] = param_1[0x83];
        param_1[0x224] = param_1[0x84];
        param_1[0x225] = param_1[0x85];
        param_1[0x226] = param_1[0x86];
      }
      *(unsigned char *)((int)param_1 + 10) = 1;
      nn_os_CriticalSection_Leave(&DAT_006426c0);
      return piVar2;
    }
    piVar6 = param_1 + 0x87;
    piVar5 = param_1 + 0x7f;
    temp_v2 = 0;
  }
  else {
    piVar2 = param_1;
    FUN_00501928(param_1,1,param_3);
    temp_v3 = 0;
    if ((piVar2 != (int *)0xffffffff) &&
       (temp_v0 = nn_cec_CTR_MessageBox_GetMessHeader(param_1,1,piVar2), temp_v3 = 0, temp_v0 != 0)) {
      temp_v3 = *(int *)(temp_v0 + 4);
    }
    piVar2 = (int *)(**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],7,1,param_3,8);
    if (-1 < (int)piVar2) {
      if (param_4 != 0) {
        piVar2 = param_1;
        nn_cec_CTR_MessageBox_WriteBoxInfo(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
        if ((int)piVar2 < 0) {
          nn_os_CriticalSection_Leave(&DAT_006426c0);
          return piVar2;
        }
      }
      else {
        if (*(char *)((int)param_1 + 0xb) == '\0') {
          param_1[0x227] = param_1[0xeb];
          param_1[0x228] = param_1[0xec];
          param_1[0x229] = param_1[0xed];
          param_1[0x22a] = param_1[0xee];
          param_1[0x22b] = param_1[0xef];
          param_1[0x22c] = param_1[0xf0];
          param_1[0x22d] = param_1[0xf1];
          param_1[0x22e] = param_1[0xf2];
        }
        *(unsigned char *)((int)param_1 + 0xb) = 1;
        param_1[0x22a] = param_1[0x22a] - temp_v3;
        param_1[0x22c] = param_1[0x22c] - 1;
      }
      temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],param_3,8,3);
      if ((temp_v1 & 0x80000000) == 0) {
        nn_cec_CTR_MessageBox_ReadOutBoxIndex(param_1);
      }
      nn_os_CriticalSection_Leave(&DAT_006426c0);
      return piVar2;
    }
    if (param_4 == 0) {
      if (*(char *)((int)param_1 + 0xb) == '\0') {
        param_1[0x227] = param_1[0xeb];
        param_1[0x228] = param_1[0xec];
        param_1[0x229] = param_1[0xed];
        param_1[0x22a] = param_1[0xee];
        param_1[0x22b] = param_1[0xef];
        param_1[0x22c] = param_1[0xf0];
        param_1[0x22d] = param_1[0xf1];
        param_1[0x22e] = param_1[0xf2];
      }
      *(unsigned char *)((int)param_1 + 0xb) = 1;
      nn_os_CriticalSection_Leave(&DAT_006426c0);
      return piVar2;
    }
    piVar6 = param_1 + 0xf3;
    piVar5 = param_1 + 0xeb;
    temp_v2 = 1;
  }
  nn_cec_CTR_MessageBox_WriteBoxInfo(param_1,temp_v2,piVar5,piVar6);
  nn_os_CriticalSection_Leave(&DAT_006426c0);
  return piVar2;
}
