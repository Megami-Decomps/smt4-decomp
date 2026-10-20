/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034103c` (_code @ 0x34103c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */


void FUN_0034103c(int param_1)

{
  (&DAT_00636e04)[param_1 * 0x18] = 1;
  (&DAT_00636e05)[param_1 * 0x18] = 0;
  return;
}

} /* extern "C" */
