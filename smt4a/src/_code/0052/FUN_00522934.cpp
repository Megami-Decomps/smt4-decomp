/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522934` (_code @ 0x522934, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneHelper_CalculateDepth(int, int, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_00522934(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = *(int *)(param_1[1] + 200);
  if (temp_v2 != 0) {
    temp_v2 = param_1[1] + 200 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  piVar1 = (int *)(temp_v2 + *(int *)(param_2 + 0x18) * 4);
  temp_v2 = *piVar1;
  if (temp_v2 != 0) {
    temp_v2 = temp_v2 + (int)piVar1;
  }
  else {
    temp_v2 = 0;
  }
  if (*(int *)(temp_v2 + 0x2c) != 1) {
    temp_v0 = *(int *)(temp_v2 + 0x1c);
    if (temp_v0 != 0) {
      temp_v3 = temp_v0 + temp_v2 + 0x1c;
    }
    temp_v1 = *param_1 + 0x8c;
  }
  else {
    if (*(int *)(temp_v2 + 0x30) != 0) {
      piVar1 = (int *)(temp_v2 + 0x30 + *(int *)(temp_v2 + 0x30));
    }
    else {
      piVar1 = (int *)0x0;
    }
    if (*piVar1 != 0) {
      temp_v0 = (int)piVar1 + *piVar1;
    }
    else {
      temp_v0 = 0;
    }
    temp_v1 = *(int *)(temp_v0 + 4);
    if (temp_v1 != 0) {
      piVar1 = (int *)(temp_v0 + 4 + temp_v1);
    }
    else {
      piVar1 = (int *)0x0;
    }
    temp_v1 = *piVar1;
    temp_v0 = (**(romwright_code **)(**(int **)(*param_1 + 0x220) + 0x1c))();
    temp_v1 = *(int *)(temp_v0 + 4) + temp_v1 * 0x30;
    temp_v0 = *(int *)(temp_v2 + 0x1c);
    if (temp_v0 != 0) {
      temp_v3 = temp_v0 + temp_v2 + 0x1c;
    }
  }
  nw_gfx_SceneHelper_CalculateDepth(temp_v3 + 4,temp_v1,param_3);
  return;
}

} /* extern "C" */
