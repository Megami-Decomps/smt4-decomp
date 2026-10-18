/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd910` (_code @ 0x2cd910, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002f4edc(void);


unsigned char FUN_002cd910(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00296f60(0);
  temp_v0 = FUN_002f4edc();
  return temp_v0 != 0;
}
