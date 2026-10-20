/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012083e` (_code @ 0x12083e, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011e41a(int, int);

/* Supplied declaration required: FUN_0011e41a. */


int FUN_0012083e(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_2 + 5);
  FUN_0011e41a(param_1 + 8,param_2 + 8);
  return param_1;
}

} /* extern "C" */
