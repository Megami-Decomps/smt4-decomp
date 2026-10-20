/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282b88` (_code @ 0x282b88, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_00282b88(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044de2c;
  if (DAT_0044de2c != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_0044de2c);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_0044de2c != (unsigned int *)0x0) {
      FUN_002c415c();
      DAT_0044de2c = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
