/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b538` (_code @ 0x37b538, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned char FUN_0037b538(unsigned int param_1)

{
  unsigned char temp_v0;
  
  if ((DAT_0057f0c8 != 0) && (5 >= param_1)) {
    temp_v0 = *(unsigned char *)(DAT_0057f0c8 + param_1 * 4 + 0x5ac);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
