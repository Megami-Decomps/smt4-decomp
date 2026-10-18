/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00195034` (_code @ 0x195034, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *FUN_001a8d28(unsigned int);


unsigned int FUN_00195034(int param_1,unsigned int *param_2)

{
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned short *)FUN_001a8d28(*(unsigned int *)(param_1 + 0x3c));
  temp_v0 = 0;
  if (puVar1 != (unsigned short *)0x0) {
    *param_2 = (unsigned int)*puVar1;
    param_2[1] = (unsigned int)puVar1[1];
    param_2[2] = (unsigned int)puVar1[2];
    param_2[3] = (unsigned int)puVar1[3];
    param_2[4] = (unsigned int)puVar1[4];
    param_2[5] = (unsigned int)puVar1[5];
    param_2[6] = (unsigned int)puVar1[6];
    temp_v1 = *(unsigned int *)(param_1 + 8);
    if (temp_v1 >= 0x2030200) {
      param_2[7] = (unsigned int)(unsigned char)puVar1[7];
    }
    temp_v0 = 1;
    if (temp_v1 < 0x2030200) {
      param_2[7] = 1;
    }
  }
  return temp_v0;
}
