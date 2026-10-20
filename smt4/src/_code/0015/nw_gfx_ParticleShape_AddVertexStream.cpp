/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleShape_AddVertexStream` (_code @ 0x150908, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(...);

/* Supplied declaration required: rt_memclr. */


int nw_gfx_ParticleShape_AddVertexStream
              (int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int *param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = 1;
  temp_v1 = (*param_6 + 0x1fU) & 0xffffffe0;
  if (param_3 == 0x1406) {
    temp_v0 = 4;
  }
  temp_v0 = (param_5 + 8) * param_4 * temp_v0;
  temp_v2 = temp_v1 + temp_v0;
  *param_6 = temp_v2 + temp_v0;
  rt_memclr(temp_v1,temp_v0);
  rt_memclr(temp_v2,temp_v0);
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x38) = param_2;
  *(int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x3c) = param_3;
  *(char *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x40) = (char)param_4;
  *(unsigned char *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x41) = 1;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x44) = temp_v1;
  *(int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x48) = temp_v2;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x4c) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x34) * 0x1c + 0x50) = 0;
  temp_v0 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = temp_v0;
  return param_1 + temp_v0 * 0x1c + 0x1c;
}

} /* extern "C" */
