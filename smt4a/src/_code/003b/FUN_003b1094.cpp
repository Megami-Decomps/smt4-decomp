/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1094` (_code @ 0x3b1094, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_003b1094(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v1 = 0xb;
  }
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  scrSetResult(*(int *)(*(int *)(temp_v0 + 0x20) + temp_v1 * 4 + 0x74) <= -1);
  return 1;
}

} /* extern "C" */
