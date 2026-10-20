/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad4c0` (_code @ 0x1ad4c0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001ad4c0(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x38) & 0x7f;
  if ((temp_v0 == 0xe || temp_v0 == 1) &&
     (*(char *)(param_1 + 0x23) == '\x03' || *(char *)(param_1 + 0x23) == '\a')) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
