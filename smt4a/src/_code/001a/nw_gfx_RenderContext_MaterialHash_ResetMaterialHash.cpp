/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_RenderContext_MaterialHash_ResetMaterialHash` (_code @ 0x1a39d0, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_RenderContext_MaterialHash_ResetMaterialHash(unsigned int *param_1,unsigned int param_2)

{
  if ((~param_2 & 1) == 0) {
    *param_1 = 0xffffffff;
  }
  if ((~param_2 & 2) == 0) {
    param_1[1] = 0xffffffff;
  }
  if ((~param_2 & 4) == 0) {
    param_1[2] = 0xffffffff;
  }
  if ((~param_2 & 8) == 0) {
    param_1[3] = 0xffffffff;
  }
  if ((~param_2 & 0x10) == 0) {
    param_1[4] = 0xffffffff;
  }
  if ((~param_2 & 0x20) == 0) {
    param_1[5] = 0xffffffff;
  }
  if ((~param_2 & 0x80) == 0) {
    param_1[6] = 0xffffffff;
  }
  if ((~param_2 & 0x100) == 0) {
    param_1[7] = 0xffffffff;
  }
  if ((~param_2 & 0x200) == 0) {
    param_1[8] = 0xffffffff;
  }
  if ((~param_2 & 0x800) == 0) {
    param_1[9] = 0xffffffff;
  }
  if ((~param_2 & 0x400) == 0) {
    param_1[10] = 0xffffffff;
  }
  return;
}

} /* extern "C" */
