/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003125fc` (_code @ 0x3125fc, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00293c98. */
extern int FUN_003369f8(void);


unsigned char FUN_003125fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00293c98();
  temp_v0 = FUN_003369f8();
  return temp_v0 != 0;
}
