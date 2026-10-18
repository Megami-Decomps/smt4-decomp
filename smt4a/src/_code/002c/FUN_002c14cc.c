/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c14cc` (_code @ 0x2c14cc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002deb84(void);
extern int FUN_00330904(void);
/* Supplied declaration required: FUN_0039b604. */
/* Supplied declaration required: FUN_003b6d04. */


unsigned char FUN_002c14cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00330904();
    if (temp_v0 != 0) {
      FUN_003b6d04();
    }
    return temp_v0 != 0;
  }
  FUN_0039b604();
  return 0;
}
