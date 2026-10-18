/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019ea64` (_code @ 0x19ea64, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */


void FUN_0019ea64(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f590 + 0x19da) = param_1;
  *(unsigned char *)(DAT_0057f58c + 0x19da) = param_1;
  return;
}
