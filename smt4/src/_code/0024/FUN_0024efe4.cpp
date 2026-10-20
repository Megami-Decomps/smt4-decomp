/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024efe4` (_code @ 0x24efe4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_frameTex; /* 0x43e278 */


int FUN_0024efe4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (g_frameTex != 0) {
    temp_v0 = (int)*(char *)(g_frameTex + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
