/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa7c8` (_code @ 0x4aa7c8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframeThree(int);
int menu32PlayCursorSeAndSelect(int);
int FUN_00321500(int);
int FUN_0039ebcc(void);
int controllerStartInterpolation(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */

/* Supplied declaration required: uiSpriteSetKeyframeThree. */
/* Supplied declaration required: menu32PlayCursorSeAndSelect. */
/* Supplied declaration required: FUN_00321500. */
extern int menu32ModeIsNot6(int);
/* Supplied declaration required: FUN_0039ebcc. */
/* Supplied declaration required: controllerStartInterpolation. */


void FUN_004aa7c8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
  piVar3 = (int *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x74a0);
  if (*piVar3 == 0xd) {
    controllerStartInterpolation(*(unsigned int *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x7488));
    menu32PlayCursorSeAndSelect(temp_v0 + 0x28c4);
    *piVar3 = 0xb;
    temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
    temp_v1 = menu32ModeIsNot6((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x24bc;
      FUN_0039ebcc();
      if (temp_v1 != 0) {
        FUN_00321500(temp_v0 + 8);
        uiSpriteSetKeyframeThree(temp_v0 + 0x24bc);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
