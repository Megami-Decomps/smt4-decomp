/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149e80` (_code @ 0x149e80, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int nw_gfx_ParticleShape_AddVertexStreamSize(unsigned int, unsigned int, unsigned int);


void FUN_00149e80(int *param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  int *unaff_r4;
  int *piVar7;
  unsigned int temp_v4;
  
  temp_v3 = *(int *)(param_2 + 0x30);
  if (temp_v3 != 0) {
    puVar4 = (unsigned int *)(param_2 + 0x30 + temp_v3);
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  temp_v3 = 0;
  temp_v0 = puVar4[2];
  temp_v4 = *puVar4;
  if (temp_v0 != 0) {
    unaff_r4 = (int *)((int)puVar4 + temp_v0 + 8);
  }
  if (temp_v0 == 0) {
    unaff_r4 = (int *)0x0;
  }
  piVar7 = unaff_r4 + puVar4[1];
  for (; unaff_r4 != piVar7; unaff_r4 = unaff_r4 + 1) {
    if (*unaff_r4 != 0) {
      temp_v0 = *unaff_r4 + (int)unaff_r4;
    }
    else {
      temp_v0 = 0;
    }
    if (*unaff_r4 != 0) {
      piVar2 = (int *)(*unaff_r4 + (int)unaff_r4);
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (*piVar2 != 0x40000000) {
      switch(*(unsigned int *)(temp_v0 + 4)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        temp_v3 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,3,temp_v4);
        break;
      case 4:
      case 7:
        temp_v3 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,1,temp_v4);
        break;
      case 5:
      case 6:
        temp_v3 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,2,temp_v4);
      }
    }
  }
  temp_v1 = param_1[1];
  param_1[1] = 0x20;
  temp_v2 = 0x20;
  if ((unsigned int)param_1[2] >= 0x20) {
    temp_v2 = param_1[2];
  }
  param_1[2] = temp_v2;
  param_1[1] = temp_v1;
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) + temp_v3;
  if (temp_v1 <= (unsigned int)param_1[2]) {
    temp_v1 = param_1[2];
  }
  param_1[2] = temp_v1;
  return;
}
