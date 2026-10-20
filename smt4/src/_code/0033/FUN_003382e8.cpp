/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003382e8` (_code @ 0x3382e8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern int btlUnitGet(unsigned int);


unsigned int FUN_003382e8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (*(char *)(temp_v0 + 4) == '\x05') {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
