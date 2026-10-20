/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3b34` (_code @ 0x2e3b34, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern int btlUnitGet(unsigned int);
extern unsigned short scrGetArg(void);


unsigned int FUN_002e3b34(void)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  *(unsigned short *)(temp_v1 + 0x14c) = 2;
  *(unsigned short *)(temp_v1 + 0x14e) = temp_v0;
  return 1;
}

} /* extern "C" */
