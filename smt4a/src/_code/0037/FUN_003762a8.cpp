/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003762a8` (_code @ 0x3762a8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_sprintf(unsigned int, int, int);

/* Supplied declaration required: libc_sprintf. */


void FUN_003762a8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  libc_sprintf(param_2,0x3762bc,param_1 + 0x21);
  return;
}

} /* extern "C" */
