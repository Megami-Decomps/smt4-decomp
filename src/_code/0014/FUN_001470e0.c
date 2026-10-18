/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001470e0` (_code @ 0x1470e0, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


unsigned char FUN_001470e0(int param_1,unsigned short param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
    *(unsigned short *)((int)puVar2 + 0x16) = param_2;
    *puVar2 = *puVar2 | 0x4000000;
  }
  return temp_v0 != 0;
}
