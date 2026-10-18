/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c678` (_code @ 0x37c678, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f134; /* 0x57f134 */

extern int FUN_002613f0(int);


unsigned short FUN_0037c678(void)

{
  int temp_v0;
  
  if (DAT_0057f134 == 0) {
    return 0;
  }
  if (-1 < *(int *)(DAT_0057f134 + 0x2c)) {
    temp_v0 = FUN_002613f0(*(int *)(DAT_0057f134 + 0x2c));
    return *(unsigned short *)(temp_v0 + 6);
  }
  return 0;
}
