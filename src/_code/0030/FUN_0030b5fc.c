/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b5fc` (_code @ 0x30b5fc, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027dca0. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(void);


unsigned int FUN_0030b5fc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  FUN_0027dca0(temp_v1,temp_v0);
  FUN_0028df54((int)*(char *)(temp_v1 + 0xd4));
  return 1;
}
