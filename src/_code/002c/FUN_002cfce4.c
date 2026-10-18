/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfce4` (_code @ 0x2cfce4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern int FUN_00296f60(void);
extern int FUN_002a89e4(int);


unsigned int FUN_002cfce4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 < 0x6d) {
    temp_v1 = FUN_00293c98();
    FUN_00282b94(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a89e4(temp_v0 - 0x6d);
  }
  FUN_0028df54(*(unsigned short *)(temp_v0 + 0x46));
  return 1;
}
