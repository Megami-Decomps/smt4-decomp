/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleShape_AddVertexParamSize` (_code @ 0x2a48e4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_gfx_ParticleShape_AddVertexParamSize(int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = 1;
  if (param_1 == 0x1406) {
    temp_v0 = 4;
  }
  return param_2 * temp_v0 + ((param_3 + 0x1fU) & 0xffffffe0);
}
