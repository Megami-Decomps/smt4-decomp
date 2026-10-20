/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_AddressSpaceManager_Allocate` (_code @ 0x2bb7ec, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int nn_os_AddressSpaceManager_Allocate(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s) */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char temp_v1;
  
  puVar1 = param_1 + 3;
  nn_os_CriticalSection_Enter((unsigned int)puVar1);
  puVar5 = (unsigned int *)param_1[2];
  puVar3 = (unsigned int *)0x0;
  if (puVar5 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)*puVar5;
    temp_v0 = param_1[1];
    if (puVar4 != (unsigned int *)0x0) {
      do {
        puVar3 = puVar4;
        if ((param_3 + param_4 <= temp_v0 - (puVar4[3] + puVar4[2])) ||
           (temp_v0 = puVar4[2] - param_4, puVar3 = (unsigned int *)0x0, puVar5 == puVar4)) goto LAB_002bb86c;
        puVar4 = (unsigned int *)*puVar4;
      } while (puVar4 != (unsigned int *)0x0);
    }
LAB_002bb91c:
    temp_v0 = *param_1;
    if (puVar5 != (unsigned int *)0x0) {
      if (puVar5[2] < temp_v0 + param_3 + param_4) {
        nn_os_CriticalSection_Leave((unsigned int)puVar1);
        return 0;
      }
      param_2[1] = (unsigned int)puVar5;
      *(unsigned int **)(*puVar5 + 4) = param_2;
      *param_2 = *puVar5;
      *puVar5 = (unsigned int)param_2;
      param_1[2] = (unsigned int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)puVar1);
      return temp_v0;
    }
    if (param_1[1] < temp_v0 + param_3) {
      nn_os_CriticalSection_Leave((unsigned int)puVar1);
      return 0;
    }
  }
  else {
LAB_002bb86c:
    if (puVar3 == (unsigned int *)0x0) goto LAB_002bb91c;
    temp_v0 = puVar3[2] + puVar3[3] + param_4;
    if (puVar5 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)*puVar5;
    }
    else {
      puVar4 = (unsigned int *)0x0;
    }
    temp_v1 = puVar4 != puVar3;
    if (temp_v1) {
      puVar4 = (unsigned int *)puVar3[1];
    }
    if (temp_v1 && puVar4 != (unsigned int *)0x0) {
      if (puVar5 == puVar4) {
        if (puVar5 == (unsigned int *)0x0) {
          param_2[1] = (unsigned int)param_2;
          *param_2 = (unsigned int)param_2;
        }
        else {
          param_2[1] = (unsigned int)puVar5;
          *(unsigned int **)(*puVar5 + 4) = param_2;
          *param_2 = *puVar5;
          *puVar5 = (unsigned int)param_2;
        }
        param_1[2] = (unsigned int)param_2;
      }
      else {
        param_2[1] = (unsigned int)puVar4;
        *(unsigned int **)(*puVar4 + 4) = param_2;
        *param_2 = *puVar4;
        *puVar4 = (unsigned int)param_2;
      }
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)puVar1);
      return temp_v0;
    }
    if (puVar5 != (unsigned int *)0x0) {
      param_2[1] = (unsigned int)puVar5;
      *(unsigned int **)(*puVar5 + 4) = param_2;
      *param_2 = *puVar5;
      *puVar5 = (unsigned int)param_2;
      param_2[2] = temp_v0;
      param_2[3] = param_3;
      nn_os_CriticalSection_Leave((unsigned int)puVar1);
      return temp_v0;
    }
  }
  param_2[1] = (unsigned int)param_2;
  *param_2 = (unsigned int)param_2;
  param_1[2] = (unsigned int)param_2;
  param_2[2] = temp_v0;
  param_2[3] = param_3;
  nn_os_CriticalSection_Leave((unsigned int)puVar1);
  return temp_v0;
}

} /* extern "C" */
