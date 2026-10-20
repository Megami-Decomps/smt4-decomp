/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001237f8` (_code @ 0x1237f8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f138(unsigned int, unsigned char *, int);

extern unsigned char DAT_00538b10; /* 0x538b10 */

/* Supplied declaration required: FUN_0030f138. */


void FUN_001237f8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,&DAT_00538b10,0);
  return;
}

} /* extern "C" */
