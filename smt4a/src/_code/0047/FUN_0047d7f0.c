/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047d7f0` (_code @ 0x47d7f0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0047d7f0(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x9af) != '\0') {
    if (*(char *)(param_1 + 0x9ac) == '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x9ac) == '\0') {
    return 3;
  }
  if (*(char *)(param_1 + 0x9ad) == '\0') {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 2;
  }
  return temp_v0;
}
