/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001869c4` (_code @ 0x1869c4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063fe48; /* 0x63fe48 */
extern unsigned int DAT_0063fec0; /* 0x63fec0 */


unsigned int FUN_001869c4(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0063fe48;
  if ((param_1 >= 2) && (temp_v0 = DAT_0063fec0, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}
