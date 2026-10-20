/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f628c` (_code @ 0x1f628c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00288118(unsigned short);


unsigned int FUN_001f628c(unsigned short *param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1[1] == 0) {
    return (unsigned int)(param_2[1] != 0);
  }
  if (param_2[1] == 0) {
    temp_v0 = 0xffffffff;
  }
  else {
    temp_v1 = FUN_00288118(*param_1);
    temp_v2 = FUN_00288118(*param_2);
    temp_v0 = temp_v1 - temp_v2;
  }
  return temp_v0;
}

} /* extern "C" */
