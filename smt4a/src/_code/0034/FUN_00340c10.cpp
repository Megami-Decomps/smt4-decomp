/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340c10` (_code @ 0x340c10, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0059dbc4; /* 0x59dbc4 */


unsigned int FUN_00340c10(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == 0) {
    temp_v0 = *(unsigned int *)(DAT_0059dbc4 + 0x80);
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_0059dbc4 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
