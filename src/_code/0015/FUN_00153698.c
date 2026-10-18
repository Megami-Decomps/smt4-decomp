/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153698` (_code @ 0x153698, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


unsigned char FUN_00153698(int param_1,int param_2,unsigned short param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    *(unsigned short *)((int)puVar2 + 0x3a) = param_3;
    *puVar2 = *puVar2 | 0x400000;
  }
  return temp_v0 != 0;
}
