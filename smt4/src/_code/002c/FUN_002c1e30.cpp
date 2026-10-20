/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1e30` (_code @ 0x2c1e30, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b72dc(char *);
int nn_math_ARMv6_MTX44PivotC_FAST(...);
int nn_math_ARMv6_MTX44TransposeAsm(char *, char *);
int nn_ulcd_CTR_StereoCamera_SetBaseFrustum(char *, char *);

typedef struct fn_002c1e30_arg1 fn_002c1e30_arg1;
struct fn_002c1e30_arg1 {
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
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b72dc. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_ulcd_CTR_StereoCamera_SetBaseFrustum. */


void FUN_002c1e30(char *param_1,fn_002c1e30_arg1 *param_2)

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
  FUN_002b72dc(param_1 + 0xa8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xa8,param_2);
  nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x158,param_1 + 0xa8);
  FUN_002b72dc(param_1 + 0xe8);
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0xe8,0);
  if (*param_1 != '\0') {
    nn_ulcd_CTR_StereoCamera_SetBaseFrustum(param_1 + 0x4a0,param_1 + 0xe8);
    return;
  }
  return;
}

} /* extern "C" */
