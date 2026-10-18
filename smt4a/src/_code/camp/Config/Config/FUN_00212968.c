/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212968` (_code @ 0x212968, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f230; /* 0x57f230 */


unsigned char FUN_00212968(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f230 != 0) {
    temp_v0 = *(int *)(DAT_0057f230 + 100);
  }
  return DAT_0057f230 == 0 || temp_v0 == 6;
}
