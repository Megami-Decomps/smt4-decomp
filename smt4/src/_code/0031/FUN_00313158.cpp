/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313158` (_code @ 0x313158, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00434210; /* 0x434210 */


unsigned int FUN_00313158(int param_1)

{
  unsigned int temp_v0;
  
  if ((DAT_00434210 == 0) || (*(int *)(DAT_00434210 + 0x2f8) != param_1)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
