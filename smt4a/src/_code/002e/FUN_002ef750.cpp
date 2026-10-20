/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef750` (_code @ 0x2ef750, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_002e132c(int);

extern unsigned int *DAT_0057f57c; /* 0x57f57c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e132c. */


void FUN_002ef750(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f57c;
  if (DAT_0057f57c != (unsigned int *)0x0) {
    FUN_002e132c(0x34);
    FUN_001631d0(*puVar1,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f57c = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
