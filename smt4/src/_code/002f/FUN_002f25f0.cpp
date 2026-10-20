/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f25f0` (_code @ 0x2f25f0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlTalkBustUp; /* 0x434210 */


unsigned int FUN_002f25f0(void)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (g_btlTalkBustUp != 0) {
    if (*(int *)(g_btlTalkBustUp + 0x2f8) >= 0) {
      temp_v0 = *(unsigned int *)(g_btlTalkBustUp + 0x308);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
