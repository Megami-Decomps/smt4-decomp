/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bd00` (_code @ 0x15bd00, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_00472310; /* 0x472310 */
extern romwright_code *DAT_00472314; /* 0x472314 */


void FUN_0015bd00(int *param_1)

{
  if (*(int *)*param_1 != 0x10000001) {
    if (*(int *)*param_1 == 0x10000002) {
      (*DAT_00472314)();
      *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xfffffffe;
    }
    return;
  }
  (*DAT_00472310)();
  *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xfffffffe;
  return;
}

} /* extern "C" */
