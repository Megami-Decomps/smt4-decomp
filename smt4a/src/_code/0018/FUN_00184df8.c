/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184df8` (_code @ 0x184df8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063fda4; /* 0x63fda4 */
extern unsigned int DAT_0063fdfc; /* 0x63fdfc */


unsigned int FUN_00184df8(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0063fda4;
  if ((param_1 >= 2) && (temp_v0 = DAT_0063fdfc, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}
