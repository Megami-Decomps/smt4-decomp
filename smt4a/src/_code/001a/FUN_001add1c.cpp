/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001add1c` (_code @ 0x1add1c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);

extern int iRam005e2488; /* 0x5e2488 */
extern signed char cRam005e2490; /* 0x5e2490 */

/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_001add1c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (iRam005e2488 == 0) {
    temp_v0 = 1;
  }
  else {
    if (cRam005e2490 == '\0') {
      FUN_0019a5a0(iRam005e2488);
      iRam005e2488 = 0;
      return 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
