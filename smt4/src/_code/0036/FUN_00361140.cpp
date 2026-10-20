/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361140` (_code @ 0x361140, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned short *, int);

/* Supplied declaration required: FUN_002c4938. */


void FUN_00361140(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(param_1,0xe30);
  *param_1 = 2;
  return;
}

} /* extern "C" */
