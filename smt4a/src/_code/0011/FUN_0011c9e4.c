/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c9e4` (_code @ 0x11c9e4, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a900; /* 0x55a900 */


void FUN_0011c9e4(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055a900;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 3) = 0;
  return;
}
