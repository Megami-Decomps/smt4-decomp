/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a69bc` (_code @ 0x4a69bc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e5220(unsigned short);


int FUN_004a69bc(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002e5220(*param_1);
  temp_v1 = FUN_002e5220(*param_2);
  return temp_v0 - temp_v1;
}
