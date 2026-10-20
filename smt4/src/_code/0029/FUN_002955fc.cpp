/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002955fc` (_code @ 0x2955fc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlTalkBustUp; /* 0x434210 */


int FUN_002955fc(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (g_btlTalkBustUp != 0) {
    temp_v0 = (int)*(char *)(g_btlTalkBustUp + 0x2f4);
  }
  return temp_v0;
}

} /* extern "C" */
