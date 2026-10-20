/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372944` (_code @ 0x372944, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283c8(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_003283c8. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_00372944(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  *(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0x1be) = 0xc;
  temp_v1 = btlGetMainState();
  *(unsigned int *)(temp_v1 + 0x2008) = temp_v0 | 0x10000;
  *(int *)(temp_v1 + 0x200c) = (int)(temp_v0 | 0x10000) >> 0x1f;
  FUN_003283c8(1);
  return 1;
}

} /* extern "C" */
