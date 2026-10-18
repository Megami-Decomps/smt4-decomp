/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001546e8` (_code @ 0x1546e8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0063ff88; /* 0x63ff88 */
extern signed char DAT_0063ff89; /* 0x63ff89 */


int FUN_001546e8(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = (int)DAT_0063ff88;
  }
  else if (param_1 == 2) {
    temp_v0 = (int)DAT_0063ff89;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
