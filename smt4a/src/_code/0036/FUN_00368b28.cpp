/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368b28` (_code @ 0x368b28, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_naviMain; /* 0x587f28 */


void FUN_00368b28(int param_1)

{
  unsigned int temp_v0;
  
  if (g_naviMain == 0) {
    return;
  }
  if (param_1 != 0) {
    temp_v0 = *(unsigned int *)(g_naviMain + 0x78) | 0x20;
  }
  else {
    temp_v0 = *(unsigned int *)(g_naviMain + 0x78) & 0xffffffdf;
  }
  *(unsigned int *)(g_naviMain + 0x78) = temp_v0;
  return;
}

} /* extern "C" */
