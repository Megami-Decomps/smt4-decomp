/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7a14` (_code @ 0x2c7a14, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00472608; /* 0x472608 */


void FUN_002c7a14(int param_1)

{
  (**(romwright_code **)(&DAT_00472608 + *(int *)(param_1 + 0x38) * 0x1c))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}
