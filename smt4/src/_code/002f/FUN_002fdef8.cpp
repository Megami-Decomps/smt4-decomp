/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdef8` (_code @ 0x2fdef8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_keyedRecordCount; /* 0x433278 */


unsigned int FUN_002fdef8(int param_1)

{
  unsigned int temp_v0;
  
  if ((g_keyedRecordCount - param_1) - 1 < 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 * 0x148 + 0x478024);
  }
  return temp_v0;
}

} /* extern "C" */
