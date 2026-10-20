/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneEnvironment_SceneEnvironment_sub_object` (_code @ 0x12cf68, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_SceneEnvironment_SceneEnvironment_sub_object(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2[0xc];
  param_1[3] = param_2[0xd];
  param_1[4] = param_2[0xe];
  param_1[5] = param_2[0xf];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = param_2[0xf] & 0xc0000000;
  param_1[8] = 0;
  param_1[9] = (unsigned int)(param_1 + 0x10);
  param_1[10] = (unsigned int)(param_1 + 0x10);
  param_1[0x18] = 0;
  param_1[0xb] = 0x80000008;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_2;
  param_1[0x1b] = param_2[1];
  param_1[0x1c] = param_2[2];
  param_1[0x1d] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = param_2[3] & 0xc0000000;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = param_2[4];
  param_1[0x20] = param_2[5];
  param_1[0x21] = param_2[6];
  param_1[0x22] = param_2[7];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = param_2[7] & 0xc0000000;
  param_1[0x23] = param_2[8];
  param_1[0x24] = param_2[9];
  param_1[0x25] = param_2[10];
  param_1[0x26] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = param_2[0xb] & 0xc0000000;
  param_1[0x28] = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x29] = 0;
  *(unsigned char *)(param_1 + 0x2a) = 1;
  *(unsigned char *)((int)param_1 + 0xa9) = 1;
  *(unsigned char *)((int)param_1 + 0xaa) = 1;
  *(unsigned char *)((int)param_1 + 0xab) = 1;
  *(unsigned char *)(param_1 + 0x2b) = 1;
  param_1[10] = param_1[9] + param_1[0xb] * 4;
  param_1[4] = param_1[3] + param_1[5] * 4;
  puVar1 = (unsigned int *)param_1[0x1b];
  param_1[0x1c] = (unsigned int)(puVar1 + param_1[0x1d]);
  temp_v0 = (int)(puVar1 + param_1[0x1d]) - (int)puVar1;
  if (0 < temp_v0 >> 2) {
    puVar2 = puVar1;
    if (temp_v0 * 0x20000000 < 0) {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
    }
    for (temp_v0 = temp_v0 >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      *puVar1 = 0;
    }
  }
  puVar1 = (unsigned int *)param_1[0x20];
  param_1[0x21] = (unsigned int)(puVar1 + param_1[0x22]);
  temp_v0 = (int)(puVar1 + param_1[0x22]) - (int)puVar1;
  if (0 < temp_v0 >> 2) {
    puVar2 = puVar1;
    if (temp_v0 * 0x20000000 < 0) {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
    }
    for (temp_v0 = temp_v0 >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      *puVar1 = 0;
    }
  }
  puVar1 = (unsigned int *)param_1[0x24];
  param_1[0x25] = (unsigned int)(puVar1 + param_1[0x26]);
  temp_v0 = (int)(puVar1 + param_1[0x26]) - (int)puVar1;
  if (0 < temp_v0 >> 2) {
    puVar2 = puVar1;
    if (temp_v0 * 0x20000000 < 0) {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
    }
    for (temp_v0 = temp_v0 >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      *puVar1 = 0;
    }
  }
  return;
}

} /* extern "C" */
