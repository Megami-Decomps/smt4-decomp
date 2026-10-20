/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8778` (_code @ 0x2c8778, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_003d2150(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_003d2150. */


void FUN_002c8778(unsigned short param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_uiQuest;
  *(unsigned short *)(g_uiQuest + 0xcca) = param_1;
  *(unsigned int *)(temp_v0 + 0x934) = 0;
  uiSpriteSetKeyframe(temp_v0 + 0x34,1,0);
  uiSpriteSetImageKeyframe(temp_v0 + 0x34,8,0);
  if (temp_v0 != 0) {
    uiSpriteSetKeyframe(temp_v0 + 0x5ac,7,0);
    uiSpriteSetImageKeyframe(temp_v0 + 0x5ac,0xb,0);
    uiSpriteSetKeyframe(temp_v0 + 0x638,8,0);
    uiSpriteSetImageKeyframe(temp_v0 + 0x638,0xb,0);
    uiSpriteSelectAnim(temp_v0 + 0x6c4,6);
    uiSpriteSelectAnim(temp_v0 + 0x750,7);
    uiSpriteSelectAnim(temp_v0 + 0x7dc,8);
    *(unsigned short *)(temp_v0 + 0x816) = 2;
    uiSpriteSelectAnim(temp_v0 + 0x868,10);
    *(unsigned int *)(temp_v0 + 0xd48) = 0;
    *(unsigned int *)(temp_v0 + 0xd4c) = 0;
  }
  temp_v0 = g_uiQuest;
  temp_v1 = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(g_uiQuest + 4) = 0x11;
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  sysPlaySe(0x1a);
  FUN_003d2150(0x10000ca);
  return;
}

} /* extern "C" */
