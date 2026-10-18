/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a46d0` (_code @ 0x2a46d0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00493aa0; /* 0x493aa0 */
extern signed char cRam00493aa8; /* 0x493aa8 */

/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_002a46d0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (iRam00493aa0 == 0) {
    temp_v0 = 1;
  }
  else {
    if (cRam00493aa8 == '\0') {
      FUN_002c415c(iRam00493aa0);
      iRam00493aa0 = 0;
      return 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
