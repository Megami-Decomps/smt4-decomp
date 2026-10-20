/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010aaf0` (_code @ 0x10aaf0, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010ab0c(unsigned int, int, int);

/* Supplied declaration required: FUN_0010ab0c. */


void FUN_0010aaf0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010ab0c(param_1,param_2,*(unsigned short *)(param_2 + 0x20));
  return;
}

} /* extern "C" */
