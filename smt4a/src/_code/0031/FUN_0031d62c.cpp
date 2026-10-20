/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d62c` (_code @ 0x31d62c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_messageMain; /* 0x57f588 */


unsigned char FUN_0031d62c(void)

{
  unsigned char temp_v0;
  
  if (((*(int *)((unsigned char *)&g_messageMain + 0x8)) == 0) || (temp_v0 = 1, *(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 8) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
