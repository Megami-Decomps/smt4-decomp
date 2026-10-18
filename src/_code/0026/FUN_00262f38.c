/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262f38` (_code @ 0x262f38, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */


unsigned int FUN_00262f38(void)

{
  unsigned int temp_v0;
  
  if ((DAT_00434210 == 0) || (temp_v0 = 0, *(char *)(DAT_00434210 + 0xaa) != '\0')) {
    temp_v0 = 1;
  }
  return temp_v0;
}
