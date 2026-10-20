/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312a30` (_code @ 0x312a30, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00312a30(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(DAT_0058103c + 0xcc38) + 4));
  return;
}

} /* extern "C" */
