/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8774` (_code @ 0x2d8774, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044dc50; /* 0x44dc50 */

extern int FUN_00289640(int);


unsigned int FUN_002d8774(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_0044dc50 == 0) {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_00289640(DAT_0044dc50);
    if (temp_v1 == 0) {
      *(unsigned char *)(DAT_0044dc50 + 8) = 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
