/* NON_MATCHING: fragment of a larger function (valid lookup body is followed by a literal pool and an orphan mov r0,#1 instruction) */
/* romwright 0.5.0 decompilation of NaviMain_IsMapOpen for reference (not compiled; its own view of the boundaries):

unsigned char FUN_0021e9cc(void)

{
  if (DAT_0044cdf0 == 0) {
    return 0;
  }
  return *(int *)(DAT_0044cdf0 + 0x44) == 4 || *(int *)(DAT_0044cdf0 + 0x44) == 6;
}
*/
#include "common.h"
