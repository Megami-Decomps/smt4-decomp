/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e0d4` (_code @ 0x34e0d4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);
extern int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_0034e0d4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = __aeabi_idivmod(*(int *)(*(int *)(temp_v1 + 0x28) + 0xfc) * 100,
                        *(unsigned int *)(*(int *)(temp_v1 + 0x28) + 0x100));
  scrSetResult(temp_v1 <= temp_v0);
  return 1;
}

} /* extern "C" */
