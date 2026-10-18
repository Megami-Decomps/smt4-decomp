/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280070` (_code @ 0x280070, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00280070_arg1 fn_00280070_arg1;
struct fn_00280070_arg1 {
    unsigned char pad_0x0[0x8];
    float field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0016fba0. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_ulcd_CTR_StereoCamera_SetBaseFrustum. */


void FUN_00280070(char *param_1,fn_00280070_arg1 *param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 7 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int temp_v0;
  unsigned int in_s2;
  
  *(unsigned int *)(param_1 + 0x28) = in_s0;
  *(unsigned int *)(param_1 + 0x2c) = in_s1;
  if (param_2 == (fn_00280070_arg1 *)0x0) {
    temp_v0 = 0x3fd55555;
  }
  else {
    temp_v0 = 0x3faaaaab;
  }
  *(unsigned int *)(param_1 + 0x30) = in_s2;
  *(unsigned int *)(param_1 + 0x34) = temp_v0;
  FUN_0016fba0(param_1 + 0xa8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xa8,1);
  nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x158,param_1 + 0xa8);
  FUN_0016fba0(param_1 + 0xe8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xe8,0);
  if (*param_1 == '\0') {
    return;
  }
  nn_ulcd_CTR_StereoCamera_SetBaseFrustum(param_1 + 0x4a0,param_1 + 0xe8);
  return;
}
