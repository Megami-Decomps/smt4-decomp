/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c820` (_code @ 0x26c820, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int playSceneTimerSubStart(int);
int playSceneFadeInStart(int);
int FUN_0028be84(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_btlUi; /* 0x439c88 */

/* Supplied declaration required: playSceneTimerSubStart. */
/* Supplied declaration required: playSceneFadeInStart. */
/* Supplied declaration required: FUN_0028be84. */
extern int playSceneIsFadeOutDone(int);


void FUN_0026c820(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x20));
  temp_v1 = playSceneIsFadeOutDone((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x2200;
    FUN_0028be84();
    if (temp_v1 != 0) {
      playSceneFadeInStart(temp_v0 + 8);
      playSceneTimerSubStart(temp_v0 + 0x2200);
      return;
    }
  }
  return;
}

} /* extern "C" */
