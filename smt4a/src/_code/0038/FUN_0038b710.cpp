/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b710` (_code @ 0x38b710, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_003d498c(unsigned int, int);
int uiQuestSpritesCreate(void);

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern unsigned char FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: uiQuestSpritesCreate. */


void FUN_0038b710(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x93e) = 1;
  temp_v2 = FUN_001bd100(param_1);
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
  *(unsigned int *)(temp_v0 + 0xc) = 0x1c;
  return;
}

} /* extern "C" */
