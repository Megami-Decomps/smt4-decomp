/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe9ac` (_code @ 0x2fe9ac, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_001b48c0. */
extern int FUN_001fb434(void);
/* Supplied declaration required: FUN_00275984. */
/* Supplied declaration required: FUN_00275a8c. */
extern int FUN_00296f60(void);


unsigned int FUN_002fe9ac(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 != 0) {
    FUN_00275a8c();
  }
  else {
    temp_v0 = FUN_001fb434();
    if (temp_v0 != 0) {
      FUN_00275984();
    }
    else {
      FUN_001b48c0(DAT_0049f91c,DAT_0049f920);
    }
  }
  return 1;
}
