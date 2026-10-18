/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300150` (_code @ 0x300150, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_00300150(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v2 = 0;
  temp_v1 = FUN_00293c98();
  FUN_00282b94(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v2 = (int)*(short *)(temp_v1 + 0x1b6);
  }
  FUN_0028df54(temp_v2);
  return 1;
}
