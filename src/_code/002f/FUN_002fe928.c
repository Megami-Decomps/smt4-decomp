/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe928` (_code @ 0x2fe928, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_0025a318. */
/* Supplied declaration required: FUN_00275a18. */
/* Supplied declaration required: FUN_00275e38. */
/* Supplied declaration required: FUN_00289ae8. */
extern int FUN_00296f60(void);
/* Supplied declaration required: FUN_002b8b78. */


unsigned int FUN_002fe928(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 != 0) {
    if (DAT_0049fb6d == '\0') {
      DAT_0049fb6d = '\x01';
      FUN_00275e38();
      FUN_00289ae8();
      FUN_002b8b78(0x90);
    }
  }
  else if (DAT_0049fb6d != '\0') {
    DAT_0049fb6d = '\0';
    FUN_0025a318();
    FUN_00275a18();
  }
  return 1;
}
