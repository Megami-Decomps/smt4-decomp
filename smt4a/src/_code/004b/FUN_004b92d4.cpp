/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b92d4` (_code @ 0x4b92d4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct ScriptHolder;

extern "C" {

int infoWinSetValue(int);
int FUN_004731d8(void);
int scriptHolderFree2(int);
int FUN_0047e430(int, int);
int FUN_004b7d88(int);

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: infoWinSetValue. */
/* Supplied declaration required: FUN_004731d8. */
extern int gameBlockByte27E98Is1To3(void);
extern unsigned int scriptHolderUpdateForward(ScriptHolder *);
/* Supplied declaration required: scriptHolderFree2. */
/* Supplied declaration required: FUN_0047e430. */
/* Supplied declaration required: FUN_004b7d88. */


void FUN_004b92d4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = scriptHolderUpdateForward((ScriptHolder *)(g_aocMain + 0xa8)), temp_v0 != 0))
    {
      scriptHolderFree2(g_aocMain + 0xa8);
      temp_v0 = gameBlockByte27E98Is1To3();
      if (temp_v0 == 0) {
        FUN_004731d8();
        infoWinSetValue(1);
        FUN_004b7d88(param_1);
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        return;
      }
      *(unsigned int *)(param_1 + 0x28) = 0xd;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
  }
  else if ((*(unsigned int *)(g_aocMain + 0x754) & 4) == 0 && (*(unsigned int *)(g_aocMain + 0x754) & 8) == 0)
  {
    infoWinSetValue(0);
    temp_v0 = g_aocMain;
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
    FUN_0047e430(temp_v0 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  return;
}

} /* extern "C" */
