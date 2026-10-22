/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Battle_ShowStatusScreen` (_code @ 0x2e3940, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00218b9c(int);
int FUN_00250d84(unsigned int, int);
int scrWorkSetValue(...);
int FUN_0028c040(void);
int playerSkillInsertFirstFree(unsigned int);
int gameClearUnlockedSavedId(unsigned int);
int gameReleaseDataReference(void);
int FUN_00295a18(unsigned int, int);
int beginStatusPanelClose(void);
int FUN_0029e874(int);
int FUN_002bd8d4(int);
int FUN_002f5eac(unsigned int, int);
int statusOpenSkillSelection(unsigned int, int);

extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00218b9c. */
/* Supplied declaration required: FUN_00250d84. */
extern int scrWorkGetValue(unsigned int);
/* Supplied declaration required: scrWorkSetValue. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: playerSkillInsertFirstFree. */
/* Supplied declaration required: gameClearUnlockedSavedId. */
extern unsigned int statusDownGetValue(void);
extern int statusScreenIsClosed(void);
/* Supplied declaration required: gameReleaseDataReference. */
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_00295a18. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_002bd8d4. */
/* Supplied declaration required: FUN_002f5eac. */
/* Supplied declaration required: statusOpenSkillSelection. */


unsigned int scrComm_Battle_ShowStatusScreen(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
  }
  temp_v1 = scrWorkGetValue(0);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_00295618(), temp_v1 != 0)) {
          gameReleaseDataReference();
          FUN_002bd8d4(g_btlUiBlock + 0x2460);
          scrWorkSetValue(0,4);
          return 1;
        }
      }
      else {
        temp_v1 = statusScreenIsClosed();
        if (temp_v1 != 0) {
          temp_v2 = statusDownGetValue();
          if (temp_v2 != 0) {
            gameClearUnlockedSavedId(temp_v2 & 0xffff);
          }
          playerSkillInsertFirstFree(temp_v0 & 0xffff);
          beginStatusPanelClose();
          scrWorkSetValue(0,3);
        }
      }
    }
    else {
      scrWorkSetValue(0,2);
      FUN_0028c040();
      FUN_0029e874(0);
      statusOpenSkillSelection(temp_v0 & 0xffff,0);
      FUN_00218b9c(g_btlUiBlock + 0x2460);
    }
  }
  else {
    FUN_002f5eac(temp_v0,1);
    FUN_00295a18(temp_v0,1);
    FUN_00250d84(temp_v0,1);
    scrWorkSetValue(0,1);
  }
  return 0;
}

} /* extern "C" */
