/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1554` (_code @ 0x2f1554, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_001ad9b4(void);
int FUN_003d498c(int, int);
int uiQuestSpritesCreate(void);

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_001ad9b4. */
extern unsigned char FUN_001bd100(void);
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: uiQuestSpritesCreate. */


void FUN_002f1554(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x93e) = 1;
  temp_v2 = FUN_001bd100();
  *(unsigned char *)(temp_v0 + 0x90c) = temp_v2;
  *(short *)(temp_v0 + 0xcca) = (short)param_1;
  uiQuestSpritesCreate();
  FUN_003d498c(param_1,1);
  uiSpriteSetKeyframe(temp_v0 + 0x34,0);
  uiSpriteSetImageKeyframe(temp_v0 + 0x34,8,0);
  temp_v1 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v1 + 4) = 1;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0x1d;
  FUN_001ad9b4();
  if ((*(unsigned char *)(param_1 + 7) & 0x20) != 0) {
    *(unsigned int *)(temp_v0 + 0x910) = 2;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x910) = 1;
  }
  return;
}

} /* extern "C" */
