/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ae60` (_code @ 0x24ae60, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea5c; /* 0x44ea5c */


unsigned int FUN_0024ae60(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == 2) {
    temp_v0 = *(unsigned int *)(DAT_0044ea5c + 0x84);
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_0044ea5c + 0x80);
  }
  return temp_v0;
}
