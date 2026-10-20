/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e00c` (_code @ 0x34e00c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);
extern int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_0034e00c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  if ((*(short *)(temp_v1 + 2) == 0x323) &&
     (temp_v2 = btlUnitGet(g_btlScriptUnit), *(int *)(*(int *)(temp_v2 + 0x20) + 0x3b4) >= 5)) {
    scrSetResult(0);
    return 1;
  }
  temp_v1 = __aeabi_idivmod(*(int *)(temp_v1 + 0xf4) * 100,*(unsigned int *)(temp_v1 + 0xf8));
  scrSetResult(temp_v1 <= temp_v0);
  return 1;
}

} /* extern "C" */
