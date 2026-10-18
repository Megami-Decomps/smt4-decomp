/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f86f0` (_code @ 0x3f86f0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam005e2574; /* 0x5e2574 */
extern int iRam005e2578; /* 0x5e2578 */
extern signed char cRam005e2580; /* 0x5e2580 */

/* Supplied declaration required: FUN_0013c174. */


/* WARNING: Removing unreachable block (ram,0x003f8750) */

unsigned int FUN_003f86f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (iRam005e2578 == 0) {
    if (cRam005e2580 != '\0') {
      return 0;
    }
    temp_v0 = iRam005e2574;
    FUN_0013c174(iRam005e2574,0x5e257c,0);
    iRam005e2578 = temp_v0;
  }
  return 1;
}
