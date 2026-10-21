/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f15f8` (_code @ 0x2f15f8, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int uiSpriteSetKeyframe(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_002a4964(int, int);
int uiFadeRequestClear(void);
int FUN_003d2150(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern unsigned char FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: uiFadeRequestClear. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_003d2150. */


void FUN_002f15f8(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = g_uiQuest;
  *(short *)(g_uiQuest + 0xcca) = (short)param_1;
  temp_v1 = FUN_001bd100(param_1);
  *(unsigned char *)(temp_v0 + 0x90c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x938) = 0x3e55cfab;
  uiSpriteSetKeyframe(temp_v0 + 0x408,0);
  uiSpriteSetImageKeyframe(temp_v0 + 0x408,8,0);
  if (param_2 == 0) {
    *(unsigned char *)(temp_v0 + 0x93c) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x93c) = 1;
    temp_v4 = 0;
    if (*(char *)(temp_v0 + 0x90c) != '\0') {
      temp_v6 = temp_v0 + 0x948;
      temp_v5 = temp_v0 + 0xa10;
    }
    else {
      temp_v6 = temp_v0 + 0x9ac;
      temp_v5 = temp_v0 + 0xad6;
    }
    temp_v2 = objectApplyIfUnblocked(temp_v6);
    if (0 < temp_v2) {
      do {
        if (*(unsigned short *)(temp_v5 + temp_v4 * 2) == param_1) {
          FUN_002a4964(temp_v6,temp_v4);
          break;
        }
        temp_v4 = temp_v4 + 1;
        temp_v2 = objectApplyIfUnblocked(temp_v6);
      } while (temp_v4 < temp_v2);
    }
    uiSpriteSetKeyframe(temp_v0 + 0x34,0);
    uiSpriteSetImageKeyframe(temp_v0 + 0x34,8,0);
  }
  uiFadeRequestClear();
  temp_v0 = g_uiQuest;
  temp_v3 = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(g_uiQuest + 4) = 0x14;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  sysPlaySe(0x1a);
  FUN_003d2150(0x10000cb);
  return;
}

} /* extern "C" */
