/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0678` (_code @ 0x2a0678, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004d975c; /* 0x4d975c */
extern unsigned char DAT_004d9768; /* 0x4d9768 */


void FUN_002a0678(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 * 0x14 + 0x4d9760) = param_2;
  (&DAT_004d975c)[param_1 * 5] = 0;
  (&DAT_004d9768)[param_1 * 0x14] = 2;
  return;
}
