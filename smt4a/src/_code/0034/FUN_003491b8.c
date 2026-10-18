/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003491b8` (_code @ 0x3491b8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


unsigned int FUN_003491b8(void)

{
  unsigned int temp_v0;
  
  if ((*(char *)(DAT_0057f590 + 0x8e) == '\0') || (*(char *)(DAT_0057f590 + 0x8d) != '\x02')) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
