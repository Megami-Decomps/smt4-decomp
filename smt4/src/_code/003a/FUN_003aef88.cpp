/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aef88` (_code @ 0x3aef88, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_btlUi; /* 0x439c88 */


unsigned int FUN_003aef88(void)

{
  int temp_v0;
  int temp_v1;
  
  if ((*(int *)((unsigned char *)&g_btlUi + 0x20)) != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = (*(int *)((unsigned char *)&g_btlUi + 0x20)) + temp_v0 * 0x14c;
      if ((*(unsigned short *)(temp_v1 + 0xe1c4) - 1 < 4) || (*(unsigned short *)(temp_v1 + 0xe310) - 1 < 4)) {
        return 0;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0xc);
  }
  return 1;
}

} /* extern "C" */
