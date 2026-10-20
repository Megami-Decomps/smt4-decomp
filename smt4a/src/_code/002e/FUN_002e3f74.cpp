/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3f74` (_code @ 0x2e3f74, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e56ec(unsigned int, unsigned char *);

extern unsigned char LAB_002e3f69; /* 0x2e3f69 */

/* Supplied declaration required: FUN_002e56ec. */


unsigned int * FUN_002e3f74(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e56ec(*param_1,&LAB_002e3f69);
  return param_1;
}

} /* extern "C" */
