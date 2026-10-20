/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab784` (_code @ 0x4ab784, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057a9c8; /* 0x57a9c8 */


unsigned int FUN_004ab784(void)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_0057a9c8 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = DAT_0057a9c8 + temp_v0 * 0x14c;
      if ((*(unsigned short *)(temp_v1 + 0x11a2c) - 1 < 4) || (*(unsigned short *)(temp_v1 + 0x11b78) - 1 < 4)) {
        return 0;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0xc);
  }
  return 1;
}

} /* extern "C" */
