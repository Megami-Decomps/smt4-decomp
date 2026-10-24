/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN16Obj55a87cPayloadC1Ev` (_code @ 0x1145c8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005596c4; /* 0x5596c4 */


void _ZN16Obj55a87cPayloadC1Ev(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_005596c4;
  return;
}

} /* extern "C" */
