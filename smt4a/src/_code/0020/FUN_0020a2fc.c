/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020a2fc` (_code @ 0x20a2fc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f290; /* 0x57f290 */


unsigned char FUN_0020a2fc(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f290 != 0) {
    temp_v0 = *(int *)(DAT_0057f290 + 0x400);
  }
  return DAT_0057f290 == 0 || temp_v0 == 0x28;
}
