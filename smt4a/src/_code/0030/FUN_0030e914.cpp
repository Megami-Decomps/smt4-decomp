/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e914` (_code @ 0x30e914, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_0030e914(int param_1,unsigned short param_2,int param_3)

{
  return (*(unsigned short *)(*(int *)(param_1 + 0x14) + param_3 * 2) & param_2) != 0;
}

} /* extern "C" */
