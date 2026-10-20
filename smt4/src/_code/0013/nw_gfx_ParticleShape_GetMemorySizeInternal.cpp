/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleShape_GetMemorySizeInternal` (_code @ 0x13dfc8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_ParticleShape_GetMemorySizeInternal(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1[1];
  param_1[1] = 0x20;
  temp_v1 = 0x20;
  if ((unsigned int)param_1[2] >= 0x20) {
    temp_v1 = param_1[2];
  }
  param_1[2] = temp_v1;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) + 0x860;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  return;
}

} /* extern "C" */
