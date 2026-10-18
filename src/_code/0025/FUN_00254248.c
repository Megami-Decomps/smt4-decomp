/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254248` (_code @ 0x254248, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00254248(int param_1)

{
  return *(short *)(param_1 + 0xc) >= 0x3e7 &&
         (*(short *)(param_1 + 10) >= 0x3e7 &&
         (*(short *)(param_1 + 8) >= 0x3e7 &&
         (*(short *)(param_1 + 6) >= 0x3e7 && *(short *)(param_1 + 4) >= 0x3e7)));
}
