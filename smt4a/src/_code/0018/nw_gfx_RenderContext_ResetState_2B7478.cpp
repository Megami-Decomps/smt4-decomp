/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_RenderContext_ResetState_2B7478` (_code @ 0x18ceac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a3a5c(void);
int FUN_001a3a84(int);
int nw_gfx_RenderContext_MaterialHash_ResetMaterialHash(int, int);

/* Supplied declaration required: FUN_001a3a5c. */
/* Supplied declaration required: FUN_001a3a84. */
/* Supplied declaration required: nw_gfx_RenderContext_MaterialHash_ResetMaterialHash. */


void nw_gfx_RenderContext_ResetState_2B7478(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  FUN_001a3a84(param_1 + 0x40);
  *(unsigned char *)(param_1 + 0x12) = 1;
  temp_v0 = *(int *)(param_1 + 8);
  *(unsigned char *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  FUN_001a3a5c();
  nw_gfx_RenderContext_MaterialHash_ResetMaterialHash(param_1 + 0x100,0x1fff);
  return;
}

} /* extern "C" */
