/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6e04` (_code @ 0x3b6e04, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b6e04(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00236038(0);
  FUN_003283ac(*(short *)(temp_v0 + temp_v1 * 2 + 0xd90) == 0);
  return 1;
}
