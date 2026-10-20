/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348784` (_code @ 0x348784, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c66cc(int, unsigned char *, int, int);

extern unsigned char LAB_0033b5bc; /* 0x33b5bc */

/* Supplied declaration required: FUN_002c66cc. */


int FUN_00348784(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c66cc(param_1 + 4,&LAB_0033b5bc,0x544,2);
  return param_1;
}

} /* extern "C" */
