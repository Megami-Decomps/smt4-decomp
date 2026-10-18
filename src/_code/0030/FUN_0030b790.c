/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b790` (_code @ 0x30b790, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern unsigned int FUN_0027eb98(unsigned int);
extern int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_003de7fc. */


unsigned int FUN_0030b790(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  temp_v2 = FUN_00293c98();
  FUN_003de7fc(0,temp_v1,*(int *)(temp_v2 + 0x1e98) + temp_v0 * 0x114,1);
  return 1;
}
