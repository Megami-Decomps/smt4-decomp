/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fcbc` (_code @ 0x35fcbc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlTalkBustUp; /* 0x5710dc */


unsigned int FUN_0035fcbc(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (((g_btlTalkBustUp != 0) && (*(char *)(g_btlTalkBustUp + 0xaa) == '\0')) &&
     (*(short *)(g_btlTalkBustUp + 0x7c) == 10)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
