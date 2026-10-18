/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f01c8` (_code @ 0x2f01c8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0024c828. */
extern int FUN_0027eb98(unsigned int);


unsigned int FUN_002f01c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  *(unsigned short *)(*(int *)(temp_v0 + 0x28) + 0x14c) = 0xb;
  FUN_0024c828(DAT_0043427c,0xf,0);
  return 1;
}
