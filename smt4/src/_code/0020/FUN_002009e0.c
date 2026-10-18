/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002009e0` (_code @ 0x2009e0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002893d8(void);
extern int FUN_002cd9e4(void);
/* Supplied declaration required: FUN_0030a530. */
/* Supplied declaration required: FUN_0031c0e4. */


unsigned char FUN_002009e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002cd9e4();
    if (temp_v0 != 0) {
      FUN_0031c0e4();
    }
    return temp_v0 != 0;
  }
  FUN_0030a530();
  return 0;
}
