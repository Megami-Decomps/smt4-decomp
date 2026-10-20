/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001145c8` (_code @ 0x1145c8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005596c4; /* 0x5596c4 */


void FUN_001145c8(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_005596c4;
  return;
}

} /* extern "C" */
