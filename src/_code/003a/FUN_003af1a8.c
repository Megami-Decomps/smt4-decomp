/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af1a8` (_code @ 0x3af1a8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */


unsigned int FUN_003af1a8(void)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_00439ca8 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = DAT_00439ca8 + temp_v0 * 0x14c;
      if ((*(unsigned short *)(temp_v1 + 0xe1c4) - 1 < 4) || (*(unsigned short *)(temp_v1 + 0xe310) - 1 < 4)) {
        return 0;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0xc);
  }
  return 1;
}
