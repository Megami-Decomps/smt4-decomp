/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7c3c` (_code @ 0x3a7c3c, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_002a4964(int, int);
int FUN_003d2150(int);
int FUN_003d498c(unsigned int, int);
int uiQuestSpritesCreate(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_002a4964. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: uiQuestSpritesCreate. */


void FUN_003a7c3c(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = g_uiQuest;
  *(short *)(g_uiQuest + 0xcca) = (short)param_1;
  temp_v1 = FUN_001bd100(param_1);
  if (temp_v1 != 0) {
    temp_v4 = temp_v0 + 0x948;
  }
  else {
    temp_v4 = temp_v0 + 0x800;
  }
  *(char *)(temp_v0 + 0x90c) = (char)temp_v1;
  if (temp_v1 == 0) {
    temp_v4 = temp_v4 + 0x1ac;
    temp_v1 = temp_v0 + 0xad6;
  }
  else {
    temp_v1 = temp_v0 + 0xa10;
  }
  temp_v3 = 0;
  *(unsigned char *)(temp_v0 + 0x93e) = 1;
  temp_v2 = objectApplyIfUnblocked(temp_v4);
  if (0 < temp_v2) {
    do {
      if (*(unsigned short *)(temp_v1 + temp_v3 * 2) == param_1) {
        FUN_002a4964(temp_v4,temp_v3);
        break;
      }
      temp_v3 = temp_v3 + 1;
      temp_v2 = objectApplyIfUnblocked(temp_v4);
    } while (temp_v3 < temp_v2);
  }
  uiQuestSpritesCreate();
  FUN_003d498c(param_1,0);
  uiSpriteSetKeyframe(temp_v0 + 0x34,0);
  uiSpriteSetKeyframe(temp_v0 + 0x494,2,0);
  uiSpriteSetImageKeyframe(temp_v0 + 0x34,8,0);
  uiSpriteSetImageKeyframe(temp_v0 + 0x494,9,0);
  temp_v0 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v0 + 4) = 0x17;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  sysPlaySe(0x1a);
  FUN_003d2150(0x1000308);
  return;
}

} /* extern "C" */
