/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003216d0` (_code @ 0x3216d0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlTalkBustUp; /* 0x5710dc */


int FUN_003216d0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (g_btlTalkBustUp != 0) {
    temp_v0 = (int)*(char *)(g_btlTalkBustUp + 0x2f5);
  }
  return temp_v0;
}

} /* extern "C" */
