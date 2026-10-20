/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9f50` (_code @ 0x3e9f50, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003e9f50(unsigned int param_1,int param_2,int param_3)

{
  char temp_v0;
  
  if (param_3 < 0x15) {
    temp_v0 = *(char *)(param_2 + param_3 + 0x17c);
    if (temp_v0 != -1) {
      *(char *)(param_2 + param_3 + 0x17c) = temp_v0 + '\x01';
    }
  }
  return;
}

} /* extern "C" */
