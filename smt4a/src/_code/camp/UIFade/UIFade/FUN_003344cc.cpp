/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003344cc` (_code @ 0x3344cc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern signed char DAT_0057f284; /* 0x57f284 */
extern unsigned int *DAT_0057f288; /* 0x57f288 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_003344cc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f288;
  DAT_0057f284 = DAT_0057f284 - '\x01';
  if (DAT_0057f284 < '\x01') {
    FUN_001631d0(*DAT_0057f288,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f288 = (unsigned int *)0x0;
    DAT_0057f284 = '\0';
  }
  return;
}

} /* extern "C" */
