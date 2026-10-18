/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330014` (_code @ 0x330014, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f390; /* 0x57f390 */


int FUN_00330014(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 < 0x20) && (DAT_0057f390 != 0)) {
    temp_v0 = DAT_0057f390 + param_1 * 100 + 0x98;
  }
  return temp_v0;
}
