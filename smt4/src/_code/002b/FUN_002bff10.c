/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bff10` (_code @ 0x2bff10, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004e3be0; /* 0x4e3be0 */
extern signed char DAT_004e3be1; /* 0x4e3be1 */


int FUN_002bff10(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = (int)DAT_004e3be0;
  }
  else if (param_1 == 2) {
    temp_v0 = (int)DAT_004e3be1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
