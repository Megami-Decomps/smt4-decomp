/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f12a8` (_code @ 0x2f12a8, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027e964. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);


unsigned int FUN_002f12a8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00293c98();
  FUN_0027e964(temp_v0,1);
  FUN_0028df54();
  return 1;
}
