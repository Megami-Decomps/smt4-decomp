/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a5ac` (_code @ 0x21a5ac, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00472718; /* 0x472718 */


void FUN_0021a5ac(int param_1)

{
  (**(romwright_code **)(&DAT_00472718 + *(int *)(param_1 + 0x38) * 0x18))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}
