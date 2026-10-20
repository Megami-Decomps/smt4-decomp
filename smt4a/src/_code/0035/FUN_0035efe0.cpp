/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035efe0` (_code @ 0x35efe0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_0035efe0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  puVar3 = *(unsigned int **)(temp_v1 + 0x20);
  temp_v2 = puVar3[temp_v0 + 0xed];
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  if (((DAT_005702a0 & *puVar3) != 0 || (puVar3[1] & DAT_005702a4) != 0) &&
     (*(short *)(*(int *)(temp_v0 + 0x28) + 2) == 0x3b7)) {
    scrSetResult(0);
    return 1;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
