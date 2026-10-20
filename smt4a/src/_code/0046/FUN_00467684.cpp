/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467684` (_code @ 0x467684, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00467840(int);
int VectorFloatToUnsigned(double, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00467840. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_00467684(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float in_s0;
  int temp_v0;
  
  FUN_00467840(param_2);
  temp_v0 = VectorFloatToUnsigned(in_s0,3);
  if (*(float *)(param_2 + 4) == in_s0) {
    temp_v0 = temp_v0 + 1;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1,param_2 + temp_v0 * 0x30 + 0xc);
  return;
}

} /* extern "C" */
