/* NON_MATCHING: romwright 0.5.0 decompilation of `sharedRefInitEmpty` (_code @ 0x2ea0b8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005593c0; /* 0x5593c0 */


void sharedRefInitEmpty(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_005593c0;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
