/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019207c` (_code @ 0x19207c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0019207c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044de2c;
  if (DAT_0044de2c != (unsigned int *)0x0) {
    *(unsigned char *)(DAT_0044de2c + 1) = 1;
    FUN_002c43b4(*puVar1,0);
    FUN_002c415c(puVar1);
    DAT_0044de2c = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
