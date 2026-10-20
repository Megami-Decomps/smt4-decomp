/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206344` (_code @ 0x206344, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_00206344(int param_1,unsigned int param_2)

{
  return *(unsigned char *)(param_1 + 0x3060) == param_2;
}

} /* extern "C" */
