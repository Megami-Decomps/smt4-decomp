/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e6d4` (_code @ 0x31e6d4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588c44; /* 0x588c44 */


unsigned int FUN_0031e6d4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588c44 != 0) {
    temp_v0 = *(unsigned int *)(DAT_00588c44 + 0x7538);
  }
  return temp_v0;
}
