/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6a48` (_code @ 0x3d6a48, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00227414. */


void FUN_003d6a48(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v1 = *(float *)(param_1 + 0x74c);
  temp_v2 = *(float *)(param_1 + 0x744) - *(float *)(param_1 + 0x738);
  temp_v3 = *(float *)(param_1 + 0x748) - *(float *)(param_1 + 0x73c);
  temp_v4 = temp_v1 - *(float *)(param_1 + 0x740);
  FUN_00227414(*(unsigned int *)(param_1 + 0x758),*(int *)(param_1 + 0x750),
               *(unsigned int *)(param_1 + 0x754));
  *(float *)(param_1 + 0x738) = *(float *)(param_1 + 0x738) + temp_v2 * temp_v1;
  *(float *)(param_1 + 0x73c) = *(float *)(param_1 + 0x73c) + temp_v3 * temp_v1;
  *(float *)(param_1 + 0x740) = *(float *)(param_1 + 0x740) + temp_v4 * temp_v1;
  *(float *)(param_1 + 0x764) =
       *(float *)(param_1 + 0x764) +
       (*(float *)(param_1 + 0x770) - *(float *)(param_1 + 0x764)) * temp_v1;
  *(float *)(param_1 + 0x768) =
       *(float *)(param_1 + 0x768) +
       (*(float *)(param_1 + 0x774) - *(float *)(param_1 + 0x768)) * temp_v1;
  *(float *)(param_1 + 0x76c) =
       *(float *)(param_1 + 0x76c) +
       (*(float *)(param_1 + 0x778) - *(float *)(param_1 + 0x76c)) * temp_v1;
  temp_v0 = *(int *)(param_1 + 0x754) + 1;
  *(int *)(param_1 + 0x754) = temp_v0;
  if (*(int *)(param_1 + 0x750) < temp_v0) {
    *(float *)(param_1 + 0x738) = *(float *)(param_1 + 0x744);
    *(unsigned int *)(param_1 + 0x73c) = *(unsigned int *)(param_1 + 0x748);
    *(unsigned int *)(param_1 + 0x740) = *(unsigned int *)(param_1 + 0x74c);
    *(float *)(param_1 + 0x764) = *(float *)(param_1 + 0x770);
    *(unsigned int *)(param_1 + 0x768) = *(unsigned int *)(param_1 + 0x774);
    *(unsigned int *)(param_1 + 0x76c) = *(unsigned int *)(param_1 + 0x778);
    *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) & 0xff7fffff;
  }
  return;
}
