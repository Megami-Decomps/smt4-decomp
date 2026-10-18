/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed80c` (_code @ 0x1ed80c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


unsigned int FUN_001ed80c(void)

{
  int temp_v0;
  
  if (DAT_0043dcf0 != 0) {
    temp_v0 = *(int *)(DAT_0043dcf0 + 0x1c);
    if (temp_v0 != 0x17) {
      if (temp_v0 == 0xb) {
        return 0;
      }
      if ((temp_v0 == 0xd) && (*(int *)(DAT_0043dcf0 + 0x24) != 8)) {
        return 0;
      }
    }
    else if (*(int *)(DAT_0043dcf0 + 0x18) >= 5) {
      return 0;
    }
    if (((*(short *)(DAT_0043dcf0 + 0x2e8) != 8) && (*(short *)(DAT_0043dcf0 + 0x2e8) != 7)) ||
       (*(char *)(DAT_0043dcf0 + 0x322) == '\0')) {
      return 1;
    }
  }
  return 0;
}
