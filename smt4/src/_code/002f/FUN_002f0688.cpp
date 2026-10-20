/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0688` (_code @ 0x2f0688, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern int btlUnitGet(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_002f0688(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  scrSetResult(((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0xfa) & (1 << (temp_v0 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
