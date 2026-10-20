/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011499c` (_code @ 0x11499c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_listenerTable; /* 0x594ad8 */


unsigned int FUN_0011499c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&g_listenerTable + 0x50)) != 0) {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&g_listenerTable + 0x50)) + 8);
  }
  return temp_v0;
}

} /* extern "C" */
