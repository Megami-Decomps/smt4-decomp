/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7b88` (_code @ 0x3a7b88, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_003a7b88(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588fe8 != 0) {
    temp_v0 = *(int *)(DAT_00588fe8 + 0x518);
  }
  return DAT_00588fe8 == 0 || temp_v0 == 0;
}
