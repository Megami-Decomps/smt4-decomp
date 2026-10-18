/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299fc0` (_code @ 0x299fc0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

extern int FUN_00293edc(unsigned int);


unsigned int FUN_00299fc0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0044e144 + 0x12dc);
  if (((temp_v0 == 4 || temp_v0 == 5) || (temp_v0 == 6 || temp_v0 == 8)) &&
     (temp_v0 = FUN_00293edc(*(unsigned int *)(DAT_0044e144 + 0x1e80)), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
