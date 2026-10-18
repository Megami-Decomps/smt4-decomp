/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a25c` (_code @ 0x29a25c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

extern int FUN_00294180(unsigned int);


unsigned int FUN_0029a25c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0044e144 + 0x12dc);
  if (((temp_v0 == 4 || temp_v0 == 5) || (temp_v0 == 6 || temp_v0 == 8)) &&
     (temp_v0 = FUN_00294180(*(unsigned int *)(DAT_0044e144 + 0x1e80)), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
