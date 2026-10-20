/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResRgbaColorAnim_EvaluateResult` (_code @ 0x3e8e58, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002355fc(int);

/* Supplied declaration required: FUN_002355fc. */


unsigned int nw_anim_res_ResRgbaColorAnim_EvaluateResult(int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  unsigned int temp_v4;
  
  puVar1 = (unsigned int *)*param_1;
  temp_v3 = 0;
  temp_v2 = *puVar1;
  if ((temp_v2 & 0x10) == 0) {
    if ((temp_v2 & 1) != 0) {
      temp_v1 = puVar1[3];
    }
    else {
      temp_v1 = puVar1[3];
      if (temp_v1 != 0) {
        temp_v0 = (int)(puVar1 + 3) + temp_v1;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = in_s0;
      FUN_002355fc(temp_v0);
      temp_v1 = in_s0;
      in_s0 = temp_v4;
    }
    *param_2 = temp_v1;
    param_3 = param_3 | 1;
  }
  if ((temp_v2 & 0x20) == 0) {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 2) != 0) {
      temp_v1 = puVar1[4];
    }
    else {
      temp_v1 = puVar1[4];
      if (temp_v1 != 0) {
        temp_v0 = (int)(puVar1 + 4) + temp_v1;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = in_s0;
      FUN_002355fc(temp_v0);
      temp_v1 = in_s0;
      in_s0 = temp_v4;
    }
    param_2[1] = temp_v1;
    param_3 = param_3 | 2;
  }
  if ((temp_v2 & 0x40) == 0) {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 4) != 0) {
      temp_v1 = puVar1[5];
    }
    else {
      temp_v1 = puVar1[5];
      if (temp_v1 != 0) {
        temp_v0 = (int)(puVar1 + 5) + temp_v1;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = in_s0;
      FUN_002355fc(temp_v0);
      temp_v1 = in_s0;
      in_s0 = temp_v4;
    }
    param_2[2] = temp_v1;
    param_3 = param_3 | 4;
  }
  if ((temp_v2 & 0x80) == 0) {
    puVar1 = (unsigned int *)*param_1;
    if ((*puVar1 & 8) != 0) {
      in_s0 = puVar1[6];
    }
    else {
      temp_v2 = puVar1[6];
      if (temp_v2 != 0) {
        temp_v3 = temp_v2 + (int)(puVar1 + 6);
      }
      FUN_002355fc(temp_v3);
    }
    param_2[3] = in_s0;
    param_3 = param_3 | 8;
  }
  return param_3;
}

} /* extern "C" */
