/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d004` (_code @ 0x49d004, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fa0; /* 0x588fa0 */

extern unsigned int FUN_001add24(unsigned int);


unsigned int FUN_0049d004(void)

{
  unsigned int temp_v0;
  
  DAT_00588fa0 = DAT_00588fa0 - 1;
  if (DAT_00588fa0 < 1) {
    temp_v0 = FUN_001add24(0x17);
    return temp_v0;
  }
  return 1;
}
