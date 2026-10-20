/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf6ec` (_code @ 0x2cf6ec, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern signed char DAT_0043dd38; /* 0x43dd38 */
extern unsigned int *DAT_0043dd3c; /* 0x43dd3c */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002cf6ec(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd3c;
  DAT_0043dd38 = DAT_0043dd38 - '\x01';
  if (DAT_0043dd38 < '\x01') {
    FUN_002c43b4(*DAT_0043dd3c,0);
    FUN_002c415c(puVar1);
    DAT_0043dd3c = (unsigned int *)0x0;
    DAT_0043dd38 = '\0';
  }
  return;
}

} /* extern "C" */
