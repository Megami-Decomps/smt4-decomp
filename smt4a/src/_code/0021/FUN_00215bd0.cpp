/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215bd0` (_code @ 0x215bd0, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int gameStateChange(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char g_gameGlobals; /* 0x588fd0 */

/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: gameStateChange. */


void FUN_00215bd0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  uiSpriteSelectAnim((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x4a4,0);
  uiSpriteSelectAnim(temp_v0 + 0x530,1);
  uiSpriteSelectAnim(temp_v0 + 0x5bc,2);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    temp_v3 = temp_v2 + 0x7ec;
    uiSpriteSetKeyframe(temp_v3,0x10,0);
    uiSpriteSetImageKeyframe(temp_v3,0xd,0);
    uiSpriteSetKeyframe(temp_v2 + 0xd64,1,0);
    temp_v2 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2011) = 0;
  if ((*(char *)(temp_v2 + 0x2018) != '\n') &&
     (temp_v1 = *(int *)(temp_v2 + 0x1368), (temp_v1 == 5 || temp_v1 == 6) || temp_v1 == 7)) {
    *(unsigned int *)(temp_v2 + 0x136c) = 0;
  }
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned char *)(temp_v0 + 0x1380) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  gameStateChange(2);
  return;
}

} /* extern "C" */
