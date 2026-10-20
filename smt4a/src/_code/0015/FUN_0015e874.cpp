/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e874` (_code @ 0x15e874, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fc38(float *);

/* Supplied declaration required: FUN_0017fc38. */


void FUN_0015e874(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  float temp_v0;
  
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  temp_v0 = in_s0;
  FUN_0017fc38((float *)(param_1 + 0xb8));
  *(float *)(param_1 + 0xb8) = in_s0;
  *(float *)(param_1 + 0xbc) = temp_v0;
  *(unsigned int *)(param_1 + 0xc0) = param_2;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  return;
}

} /* extern "C" */
