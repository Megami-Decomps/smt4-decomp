/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003024a0` (_code @ 0x3024a0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f0d1c; /* 0x5f0d1c */

extern int FUN_0018719c(unsigned int);


void FUN_003024a0(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (temp_v0 != 0) {
    DAT_005f0d1c = param_1;
  }
  return;
}

} /* extern "C" */
