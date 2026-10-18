/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2f7c` (_code @ 0x3c2f7c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003c2f7c(int param_1)

{
  unsigned int temp_v0;
  
  if ((*(char *)(param_1 + 0x71) != '\0') || (temp_v0 = 0, *(char *)(param_1 + 0x70) != '\0')) {
    temp_v0 = 1;
  }
  return temp_v0;
}
