/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ceb8` (_code @ 0x27ceb8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */


void FUN_0027ceb8(unsigned short param_1,unsigned short param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0044cd88;
  *(unsigned short *)(DAT_0044cd88 + 8) = 0;
  *(unsigned short *)(temp_v0 + 10) = 0;
  *(unsigned short *)(temp_v0 + 4) = param_1;
  *(unsigned short *)(temp_v0 + 6) = param_2;
  return;
}
