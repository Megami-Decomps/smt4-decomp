/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ef0c` (_code @ 0x15ef0c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_0015f00c. */


void FUN_0015ef0c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0015f00c(&DAT_004e6f64,*param_1 & 0xff);
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
