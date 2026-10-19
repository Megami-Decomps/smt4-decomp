/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0af0` (_code @ 0x1a0af0, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_001a0af0(int *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 2 goto(s) */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  unsigned char temp_v1;
  
  piVar1 = param_1 + 3;
  nn_os_CriticalSection_Enter((unsigned int)piVar1);
  piVar5 = (int *)param_1[2];
  piVar3 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    piVar4 = (int *)*piVar5;
    temp_v0 = param_1[1];
    if (piVar4 != (int *)0x0) {
      do {
        piVar3 = piVar4;
        if (((unsigned int)(param_3 + param_4) <= (unsigned int)(temp_v0 - (piVar4[3] + piVar4[2]))) ||
           (temp_v0 = piVar4[2] - param_4, piVar3 = (int *)0x0, piVar5 == piVar4)) goto LAB_001a0b74;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
    }
LAB_001a0c24:
    temp_v0 = *param_1;
    if (piVar5 != (int *)0x0) {
      if ((unsigned int)piVar5[2] < (unsigned int)(temp_v0 + param_3 + param_4)) {
        nn_os_CriticalSection_Leave((unsigned int)piVar1);
        return 0;
      }
      param_2[1] = (int)piVar5;
      *(int **)(*piVar5 + 4) = param_2;
      *param_2 = *piVar5;
      *piVar5 = (int)param_2;
      param_1[2] = (int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)piVar1);
      return temp_v0;
    }
    if ((unsigned int)param_1[1] < (unsigned int)(temp_v0 + param_3)) {
      nn_os_CriticalSection_Leave((unsigned int)piVar1);
      return 0;
    }
  }
  else {
LAB_001a0b74:
    if (piVar3 == (int *)0x0) goto LAB_001a0c24;
    temp_v0 = piVar3[2] + piVar3[3] + param_4;
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)*piVar5;
    }
    else {
      piVar4 = (int *)0x0;
    }
    temp_v1 = piVar4 != piVar3;
    if (temp_v1) {
      piVar4 = (int *)piVar3[1];
    }
    if (temp_v1 && piVar4 != (int *)0x0) {
      if (piVar5 == piVar4) {
        if (piVar5 == (int *)0x0) {
          param_2[1] = (int)param_2;
          *param_2 = (int)param_2;
        }
        else {
          param_2[1] = (int)piVar5;
          *(int **)(*piVar5 + 4) = param_2;
          *param_2 = *piVar5;
          *piVar5 = (int)param_2;
        }
        param_1[2] = (int)param_2;
      }
      else {
        param_2[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = param_2;
        *param_2 = *piVar4;
        *piVar4 = (int)param_2;
      }
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)piVar1);
      return temp_v0;
    }
    if (piVar5 != (int *)0x0) {
      param_2[1] = (int)piVar5;
      *(int **)(*piVar5 + 4) = param_2;
      *param_2 = *piVar5;
      *piVar5 = (int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)piVar1);
      return temp_v0;
    }
  }
  param_2[1] = (int)param_2;
  *param_2 = (int)param_2;
  param_1[2] = (int)param_2;
  param_2[2] = temp_v0;
  param_2[3] = param_3;
  nn_os_CriticalSection_Leave((unsigned int)piVar1);
  return temp_v0;
}
