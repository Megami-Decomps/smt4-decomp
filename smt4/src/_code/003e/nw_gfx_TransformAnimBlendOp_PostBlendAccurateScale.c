/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale` (_code @ 0x3e4478, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002abe38. */


unsigned int nw_gfx_TransformAnimBlendOp_PostBlendAccurateScale(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x30);
  FUN_002abe38();
  *(unsigned int *)(param_2 + 0x30) = temp_v0;
  temp_v0 = *(unsigned int *)(param_2 + 0x34);
  FUN_002abe38();
  *(unsigned int *)(param_2 + 0x34) = temp_v0;
  temp_v0 = *(unsigned int *)(param_2 + 0x38);
  FUN_002abe38();
  *(unsigned int *)(param_2 + 0x38) = temp_v0;
  *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x3c) | 0x800;
  return 1;
}
