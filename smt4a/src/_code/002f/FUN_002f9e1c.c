/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9e1c` (_code @ 0x2f9e1c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short * FUN_002f9e1c(int param_1,unsigned short *param_2)

{
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  
  puVar3 = *(unsigned short **)(param_1 + 8);
  puVar2 = *(unsigned short **)(param_1 + 4);
  temp_v1 = ((int)puVar3 - (int)puVar2) >> 3;
  while (temp_v0 = temp_v1, 0 < temp_v0) {
    temp_v1 = temp_v0 / 2;
    if (puVar2[temp_v1 * 4] < *param_2) {
      puVar2 = puVar2 + temp_v1 * 4 + 4;
      temp_v1 = (temp_v0 - temp_v1) - 1;
    }
  }
  if ((puVar3 != puVar2) && (*param_2 < *puVar2)) {
    puVar2 = puVar3;
  }
  return puVar2;
}
