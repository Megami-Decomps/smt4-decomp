/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002215e8` (_code @ 0x2215e8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0043dea8; /* 0x43dea8 */
extern unsigned int DAT_0043deac; /* 0x43deac */
extern unsigned int DAT_0043deb0; /* 0x43deb0 */
extern unsigned int DAT_0043deb4; /* 0x43deb4 */
extern unsigned int DAT_0043deb8; /* 0x43deb8 */
extern romwright_code *DAT_0043debc; /* 0x43debc */

/* Supplied declaration required: FUN_001dcb5c. */
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_002215e8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_001dcb5c();
  if (param_1 == 0) {
    FUN_002c45b8(DAT_0043deac,0);
    FUN_002c45b8(DAT_0043deb0,0);
    FUN_002c45b8(DAT_0043deb4,0);
    FUN_002c45b8(DAT_0043deb8,0);
    FUN_002c45b8(DAT_0043dea8,2);
    if (DAT_0043debc != (romwright_code *)0x0) {
      (*DAT_0043debc)();
    }
  }
  return 0;
}
