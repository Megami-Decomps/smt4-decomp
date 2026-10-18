/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334158` (_code @ 0x334158, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

extern int FUN_003e5ae8(unsigned int);


unsigned int FUN_00334158(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_00588fd4 + 0x1368);
  if (((temp_v0 == 5 || temp_v0 == 6) || (temp_v0 == 7 || temp_v0 == 9)) &&
     (temp_v0 = FUN_003e5ae8(*(unsigned int *)(DAT_00588fd4 + 0x2034)), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
