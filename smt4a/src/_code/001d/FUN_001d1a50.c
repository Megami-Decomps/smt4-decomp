/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1a50` (_code @ 0x1d1a50, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001d1a50(int param_1,short param_2)

{
  *(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (*(unsigned short *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xffbf) | (param_2 << 6);
  return;
}
