/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3b90` (_code @ 0x2f3b90, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_002f3b90(void)

{
  unsigned int temp_v0;
  
  if ((*(int *)(DAT_0057f290 + 0x400) == 2) && (*(char *)(DAT_0057f290 + 0x9090) == '\0')) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
