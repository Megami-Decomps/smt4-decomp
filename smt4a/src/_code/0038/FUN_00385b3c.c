/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385b3c` (_code @ 0x385b3c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_0035c6ac. */


unsigned char FUN_00385b3c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_002c76c0(1);
    FUN_0035c6ac();
    FUN_002e5924(3);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 1) {
    temp_v0 = FUN_002deb84();
    if (temp_v0 >= 3) {
      FUN_002c76c0(0xffffffff);
      FUN_002852f0(0);
    }
    return temp_v0 >= 3;
  }
  FUN_00169ddc(0x1000222);
  FUN_002e5924(1);
  return 0;
}
