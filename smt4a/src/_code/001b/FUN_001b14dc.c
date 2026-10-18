/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b14dc` (_code @ 0x1b14dc, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001af0d0(unsigned int *, unsigned int);


void FUN_001b14dc(int *param_1,int *param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)param_1[1];
  temp_v0 = (((int)puVar5 - *param_1) & 0xfffffffcU) + 8;
  if (((temp_v0 & 0xf) != 0) && (temp_v0 = 4 - ((temp_v0 & 0xf) >> 2), 0 < (int)temp_v0)) {
    puVar2 = puVar5 + -1;
    if ((temp_v0 & 1) != 0) {
      *puVar5 = 0;
      puVar2 = puVar5;
    }
    for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
    puVar5 = puVar5 + temp_v0;
  }
  temp_v1 = FUN_001af0d0(puVar5,1);
  param_1[1] = temp_v1;
  temp_v2 = *param_1;
  param_2[1] = (temp_v1 - temp_v2) >> 2;
  *param_2 = temp_v2;
  *param_1 = param_1[1];
  return;
}
