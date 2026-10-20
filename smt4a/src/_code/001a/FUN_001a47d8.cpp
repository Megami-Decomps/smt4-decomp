/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a47d8` (_code @ 0x1a47d8, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af0d0(unsigned int *, int);

/* Supplied declaration required: FUN_001af0d0. */


void FUN_001a47d8(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  puVar7 = *(unsigned int **)(param_2 + 0x5c);
  puVar8 = *(unsigned int **)(param_2 + 0x60);
  temp_v0 = param_2 + *(int *)(param_2 + 0x48) * 0x20;
  temp_v1 = (((int)puVar7 - *(int *)(param_2 + 0x54)) & 0xfffffffcU) + 8;
  if (((temp_v1 & 0xf) != 0) && (temp_v1 = 4 - ((temp_v1 & 0xf) >> 2), 0 < (int)temp_v1)) {
    puVar3 = puVar7 + -1;
    if ((temp_v1 & 1) != 0) {
      *puVar7 = 0;
      puVar3 = puVar7;
    }
    for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
    puVar7 = puVar7 + temp_v1;
  }
  temp_v2 = FUN_001af0d0(puVar7,1);
  temp_v1 = (((int)puVar8 - *(int *)(param_2 + 0x58)) & 0xfffffffcU) + 8;
  if (((temp_v1 & 0xf) != 0) && (temp_v1 = 4 - ((temp_v1 & 0xf) >> 2), 0 < (int)temp_v1)) {
    puVar7 = puVar8 + -1;
    if ((temp_v1 & 1) != 0) {
      *puVar8 = 0;
      puVar7 = puVar8;
    }
    for (temp_v3 = (int)temp_v1 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    puVar8 = puVar8 + temp_v1;
  }
  FUN_001af0d0(puVar8,1);
  temp_v1 = (temp_v2 - *(int *)(param_2 + 0x54)) & 0xfffffffc;
  *(unsigned int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + temp_v1;
  if (*(char *)(param_2 + 0x4c) == '\0') {
    temp_v4 = *(unsigned int *)(param_2 + 0x54);
  }
  else {
    temp_v4 = *(unsigned int *)(param_2 + 0x58);
  }
  *(unsigned int *)(param_2 + 0x54) = 0;
  *(unsigned int *)(param_2 + 0x58) = 0;
  *(unsigned int *)(param_2 + 0x5c) = 0;
  *(unsigned int *)(param_2 + 0x60) = 0;
  param_1[1] = temp_v1;
  *param_1 = temp_v4;
  return;
}

} /* extern "C" */
