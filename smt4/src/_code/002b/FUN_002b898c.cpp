/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b898c` (_code @ 0x2b898c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_buttonHelp; /* 0x43da28 */


unsigned char FUN_002b898c(void)

{
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) != 0) {
    temp_v0 = *(unsigned char *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x4c9);
  }
  return temp_v0;
}

} /* extern "C" */
