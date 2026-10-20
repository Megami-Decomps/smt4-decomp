/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001406f0` (_code @ 0x1406f0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_005b408d; /* 0x5b408d */


int FUN_001406f0(signed char param_1)

{
  int temp_v0;
  
  temp_v0 = (int)DAT_005b408d;
  DAT_005b408d = param_1;
  return temp_v0;
}

} /* extern "C" */
