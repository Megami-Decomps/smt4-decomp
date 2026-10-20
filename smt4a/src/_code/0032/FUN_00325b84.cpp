/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325b84` (_code @ 0x325b84, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00581280; /* 0x581280 */


void FUN_00325b84(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00581280;
  *(unsigned short *)(DAT_00581280 + 0xf42) = 0;
  *(unsigned short *)(temp_v0 + 0xf44) = 0;
  return;
}

} /* extern "C" */
