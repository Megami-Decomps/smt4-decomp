/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe9e8` (_code @ 0x2fe9e8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_001b49c0. */
extern int FUN_001fb4d8(void);
/* Supplied declaration required: FUN_00275714. */
/* Supplied declaration required: FUN_0027581c. */
extern int FUN_00296cc8(void);


unsigned int FUN_002fe9e8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 != 0) {
    FUN_0027581c();
  }
  else {
    temp_v0 = FUN_001fb4d8();
    if (temp_v0 != 0) {
      FUN_00275714();
    }
    else {
      FUN_001b49c0(DAT_0049f91c,DAT_0049f920);
    }
  }
  return 1;
}
