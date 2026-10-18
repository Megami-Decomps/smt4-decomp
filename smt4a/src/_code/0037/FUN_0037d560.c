/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d560` (_code @ 0x37d560, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003857c8. */


unsigned int FUN_0037d560(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  FUN_003857c8((int)*(float *)(temp_v0 + 0x15c4));
  FUN_003283ac();
  return 1;
}
