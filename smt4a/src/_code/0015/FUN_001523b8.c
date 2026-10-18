/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001523b8` (_code @ 0x1523b8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0016fba0. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_ulcd_CTR_StereoCamera_SetBaseFrustum. */


void FUN_001523b8(char *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 8 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  *(unsigned int *)(param_1 + 0x28) = in_s0;
  *(unsigned int *)(param_1 + 0x2c) = in_s1;
  *(unsigned int *)(param_1 + 0x30) = in_s2;
  *(unsigned int *)(param_1 + 0x34) = in_s3;
  FUN_0016fba0(param_1 + 0xa8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xa8,param_2);
  nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x158,param_1 + 0xa8);
  FUN_0016fba0(param_1 + 0xe8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xe8,0);
  if (*param_1 != '\0') {
    nn_ulcd_CTR_StereoCamera_SetBaseFrustum(param_1 + 0x4a0,param_1 + 0xe8);
    return;
  }
  return;
}
