/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1f78` (_code @ 0x4f1f78, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f1f78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v1 = *(float *)(param_1 + 0x7b8);
  temp_v2 = *(float *)(param_1 + 0x7b0) - *(float *)(param_1 + 0x7a4);
  temp_v3 = *(float *)(param_1 + 0x7b4) - *(float *)(param_1 + 0x7a8);
  temp_v4 = temp_v1 - *(float *)(param_1 + 0x7ac);
  FUN_003d4dd4(*(unsigned int *)(param_1 + 0x7c4),*(int *)(param_1 + 0x7bc),
               *(unsigned int *)(param_1 + 0x7c0));
  *(float *)(param_1 + 0x7a4) = *(float *)(param_1 + 0x7a4) + temp_v2 * temp_v1;
  *(float *)(param_1 + 0x7a8) = *(float *)(param_1 + 0x7a8) + temp_v3 * temp_v1;
  *(float *)(param_1 + 0x7ac) = *(float *)(param_1 + 0x7ac) + temp_v4 * temp_v1;
  *(float *)(param_1 + 2000) =
       *(float *)(param_1 + 2000) +
       (*(float *)(param_1 + 0x7dc) - *(float *)(param_1 + 2000)) * temp_v1;
  *(float *)(param_1 + 0x7d4) =
       *(float *)(param_1 + 0x7d4) +
       (*(float *)(param_1 + 0x7e0) - *(float *)(param_1 + 0x7d4)) * temp_v1;
  *(float *)(param_1 + 0x7d8) =
       *(float *)(param_1 + 0x7d8) +
       (*(float *)(param_1 + 0x7e4) - *(float *)(param_1 + 0x7d8)) * temp_v1;
  temp_v0 = *(int *)(param_1 + 0x7c0) + 1;
  *(int *)(param_1 + 0x7c0) = temp_v0;
  if (*(int *)(param_1 + 0x7bc) < temp_v0) {
    *(float *)(param_1 + 0x7a4) = *(float *)(param_1 + 0x7b0);
    *(unsigned int *)(param_1 + 0x7a8) = *(unsigned int *)(param_1 + 0x7b4);
    *(unsigned int *)(param_1 + 0x7ac) = *(unsigned int *)(param_1 + 0x7b8);
    *(unsigned int *)(param_1 + 2000) = *(unsigned int *)(param_1 + 0x7dc);
    *(unsigned int *)(param_1 + 0x7d4) = *(unsigned int *)(param_1 + 0x7e0);
    *(unsigned int *)(param_1 + 0x7d8) = *(unsigned int *)(param_1 + 0x7e4);
    *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) & 0xff7fffff;
  }
  return;
}
