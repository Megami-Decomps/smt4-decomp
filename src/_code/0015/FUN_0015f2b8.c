/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f2b8` (_code @ 0x15f2b8, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


unsigned char FUN_0015f2b8(int param_1,int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *puVar2 = *puVar2 | 0x10;
  }
  return temp_v0 != 0;
}
