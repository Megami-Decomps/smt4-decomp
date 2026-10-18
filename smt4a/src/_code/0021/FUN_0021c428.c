/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021c428` (_code @ 0x21c428, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00184e20(unsigned int);


unsigned int FUN_0021c428(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((unsigned int *)*param_1 == (unsigned int *)0x0) ||
     (temp_v0 = FUN_00184e20(*(unsigned int *)*param_1), temp_v0 == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
