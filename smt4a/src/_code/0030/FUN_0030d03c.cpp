/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d03c` (_code @ 0x30d03c, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);
int FUN_0030fd28(unsigned int *, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_0030fd28. */


unsigned int * FUN_0030d03c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0030fd28(param_1,*param_1,param_1[1]);
  FUN_002e6e14(*param_1);
  return param_1;
}

} /* extern "C" */
