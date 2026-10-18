/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8810` (_code @ 0x1a8810, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001afe40. */
/* Supplied declaration required: FUN_001b4690. */
/* Supplied declaration required: FUN_001b4790. */


void FUN_001a8810(int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3 [9];
  
  puVar2 = temp_v3;
  if ((*(unsigned int *)(param_1 + 8) & 0x20) != 0) {
    temp_v0 = *param_2;
  }
  else {
    if ((*(unsigned int *)(param_1 + 8) & 4) != 0) {
      puVar3 = *(unsigned int **)(param_1 + 0xc);
      temp_v0 = puVar3[1];
      temp_v1 = puVar3[2];
      param_2[1] = *puVar3;
      param_2[2] = temp_v0;
      param_2[3] = temp_v1;
    }
    else {
      FUN_001b4790(*(unsigned int *)(param_1 + 0xc),param_2 + 1);
    }
    temp_v0 = *param_2 & 0xfd7fffff;
    *param_2 = temp_v0;
  }
  *param_2 = temp_v0 & 0xf3ffffff;
  if ((*(unsigned int *)(param_1 + 8) & 0x10) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 2) != 0) {
      puVar2 = *(unsigned int **)(param_1 + 0x10);
    }
    else {
      FUN_001b4690(*(unsigned int *)(param_1 + 0x10),temp_v3);
    }
    if ((*(unsigned int *)(param_1 + 8) & 8) != 0) {
      temp_v0 = param_2[7];
      temp_v1 = param_2[0xb];
      temp_v2 = param_2[0xf];
      FUN_001afe40(param_2 + 4,puVar2,1);
      param_2[7] = temp_v0;
      param_2[0xb] = temp_v1;
      param_2[0xf] = temp_v2;
    }
    else {
      FUN_001afe40(param_2 + 4,puVar2,1);
    }
  }
  if ((*(unsigned int *)(param_1 + 8) & 8) == 0) {
    puVar2 = *(unsigned int **)(param_1 + 0x14);
    if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
      FUN_001b4790(*(unsigned int **)(param_1 + 0x14),temp_v3);
      puVar2 = temp_v3;
    }
    param_2[7] = *puVar2;
    param_2[0xb] = puVar2[1];
    param_2[0xf] = puVar2[2];
  }
  return;
}
