/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a4b0` (_code @ 0x21a4b0, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(unsigned int, int);
int sysPlaySe(int);
int uiSpriteSelectAnim(int, int);
int FUN_001ad9b4(void);
int gameOptionsClassifyMode(void);
int libc_strcpy(unsigned char [132], unsigned int);
int FUN_003180c4(int, unsigned char [132]);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_003d474c(void);
void uiQuestRefreshDetailPages(int);
int FUN_003dea6c(unsigned int, int, int);
int FUN_00417e08(unsigned int);
int optionsSetFlag1(void);

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: gameOptionsClassifyMode. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_003d474c. */
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: optionsSetFlag1. */


void FUN_0021a4b0(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [132];
  
  temp_v2 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x93f) = 1;
  temp_v0 = resourceRunOperationIfUnblocked();
  temp_v1 = FUN_002a4894(temp_v2 + 0x9ac);
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v1 + temp_v0) * 2 + 0xad6);
  FUN_00417e08(temp_v4);
  gameOptionsClassifyMode();
  optionsSetFlag1();
  uiQuestRefreshDetailPages(temp_v4);
  uiSpriteSelectAnim(temp_v2 + 0x264,2);
  FUN_003dea6c(temp_v4,0,1);
  FUN_001ad9b4();
  if ((temp_v4 == 0) || (*(char *)(temp_v4 + 6) != '\v')) {
    temp_v2 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),3);
    if (temp_v2 == 0) {
      return;
    }
  }
  else {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0xf2);
    FUN_0015f858(temp_v3,0);
    libc_strcpy(temp_v5,temp_v3);
    FUN_003180c4(0,temp_v5);
    FUN_00359974(0x18,*(unsigned int *)(temp_v4 + 0xf4),0xffffffff,0);
    temp_v2 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),0x13);
    if (temp_v2 == 0) {
      return;
    }
  }
  sysPlaySe(0xa0);
  FUN_003d474c();
  temp_v2 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v2 + 4) = 0xc;
  *(unsigned int *)(temp_v2 + 0x10) = 0;
  return;
}

} /* extern "C" */
