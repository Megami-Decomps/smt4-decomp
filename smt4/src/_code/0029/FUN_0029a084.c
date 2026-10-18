/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a084` (_code @ 0x29a084, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_0029a084(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (unsigned int *)(DAT_0044e144 + 0x1ea8);
  }
  else {
    if (param_1 == 1) {
      *(unsigned int *)(DAT_0044e144 + 0x1eac) = param_2;
      return;
    }
    if (param_1 != 2) {
      return;
    }
    puVar1 = (unsigned int *)(DAT_0044e144 + 0x1eb0);
  }
  *puVar1 = param_2;
  return;
}
