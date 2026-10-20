/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371dec` (_code @ 0x371dec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */

extern int FUN_002c2c68(int);


int FUN_00371dec(void)

{
  int temp_v0;
  
  if (DAT_00588fe8 == 0) {
    return 0;
  }
  temp_v0 = FUN_002c2c68(DAT_00588fe8 + 0x5ec);
  return temp_v0 - 1;
}

} /* extern "C" */
