/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffd94` (_code @ 0x2ffd94, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);


unsigned int FUN_002ffd94(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00293c98();
  FUN_0028df54((*(unsigned int *)(temp_v0 + 0x44a0) & 2) != 0);
  return 1;
}
