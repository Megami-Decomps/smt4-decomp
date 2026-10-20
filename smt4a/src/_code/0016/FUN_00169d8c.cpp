/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169d8c` (_code @ 0x169d8c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0063fe44; /* 0x63fe44 */
extern unsigned int DAT_0063febc; /* 0x63febc */


unsigned int FUN_00169d8c(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0063fe44;
  if ((param_1 >= 2) && (temp_v0 = DAT_0063febc, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
