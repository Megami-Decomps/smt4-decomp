/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141850` (_code @ 0x141850, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b3bc4; /* 0x5b3bc4 */
extern unsigned int DAT_005b3bc8; /* 0x5b3bc8 */


unsigned char FUN_00141850(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  if (param_1 >= DAT_005b3bc4) {
    temp_v0 = DAT_005b3bc8;
  }
  DAT_005b3bc8 = temp_v0;
  return param_1 < DAT_005b3bc4;
}
