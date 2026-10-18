/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300310` (_code @ 0x300310, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002465c0. */
extern unsigned int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_00300310(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00293c98();
  temp_v2 = FUN_0027eb98(DAT_0043427c);
  temp_v3 = temp_v1;
  FUN_00282b94(temp_v1,temp_v0);
  FUN_002465c0(0,temp_v2,temp_v3);
  *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x10000;
  return 1;
}
