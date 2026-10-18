/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f25a4` (_code @ 0x2f25a4, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */


unsigned int FUN_002f25a4(void)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (DAT_00434210 != 0) {
    if (*(int *)(DAT_00434210 + 0x2f8) >= 0) {
      temp_v0 = *(unsigned int *)(DAT_00434210 + 0x308);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
