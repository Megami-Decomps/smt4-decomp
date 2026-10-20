/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300dc0` (_code @ 0x300dc0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_005c12a4; /* 0x5c12a4 */


void FUN_00300dc0(int param_1)

{
  (**(romwright_code **)(&DAT_005c12a4 + *(int *)(param_1 + 0x38) * 0x18))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
