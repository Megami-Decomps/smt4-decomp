/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037df64` (_code @ 0x37df64, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */

extern int FUN_002a4894(void);
extern int FUN_002c2c68(int);


unsigned int FUN_0037df64(void)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_00588fe8 != 0) {
    temp_v0 = DAT_00588fe8 + 0x5ec;
    temp_v1 = FUN_002a4894();
    temp_v0 = FUN_002c2c68(temp_v0);
    if (temp_v1 == temp_v0 - 1) {
      return 1;
    }
  }
  return 0;
}
