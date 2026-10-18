/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c86cc` (_code @ 0x4c86cc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_004c86cc(int param_1,int param_2)

{
  return *(unsigned short *)(param_1 + param_2 * 2 + 0x152) >> 10 == 2;
}
