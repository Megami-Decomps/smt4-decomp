/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272f54` (_code @ 0x272f54, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806d4; /* 0x5806d4 */
extern unsigned short DAT_005f17c4; /* 0x5f17c4 */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */


void FUN_00272f54(void)

{
  int temp_v0;
  
  temp_v0 = DAT_005806d4;
  *(unsigned int *)(DAT_005806d4 + 4) = 4;
  *(unsigned int *)(temp_v0 + 8) = 0;
  DAT_005f17c4 = 0;
  DAT_005f17c9 = 0;
  return;
}
