/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b694` (_code @ 0x30b694, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0030b694(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002939f4();
  FUN_0027da30(temp_v2,temp_v0);
  FUN_0028dcb0(((unsigned int)*(unsigned short *)(temp_v2 + 0xfa) & (1 << (temp_v1 & 0xff))) != 0);
  return 1;
}
