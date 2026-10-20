/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d478` (_code @ 0x39d478, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b54a0(int, unsigned int);
int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002b54a0. */
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_0039d478(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = *(int *)(temp_v1 + 0x20);
  FUN_002b54a0(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
