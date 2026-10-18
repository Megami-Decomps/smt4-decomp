/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b42c` (_code @ 0x30b42c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);


unsigned int FUN_0030b42c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00293c98();
  FUN_0028df54((int)*(short *)(temp_v0 + 0x1fca));
  return 1;
}
