/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a3d8` (_code @ 0x38a3d8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0036f0a0. */
/* Supplied declaration required: FUN_003afd30. */
extern int FUN_003c5d8c(void);


unsigned char FUN_0038a3d8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_003afd30();
  }
  temp_v0 = FUN_003c5d8c();
  if (temp_v0 == 0) {
    FUN_0036f0a0(0);
  }
  return temp_v0 != 0;
}
