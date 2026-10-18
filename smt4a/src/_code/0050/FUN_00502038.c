/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00502038` (_code @ 0x502038, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00502064(); /* 0x502064 */


unsigned int FUN_00502038(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (int)(param_1[1] - *param_1) >> 1;
  temp_v1 = FUN_00502064.whole;
  if (temp_v0 < 0x101) {
    *param_2 = temp_v0;
    param_2[1] = *param_1;
    temp_v1 = 0;
  }
  return temp_v1;
}
