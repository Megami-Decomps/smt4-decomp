/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5c6c` (_code @ 0x2e5c6c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(int, int);
int FUN_002a1f60(unsigned int, int, unsigned int, int, int, int, unsigned int);
int effectSpawnDefaultArguments(unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_infoWin; /* 0x57f574 */

extern int vec2GetXInt(int);
extern int fileSectionGetData(int, unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: effectSpawnDefaultArguments. */
extern int FUN_00333750(void);


void FUN_002e5c6c(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v1 = FUN_00333750();
  temp_v2 = fileSectionGetData(temp_v1,param_1,0);
  temp_v0 = g_infoWin;
  if (temp_v2 != 0) {
    *(unsigned char *)(g_infoWin + 0x31) = 0;
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x31) = 1;
      FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x328),3,0xffffffff,0,3,temp_v1,param_1);
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
    temp_v0 = g_infoWin;
    temp_v1 = g_infoWin + 0x54;
    *(unsigned int *)(g_infoWin + 8) = 1;
    uiSpriteSetKeyframe(temp_v1,0);
    uiSpriteSetImageKeyframe(temp_v0 + 0x54,0);
    *(unsigned char *)(temp_v0 + 0x33) = 1;
    *(unsigned char *)(temp_v0 + 0x30) = 1;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
    *(unsigned char *)(temp_v0 + 0x32d) = 0;
  }
  return;
}

} /* extern "C" */
