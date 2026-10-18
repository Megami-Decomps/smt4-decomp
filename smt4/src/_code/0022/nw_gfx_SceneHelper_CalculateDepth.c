/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneHelper_CalculateDepth` (_code @ 0x2258e4, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void nw_gfx_SceneHelper_CalculateDepth(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0 [4];
  
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v0,param_2,param_1);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v0,param_3 + 0x148);
  return;
}
