/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e741c` (_code @ 0x3e741c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_003e741c(int *param_1)

{
  unsigned char temp_v0;
  
  if (*param_1 != 0) {
    temp_v0 = (unsigned char)param_1[0x14];
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
