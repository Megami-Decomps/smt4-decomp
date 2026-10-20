/* NON_MATCHING: romwright 0.5.0 decompilation of `nngxDisplayEnv` (_code @ 0x2c24b8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004c63b4; /* 0x4c63b4 */


void nngxDisplayEnv(unsigned int param_1,unsigned int param_2)

{
  *(unsigned int *)(DAT_004c63b4 * 4 + 0x4c63c4) = param_1;
  *(unsigned int *)(DAT_004c63b4 * 4 + 0x4c63d0) = param_2;
  return;
}

} /* extern "C" */
