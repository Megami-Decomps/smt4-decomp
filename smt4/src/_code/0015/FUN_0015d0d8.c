/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d0d8` (_code @ 0x15d0d8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_0015d0d8(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  
  param_1 = param_1 + param_2 * 2;
  temp_v0 = *(char *)(param_1 + param_3) == '\0';
  if (temp_v0) {
    *(unsigned char *)(param_1 + param_3) = 1;
  }
  return temp_v0;
}
