/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206f30` (_code @ 0x206f30, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b45e8(unsigned short);


int FUN_00206f30(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b45e8(*param_1);
  temp_v1 = FUN_002b45e8(*param_2);
  temp_v0 = (*(unsigned int *)(temp_v0 + 0x54) & 0x3ff) - (*(unsigned int *)(temp_v1 + 0x54) & 0x3ff);
  if (temp_v0 == 0) {
    temp_v0 = FUN_002b45e8(*param_1);
    temp_v1 = FUN_002b45e8(*param_2);
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x98) - (unsigned int)*(unsigned short *)(temp_v1 + 0x98);
  }
  return temp_v0;
}
