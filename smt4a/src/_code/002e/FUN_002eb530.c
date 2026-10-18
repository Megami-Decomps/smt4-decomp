/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb530` (_code @ 0x2eb530, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559344; /* 0x559344 */


void FUN_002eb530(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00559344;
  *(unsigned short *)(param_1 + 1) = 0;
  return;
}
