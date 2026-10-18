/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001add24` (_code @ 0x1add24, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_001add24(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 < 0x50) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x5e2218) == 0) {
      return 1;
    }
    if (*(char *)(temp_v0 + 0x5e2220) == '\0') {
      FUN_0019a5a0(*(int *)(temp_v0 + 0x5e2218));
      *(unsigned int *)(temp_v0 + 0x5e2218) = 0;
      return 1;
    }
  }
  return 0;
}
