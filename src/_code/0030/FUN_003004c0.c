/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003004c0` (_code @ 0x3004c0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_0029565c. */
extern int FUN_00296f60(void);
extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_0033bb94. */


unsigned int FUN_003004c0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 < 0x6d) {
    FUN_00293c98();
    temp_v1 = FUN_00293c98();
    FUN_00282b94(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a89e4(temp_v0 - 0x6d);
  }
  FUN_0033bb94();
  if (0 < temp_v0) {
    FUN_0029565c();
  }
  FUN_0028df54(temp_v0);
  return 1;
}
