/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f788` (_code @ 0x37f788, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_0037f788(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  scrSetResult(*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x152) >> 10 == 1);
  return 1;
}

} /* extern "C" */
