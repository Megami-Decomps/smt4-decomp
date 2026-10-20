/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee96a` (_code @ 0x2ee96a, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ffe0(unsigned int, unsigned int);

/* Supplied declaration required: FUN_0030ffe0. */


void FUN_002ee96a(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030ffe0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4));
  return;
}

} /* extern "C" */
