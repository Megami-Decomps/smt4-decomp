/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241b44` (_code @ 0x241b44, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e110; /* 0x43e110 */

extern int FUN_002b6e60(void);


unsigned int FUN_00241b44(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b6e60();
  temp_v1 = 0;
  if ((*(short *)(temp_v0 + 0x46) != 0) && (temp_v1 = 0, *(int *)(DAT_0043e110 + 8) != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
