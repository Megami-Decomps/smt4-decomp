/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f7ac` (_code @ 0x47f7ac, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573cd8; /* 0x573cd8 */


void FUN_0047f7ac(unsigned int param_1,unsigned int param_2)

{
  if (param_1 < 2) {
    (&DAT_00573cd8)[param_1] = param_2;
  }
  return;
}

} /* extern "C" */
