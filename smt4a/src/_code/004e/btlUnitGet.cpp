/* NON_MATCHING: romwright 0.5.0 decompilation of `btlUnitGet` (_code @ 0x4ee568, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlScriptUnit; /* 0x57113c */


int btlUnitGet(int *param_1)

{
  int temp_v0;
  
  if (((*param_1 != 0) && (temp_v0 = *(int *)(*param_1 + 0xa4), -1 < temp_v0)) && (temp_v0 < 0xc)) {
    return g_btlScriptUnit + temp_v0 * 0x1254 + 4;
  }
  return 0;
}

} /* extern "C" */
