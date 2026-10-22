/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334560` (_code @ 0x334560, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_00202400(void);
int questMarkSelectedSpecialDetail(void);
int FUN_003d498c(unsigned int, int);
int uiQuestSpritesCreate(void);
unsigned int questHasSpecialDetailPage(unsigned int);

extern int g_uiQuest; /* 0x57f28c */

extern int campIsState85(void);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00202400. */
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: questMarkSelectedSpecialDetail. */
extern int FUN_002f7730(int, unsigned int);
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: uiQuestSpritesCreate. */
extern int partyEntryBitsBit4(unsigned int);


void FUN_00334560(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x90c) = 1;
  uiQuestSpritesCreate();
  temp_v1 = resourceRunOperationIfUnblocked();
  temp_v2 = FUN_002a4894(temp_v5 + 0x948);
  temp_v0 = *(unsigned short *)(temp_v5 + (temp_v2 + temp_v1) * 2 + 0xa10);
  temp_v6 = (unsigned int)temp_v0;
  FUN_003d498c(temp_v6,1);
  *(unsigned short *)(temp_v5 + 0xcce) = temp_v0;
  temp_v1 = g_uiQuest;
  temp_v2 = partyEntryBitsBit4(temp_v6);
  if ((temp_v2 == 0) && ((temp_v3 = questHasSpecialDetailPage(temp_v6)) != 0)) {
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v1 + 0x918)) {
      do {
        temp_v4 = FUN_002f7730(temp_v2,temp_v6);
        if (temp_v4 == 3) break;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v1 + 0x918));
    }
    if (*(int *)(temp_v1 + 0x918) <= temp_v2) {
      temp_v2 = 0;
    }
    *(int *)(temp_v1 + 0x910) = temp_v2;
    *(int *)(temp_v1 + 0x914) = temp_v2;
  }
  if (*(short *)(temp_v5 + 0xcd0) >= 3) {
    questMarkSelectedSpecialDetail();
  }
  uiSpriteSetKeyframe(temp_v5 + 0x34,0);
  uiSpriteSetImageKeyframe(temp_v5 + 0x34,8,0);
  temp_v5 = campIsState85();
  if (temp_v5 != 0) {
    FUN_00202400();
  }
  temp_v5 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v5 + 4) = 1;
  *(unsigned int *)(temp_v5 + 0x10) = 0;
  return;
}

} /* extern "C" */
