/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3168` (_code @ 0x1c3168, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00646e54; /* 0x646e54 */


void FUN_001c3168(int param_1,unsigned short param_2)

{
  *(unsigned short *)(&DAT_00646e54 + param_1 * 2) = param_2;
  return;
}
