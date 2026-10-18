/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1440` (_code @ 0x2c1440, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0031caec. */
extern int FUN_0035c3a8(void);
/* Supplied declaration required: FUN_0039b7fc. */


unsigned char FUN_002c1440(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_0035c3a8();
    if (temp_v0 != 0) {
      FUN_0039b7fc();
    }
    return temp_v0 != 0;
  }
  FUN_00236038(0);
  FUN_0031caec();
  return 0;
}
