/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ee2c` (_code @ 0x29ee2c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_messageMain; /* 0x43e188 */


unsigned char FUN_0029ee2c(void)

{
  unsigned char temp_v0;
  
  if (((*(int *)((unsigned char *)&g_messageMain + 0x4)) == 0) || (temp_v0 = 1, *(char *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 8) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
