/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169db4` (_code @ 0x169db4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063fe40; /* 0x63fe40 */
extern unsigned int DAT_0063feb8; /* 0x63feb8 */


unsigned int FUN_00169db4(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0063fe40;
  if ((param_1 >= 2) && (temp_v0 = DAT_0063feb8, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}
