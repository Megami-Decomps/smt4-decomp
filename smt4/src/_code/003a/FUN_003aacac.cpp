/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aacac` (_code @ 0x3aacac, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00288118(unsigned short);


int FUN_003aacac(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00288118(*param_1);
  temp_v1 = FUN_00288118(*param_2);
  return temp_v1 - temp_v0;
}

} /* extern "C" */
