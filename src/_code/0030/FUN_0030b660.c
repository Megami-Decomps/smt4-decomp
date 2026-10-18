/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b660` (_code @ 0x30b660, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027dca0. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_0030b660(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  FUN_0027dca0(temp_v2,temp_v0);
  FUN_0028df54(((unsigned int)*(unsigned short *)(temp_v2 + 0xfa) & (1 << (temp_v1 & 0xff))) != 0);
  return 1;
}
