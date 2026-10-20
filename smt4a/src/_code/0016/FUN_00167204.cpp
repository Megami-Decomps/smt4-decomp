/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167204` (_code @ 0x167204, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_npcRoom; /* 0x588124 */


int FUN_00167204(int param_1)

{
  int temp_v0;
  
  if (g_npcRoom != 0) {
    temp_v0 = (int)*(short *)(g_npcRoom + param_1 * 0x10 + 100);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
