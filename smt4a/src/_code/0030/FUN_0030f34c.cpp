/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f34c` (_code @ 0x30f34c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012cf3c(unsigned int *);

extern unsigned char DAT_0055b05c; /* 0x55b05c */

/* Supplied declaration required: FUN_0012cf3c. */


unsigned int * FUN_0030f34c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b05c;
  FUN_0012cf3c(param_1);
  return param_1;
}

} /* extern "C" */
