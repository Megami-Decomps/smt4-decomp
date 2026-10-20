/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e17c` (_code @ 0x29e17c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern signed char DAT_0043dd20; /* 0x43dd20 */
extern unsigned int *DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0029e17c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd24;
  DAT_0043dd20 = DAT_0043dd20 - '\x01';
  if (DAT_0043dd20 < '\x01') {
    FUN_002c43b4(*DAT_0043dd24,0);
    FUN_002c415c(puVar1);
    DAT_0043dd24 = (unsigned int *)0x0;
    DAT_0043dd20 = '\0';
  }
  return;
}

} /* extern "C" */
