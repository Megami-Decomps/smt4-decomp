/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8430` (_code @ 0x3e8430, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int FUN_004ec93c(unsigned int);
extern int btlUnitGet(unsigned int);


unsigned int FUN_003e8430(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_004ec93c(g_btlScriptUnit), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
