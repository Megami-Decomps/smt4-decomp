/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eda04` (_code @ 0x3eda04, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003eda04(unsigned int param_1,int param_2)

{
  if (param_2 != 0) {
    *(unsigned short *)(param_2 + 0x1ce) = 0;
    *(unsigned short *)(param_2 + 0x1d0) = 0;
    *(unsigned short *)(param_2 + 0x1d2) = 0;
    *(unsigned short *)(param_2 + 0x1d4) = 0;
  }
  return;
}

} /* extern "C" */
