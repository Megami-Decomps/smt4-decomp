/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341f88` (_code @ 0x341f88, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


unsigned short FUN_00341f88(void)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) != 0) {
    temp_v0 = *(unsigned short *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5e8);
  }
  return temp_v0;
}

} /* extern "C" */
