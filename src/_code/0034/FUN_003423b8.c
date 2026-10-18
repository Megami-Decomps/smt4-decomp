/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003423b8` (_code @ 0x3423b8, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023d448(void);


unsigned char FUN_003423b8(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned char *pbVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0023d448();
  pbVar2 = (unsigned char *)(temp_v0 + 0x12f0 + (param_1 >> 3));
  temp_v1 = (unsigned int)*pbVar2;
  temp_v2 = (1 << (param_1 & 7)) & 0xff;
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v1;
  }
  else {
    temp_v2 = temp_v1 & ~temp_v2;
  }
  *pbVar2 = (unsigned char)temp_v2;
  return temp_v2 != temp_v1;
}
