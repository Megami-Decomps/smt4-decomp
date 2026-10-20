/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333574` (_code @ 0x333574, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f69a; /* 0x57f69a */
extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_00333574(unsigned int param_1)

{
  DAT_0057f69a = 0;
  (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0x1c)) = param_1 | (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0x1c));
  return;
}

} /* extern "C" */
