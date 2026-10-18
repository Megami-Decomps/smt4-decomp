/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fbca` (_code @ 0x30fbca, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030fbca(unsigned char *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 0x80;
    return;
  }
  *param_1 = *param_1 & 0x7f;
  return;
}
