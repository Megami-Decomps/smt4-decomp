/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bf0c` (_code @ 0x30bf0c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b47cc(unsigned short);


int FUN_0030bf0c(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b47cc(*param_1);
  temp_v1 = FUN_002b47cc(*param_2);
  return (unsigned int)*(unsigned short *)(temp_v1 + 0x98) - (unsigned int)*(unsigned short *)(temp_v0 + 0x98);
}
