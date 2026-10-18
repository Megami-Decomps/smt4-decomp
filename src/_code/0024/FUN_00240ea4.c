/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240ea4` (_code @ 0x240ea4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00240ea4(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x62) == '\0') {
    temp_v0 = *(unsigned int *)(param_1 + 0x48);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
