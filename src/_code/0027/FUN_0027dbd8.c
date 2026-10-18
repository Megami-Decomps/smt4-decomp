/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dbd8` (_code @ 0x27dbd8, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002904d0(void);
extern int FUN_00290694(void);


int FUN_0027dbd8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002904d0();
  if ((temp_v0 == 0) || (temp_v0 = FUN_00290694(), temp_v0 < 1)) {
    temp_v0 = -1;
  }
  return temp_v0;
}
