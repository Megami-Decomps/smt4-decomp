/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241a14` (_code @ 0x241a14, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e110; /* 0x43e110 */

extern int FUN_002b6b20(void);


unsigned int FUN_00241a14(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b6b20();
  temp_v1 = 0;
  if ((*(short *)(temp_v0 + 0x46) != 0) && (temp_v1 = 0, *(int *)(DAT_0043e110 + 8) != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
