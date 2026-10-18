/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e6a8` (_code @ 0x34e6a8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0034e6a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  FUN_003283ac((int)*(short *)(temp_v0 + 0x2a));
  return 1;
}
