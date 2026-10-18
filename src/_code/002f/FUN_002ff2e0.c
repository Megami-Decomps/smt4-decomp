/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff2e0` (_code @ 0x2ff2e0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_00296f60(unsigned int);


unsigned int FUN_002ff2e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60(0);
  FUN_00293c98();
  temp_v1 = FUN_00249b0c();
  FUN_0028df54((int)(unsigned int)(temp_v1 != 0) <= temp_v0);
  return 1;
}
