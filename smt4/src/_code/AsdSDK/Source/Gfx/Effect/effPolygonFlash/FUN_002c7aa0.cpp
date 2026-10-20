/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7aa0` (_code @ 0x2c7aa0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00472608; /* 0x472608 */


void FUN_002c7aa0(int param_1)

{
  (**(romwright_code **)(&DAT_00472608 + *(int *)(param_1 + 0x38) * 0x1c))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
