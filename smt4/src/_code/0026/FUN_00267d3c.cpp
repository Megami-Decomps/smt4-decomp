/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267d3c` (_code @ 0x267d3c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249974(void);
int playSceneTimerSubStartReverse(int);
int playSceneFadeOutStart(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_btlUi; /* 0x439c88 */

/* Supplied declaration required: FUN_00249974. */
/* Supplied declaration required: playSceneTimerSubStartReverse. */
/* Supplied declaration required: playSceneFadeOutStart. */
extern int playSceneIsFadeInDone(int);


void FUN_00267d3c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x20));
  temp_v1 = playSceneIsFadeInDone((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x2200;
    FUN_00249974();
    if (temp_v1 != 0) {
      playSceneFadeOutStart(temp_v0 + 8);
      playSceneTimerSubStartReverse(temp_v0 + 0x2200);
      return;
    }
  }
  return;
}

} /* extern "C" */
