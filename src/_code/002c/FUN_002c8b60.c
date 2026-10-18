/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8b60` (_code @ 0x2c8b60, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e58; /* 0x447e58 */


void FUN_002c8b60(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447e58;
  *(unsigned short *)(DAT_00447e58 + 0xe3e) = 0;
  *(unsigned short *)(temp_v0 + 0xe40) = 0;
  return;
}
