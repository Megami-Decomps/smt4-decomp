/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d8a4` (_code @ 0x35d8a4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern signed char DAT_0057f27c; /* 0x57f27c */
extern unsigned int *DAT_0057f280; /* 0x57f280 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0035d8a4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f280;
  DAT_0057f27c = DAT_0057f27c - '\x01';
  if (DAT_0057f27c < '\x01') {
    FUN_001631d0(*DAT_0057f280,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f280 = (unsigned int *)0x0;
    DAT_0057f27c = '\0';
  }
  return;
}

} /* extern "C" */
