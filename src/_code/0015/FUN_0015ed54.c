/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ed54` (_code @ 0x15ed54, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_0015f060. */


void FUN_0015ed54(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1[0x1b] & 0x8000) != 0) {
    FUN_0015f060(&DAT_004e6f64,*param_1 & 0xff,(int)(short)param_1[1]);
    *(unsigned short *)(param_1 + 0x1b) = (unsigned short)param_1[0x1b] & 0x7fff;
  }
  return;
}
