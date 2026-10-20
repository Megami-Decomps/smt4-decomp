/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00452d0c` (_code @ 0x452d0c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_005c0f50; /* 0x5c0f50 */
extern romwright_code *DAT_005c0f54; /* 0x5c0f54 */


void FUN_00452d0c(int *param_1)

{
  if (*(int *)*param_1 != 0x10000001) {
    if (*(int *)*param_1 == 0x10000002) {
      (*DAT_005c0f54)();
      *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xfffffffe;
    }
    return;
  }
  (*DAT_005c0f50)();
  *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) & 0xfffffffe;
  return;
}

} /* extern "C" */
