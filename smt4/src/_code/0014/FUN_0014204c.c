/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014204c` (_code @ 0x14204c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *FUN_0014d360(unsigned int);


unsigned char FUN_0014204c(int param_1,unsigned int *param_2)

{
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)FUN_0014d360(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (unsigned short *)0x0) {
    *param_2 = (unsigned int)*puVar1;
    param_2[1] = (unsigned int)puVar1[1];
    param_2[2] = (unsigned int)puVar1[2];
    param_2[3] = (unsigned int)puVar1[3];
    param_2[4] = (unsigned int)puVar1[4];
    param_2[5] = (unsigned int)puVar1[5];
    param_2[6] = (unsigned int)puVar1[6];
  }
  return puVar1 != (unsigned short *)0x0;
}
