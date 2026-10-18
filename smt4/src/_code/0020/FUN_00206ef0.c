/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206ef0` (_code @ 0x206ef0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b45e8(unsigned short);


int FUN_00206ef0(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002b45e8(*param_1);
  temp_v1 = FUN_002b45e8(*param_2);
  temp_v2 = (int)*(char *)(temp_v1 + 100) - (int)*(char *)(temp_v0 + 100);
  if (temp_v2 == 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x50) - (unsigned int)*(unsigned short *)(temp_v1 + 0x50);
  }
  return temp_v2;
}
