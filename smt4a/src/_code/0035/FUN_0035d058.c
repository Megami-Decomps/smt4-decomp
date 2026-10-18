/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d058` (_code @ 0x35d058, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


void FUN_0035d058(unsigned int param_1,unsigned char param_2)

{
  if (param_1 < 4) {
    *(unsigned char *)(param_1 + DAT_0057f590 + 0x1a11) = param_2;
  }
  return;
}
