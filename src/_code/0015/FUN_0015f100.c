/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f100` (_code @ 0x15f100, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);


void FUN_0015f100(int param_1,int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *(unsigned char *)(puVar2 + 0x28) = 1;
    *puVar2 = *puVar2 | 0x10000;
  }
  return;
}
