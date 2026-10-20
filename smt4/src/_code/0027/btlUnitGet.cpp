/* NON_MATCHING: romwright 0.5.0 decompilation of `btlUnitGet` (_code @ 0x27e928, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlScriptUnit; /* 0x43427c */


int btlUnitGet(int *param_1)

{
  int temp_v0;
  
  if (((*param_1 != 0) && (temp_v0 = *(int *)(*param_1 + 0x84), -1 < temp_v0)) && (temp_v0 < 4)) {
    return g_btlScriptUnit + temp_v0 * 0xf1c + 4;
  }
  return 0;
}

} /* extern "C" */
