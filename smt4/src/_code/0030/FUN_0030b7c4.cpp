/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b7c4` (_code @ 0x30b7c4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003de5d0(int, unsigned int, int, int);

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern unsigned int btlUnitGet(unsigned int);
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003de5d0. */


unsigned int FUN_0030b7c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v2 = btlGetMainState();
  FUN_003de5d0(0,temp_v1,*(int *)(temp_v2 + 0x1e98) + temp_v0 * 0x114,1);
  return 1;
}

} /* extern "C" */
