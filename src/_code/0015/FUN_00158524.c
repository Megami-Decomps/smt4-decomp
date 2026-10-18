/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158524` (_code @ 0x158524, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ea494; /* 0x4ea494 */


void FUN_00158524(int param_1,unsigned short param_2)

{
  *(unsigned short *)(&DAT_004ea494 + param_1 * 2) = param_2;
  return;
}
