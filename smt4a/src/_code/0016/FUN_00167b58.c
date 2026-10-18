/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167b58` (_code @ 0x167b58, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581274; /* 0x581274 */


unsigned int FUN_00167b58(void)

{
  if (DAT_00581274 != 0) {
    if (*(int *)(DAT_00581274 + 0x28) != 0x17) {
      if (*(int *)(DAT_00581274 + 0x28) != 0x18) {
        return 0;
      }
    }
    else if (*(int *)(DAT_00581274 + 0x2c) < 0xc) {
      return 0;
    }
  }
  return 1;
}
