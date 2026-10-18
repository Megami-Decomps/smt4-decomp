/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0af4` (_code @ 0x1a0af4, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_001a0af4(int *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter();
  piVar4 = (int *)param_1[2];
  piVar2 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)*piVar4;
    temp_v0 = param_1[1];
    if (piVar3 != (int *)0x0) {
      do {
        piVar2 = piVar3;
        if (((unsigned int)(param_3 + param_4) <= (unsigned int)(temp_v0 - (piVar3[3] + piVar3[2]))) ||
           (temp_v0 = piVar3[2] - param_4, piVar2 = (int *)0x0, piVar4 == piVar3)) goto LAB_001a0b74;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
LAB_001a0c24:
    temp_v0 = *param_1;
    if (piVar4 != (int *)0x0) {
      if ((unsigned int)piVar4[2] < (unsigned int)(temp_v0 + param_3 + param_4)) {
        nn_os_CriticalSection_Leave(param_1 + 3);
        return 0;
      }
      param_2[1] = (int)piVar4;
      *(int **)(*piVar4 + 4) = param_2;
      *param_2 = *piVar4;
      *piVar4 = (int)param_2;
      param_1[2] = (int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave(param_1 + 3);
      return temp_v0;
    }
    if ((unsigned int)param_1[1] < (unsigned int)(temp_v0 + param_3)) {
      nn_os_CriticalSection_Leave(param_1 + 3);
      return 0;
    }
  }
  else {
LAB_001a0b74:
    if (piVar2 == (int *)0x0) goto LAB_001a0c24;
    temp_v0 = piVar2[2] + piVar2[3] + param_4;
    if (piVar4 != (int *)0x0) {
      piVar3 = (int *)*piVar4;
    }
    else {
      piVar3 = (int *)0x0;
    }
    temp_v1 = piVar3 != piVar2;
    if (temp_v1) {
      piVar3 = (int *)piVar2[1];
    }
    if (temp_v1 && piVar3 != (int *)0x0) {
      if (piVar4 == piVar3) {
        if (piVar4 == (int *)0x0) {
          param_2[1] = (int)param_2;
          *param_2 = (int)param_2;
        }
        else {
          param_2[1] = (int)piVar4;
          *(int **)(*piVar4 + 4) = param_2;
          *param_2 = *piVar4;
          *piVar4 = (int)param_2;
        }
        param_1[2] = (int)param_2;
      }
      else {
        param_2[1] = (int)piVar3;
        *(int **)(*piVar3 + 4) = param_2;
        *param_2 = *piVar3;
        *piVar3 = (int)param_2;
      }
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave(param_1 + 3);
      return temp_v0;
    }
    if (piVar4 != (int *)0x0) {
      param_2[1] = (int)piVar4;
      *(int **)(*piVar4 + 4) = param_2;
      *param_2 = *piVar4;
      *piVar4 = (int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave(param_1 + 3);
      return temp_v0;
    }
  }
  param_2[1] = (int)param_2;
  *param_2 = (int)param_2;
  param_1[2] = (int)param_2;
  param_2[2] = temp_v0;
  param_2[3] = param_3;
  nn_os_CriticalSection_Leave(param_1 + 3);
  return temp_v0;
}
