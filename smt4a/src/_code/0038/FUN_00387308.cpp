/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387308` (_code @ 0x387308, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_002e3328(void);
int FUN_00417674(unsigned int *);

extern unsigned int *DAT_00588c48; /* 0x588c48 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00417674. */


void FUN_00387308(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00588c48;
  if (DAT_00588c48 != (unsigned int *)0x0) {
    FUN_00417674(DAT_00588c48);
    FUN_001631d0(*puVar1,0);
    if (DAT_00588c48 != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_00588c48 = (unsigned int *)0x0;
    }
  }
  return;
}

} /* extern "C" */
