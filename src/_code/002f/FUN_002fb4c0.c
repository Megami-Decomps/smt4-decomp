/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb4c0` (_code @ 0x2fb4c0, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_0027605c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_002b91c4. */


unsigned char FUN_002fb4c0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    FUN_0028df3c(1);
    FUN_0027605c();
    FUN_00270298(3);
    return 0;
  }
  temp_v0 = FUN_00289640();
  if (temp_v0 != 1) {
    temp_v0 = FUN_00289640();
    if (temp_v0 >= 3) {
      FUN_0028df3c(0xffffffff);
      FUN_0028df0c(0);
    }
    return temp_v0 >= 3;
  }
  FUN_002b91c4(0x1000184);
  FUN_00270298(1);
  return 0;
}
