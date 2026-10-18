/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d010` (_code @ 0x30d010, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030d010(unsigned int param_1,unsigned char *param_2,unsigned char *param_3)

{
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = *param_3;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_3 + 4);
  }
  return;
}
