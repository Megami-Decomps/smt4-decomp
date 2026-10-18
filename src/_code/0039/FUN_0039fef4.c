/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039fef4` (_code @ 0x39fef4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002310d8(unsigned short *);
extern int FUN_0028fde0(unsigned short);


int FUN_0039fef4(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *param_2;
  temp_v1 = FUN_0028fde0(*param_1);
  temp_v2 = FUN_0028fde0(temp_v0);
  temp_v1 = temp_v1 - temp_v2;
  if (temp_v1 == 0) {
    temp_v1 = FUN_002310d8(param_1);
    temp_v2 = FUN_002310d8(param_2);
    temp_v1 = temp_v1 - temp_v2;
  }
  return temp_v1;
}
