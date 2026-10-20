/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298d98` (_code @ 0x298d98, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */


int FUN_00298d98(unsigned int param_1,int param_2)

{
  if (param_1 < 2) {
    param_2 = DAT_0043e2ac + param_1 * 8 + 0x24bb4;
  }
  return param_2;
}

} /* extern "C" */
