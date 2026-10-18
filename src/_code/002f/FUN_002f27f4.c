/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f27f4` (_code @ 0x2f27f4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b47cc(unsigned short);


int FUN_002f27f4(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b47cc(*param_1);
  temp_v1 = FUN_002b47cc(*param_2);
  temp_v0 = (*(unsigned int *)(temp_v1 + 0x54) >> 0x14) - (*(unsigned int *)(temp_v0 + 0x54) >> 0x14);
  if (temp_v0 == 0) {
    temp_v0 = FUN_002b47cc(*param_1);
    temp_v1 = FUN_002b47cc(*param_2);
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v1 + 0x98) - (unsigned int)*(unsigned short *)(temp_v0 + 0x98);
  }
  return temp_v0;
}
