/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Skeleton_CreateCallbacks` (_code @ 0x1c1460, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_Skeleton_CreateCallbacks(int param_1,int *param_2,unsigned int param_3,int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)0x0;
  pcVar4 = *(romwright_code **)(*param_2 + 8);
  if (param_4 != 0) {
    if (param_3 != 0) {
      puVar1 = (unsigned int *)(*pcVar4)();
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)0x0;
      }
      else {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,param_3 << 2,4);
        if (temp_v0 != 0) {
          *puVar1 = (unsigned int)param_2;
          puVar1[2] = temp_v0;
          puVar1[1] = (unsigned int)param_2;
          puVar1[3] = temp_v0;
          puVar1[4] = param_3 & 0x3fffffff;
        }
        else {
          (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
          puVar1 = (unsigned int *)0x0;
        }
      }
      *(unsigned int **)(param_1 + 0x10) = puVar1;
      puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
      if (puVar1 != (unsigned int *)0x0) {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,param_3 << 2,4);
        if (temp_v0 != 0) {
          *puVar1 = (unsigned int)param_2;
          puVar1[2] = temp_v0;
          puVar1[1] = (unsigned int)param_2;
          puVar1[3] = temp_v0;
          puVar1[4] = param_3 & 0x3fffffff;
          puVar5 = puVar1;
        }
        else {
          (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
        }
      }
      *(unsigned int **)(param_1 + 0x14) = puVar5;
      return;
    }
    puVar1 = (unsigned int *)(*pcVar4)(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = (unsigned int)param_2;
      puVar1[1] = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
    }
    *(unsigned int **)(param_1 + 0x10) = puVar1;
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      *(unsigned int **)(param_1 + 0x14) = puVar5;
      return;
    }
    *puVar1 = (unsigned int)param_2;
    puVar1[2] = 0;
    puVar1[1] = (unsigned int)param_2;
    puVar1[3] = 0;
    puVar5 = puVar1 + 1;
    puVar1[4] = puVar1[4] & 0xc0000000;
    temp_v1 = 0;
  }
  else {
    puVar1 = (unsigned int *)(*pcVar4)(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = (unsigned int)param_2;
      puVar1[1] = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0x40000000;
    }
    *(unsigned int **)(param_1 + 0x10) = puVar1;
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      *(unsigned int **)(param_1 + 0x14) = puVar5;
      return;
    }
    puVar5 = puVar1 + 1;
    *puVar1 = (unsigned int)param_2;
    *puVar5 = (unsigned int)param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar1[4] & 0xc0000000;
    temp_v1 = 0x40000000;
  }
  puVar5[3] = temp_v1;
  puVar5 = puVar1;
  *(unsigned int **)(param_1 + 0x14) = puVar5;
  return;
}

} /* extern "C" */
