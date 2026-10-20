/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c2b4` (_code @ 0x35c2b4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern unsigned int *DAT_0057f3c0; /* 0x57f3c0 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0035c2b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f3c0;
  if (DAT_0057f3c0 != (unsigned int *)0x0) {
    FUN_001631d0(*DAT_0057f3c0,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f3c0 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
