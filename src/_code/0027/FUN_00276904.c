/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276904` (_code @ 0x276904, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */


void FUN_00276904(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  if (*(short *)(DAT_00447a78 + 0xccb8) != 0) {
    *(unsigned short *)(DAT_00447a78 + 0xccb8) = 3;
    *(unsigned short *)(temp_v0 + 0xccba) = 0;
  }
  return;
}
