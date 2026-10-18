/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107890` (_code @ 0x107890, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_002c0a6c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_00107890(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  FUN_002c0a6c(*(unsigned int *)(temp_v0 + 4));
  FUN_002c0a6c(*(unsigned int *)(temp_v0 + 8));
  FUN_002c0a6c(*(unsigned int *)(temp_v0 + 0xf20));
  FUN_002c0a6c(*(unsigned int *)(temp_v0 + 0xf24));
  FUN_002c4360(temp_v0);
  DAT_0043e278 = 0;
  return;
}
