/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf1a8` (_code @ 0x3cf1a8, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int randRange(unsigned int);
extern int btlUnitGet(int *);


void FUN_003cf1a8(int *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  short *psVar3;
  int temp_v1;
  int aiStack_1c0 [109];
  
  temp_v0 = 0;
  temp_v1 = 0x6d;
  puVar1 = *(unsigned int **)(*param_1 + 0x1fc0);
  psVar3 = (short *)((int)puVar1 + 0x6e);
  do {
    if ((*puVar1 & 0x400) != 0) {
      aiStack_1c0[temp_v0] = (int)*psVar3;
      temp_v0 = temp_v0 + 1;
    }
    temp_v1 = temp_v1 - 1;
    puVar1 = puVar1 + 0xa2;
    psVar3 = psVar3 + 0x144;
  } while (temp_v1 != 0);
  temp_v0 = randRange((temp_v0 - 1U) & 0xffff);
  temp_v1 = btlUnitGet(param_1);
  *(unsigned char *)(aiStack_1c0[temp_v0] + temp_v1 + 0x38) = 1;
  return;
}

} /* extern "C" */
