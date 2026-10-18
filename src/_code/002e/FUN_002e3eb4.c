/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3eb4` (_code @ 0x2e3eb4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);


unsigned int FUN_002e3eb4(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00293c98();
  temp_v0 = *(short *)(temp_v1 + 0x4968);
  temp_v2 = FUN_00293c98();
  temp_v1 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v2 + 0x496a)) {
    temp_v1 = (int)*(short *)(temp_v2 + 0x496a);
  }
  FUN_0028df54(temp_v1);
  return 1;
}
