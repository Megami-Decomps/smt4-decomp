/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282df8` (_code @ 0x282df8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

extern int FUN_002b2530(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_00282df8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044de2c;
  if (DAT_0044de2c != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2530(*DAT_0044de2c);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_0044de2c != (unsigned int *)0x0) {
      FUN_002c4360();
      DAT_0044de2c = (unsigned int *)0x0;
    }
  }
  return 0;
}
