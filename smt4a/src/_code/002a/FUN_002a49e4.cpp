/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a49e4` (_code @ 0x2a49e4, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int, int);
int FUN_002a1f60(unsigned int, int, unsigned int, int, int, int, unsigned int);
int effectSpawnDefaultArguments(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_infoWin; /* 0x57f574 */

extern int vec2GetXInt(int);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: effectSpawnDefaultArguments. */


void FUN_002a49e4(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  
  temp_v0 = g_infoWin;
  *(unsigned char *)(g_infoWin + 0x31) = 0;
  if (param_1 != 0) {
    *(unsigned char *)(temp_v0 + 0x31) = 1;
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x328),3,0xffffffff,0,3,param_1,param_2);
    effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0x328));
    if ((int)in_s0 >= 0x43a68000) {
      *(unsigned char *)(temp_v0 + 0x32) = 1;
      *(int *)(temp_v0 + 0x14) = (int)in_s0;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x32) = 0;
    }
    uiSpriteSetKeyframe(temp_v0 + 0x16c,2,0);
    temp_v1 = vec2GetXInt(temp_v0 + 0x16c);
    *(int *)(temp_v0 + 0x18) = temp_v1;
    *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
    if (*(int *)(temp_v0 + 8) == 3) {
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}

} /* extern "C" */
