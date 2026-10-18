/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4ba4` (_code @ 0x1b4ba4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_005b4028; /* 0x5b4028 */
extern short DAT_005b402a; /* 0x5b402a */
extern int DAT_005b4030; /* 0x5b4030 */


void FUN_001b4ba4(unsigned short param_1)

{
  unsigned char temp_v0;
  
  temp_v0 = DAT_005b402a == 0;
  DAT_005b402a = DAT_005b402a + 1;
  if (temp_v0) {
    DAT_005b4028 = *(unsigned short *)(DAT_005b4030 + 0x38);
  }
  *(unsigned short *)(DAT_005b4030 + 0x38) = param_1;
  return;
}
