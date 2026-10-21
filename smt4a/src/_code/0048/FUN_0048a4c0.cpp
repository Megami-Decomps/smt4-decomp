/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048a4c0` (_code @ 0x48a4c0, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteBankApplyPreset(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_0048bdec(int);
int sub68OwnerGetBlock60(int);
int lmapSceneGetObj(void);
int FUN_00492c18(int, int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: uiSpriteBankApplyPreset. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_0048bdec. */
/* Supplied declaration required: sub68OwnerGetBlock60. */
/* Supplied declaration required: lmapSceneGetObj. */
/* Supplied declaration required: FUN_00492c18. */


void FUN_0048a4c0(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      FUN_0048bdec(param_1);
      if ((*(unsigned int *)(param_1 + 0x10) & 8) == 0) {
        *(unsigned int *)(param_1 + 8) = 2;
      }
      return;
    }
    if (temp_v1 != 2) {
      return;
    }
    *(unsigned int *)(param_1 + 4) = 2;
  }
  else {
    *(unsigned char *)(param_1 + 0x5e) = 0;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x1008;
    lmapSceneGetObj();
    sub68OwnerGetBlock60(param_1 + 0x4cc);
    temp_v2 = 0;
    temp_v3 = 0;
    FUN_00492c18(param_1 + 0x4cc,&temp_v2);
    uiSpriteBankApplyPreset(param_1 + 0x4e4,0);
    uiSpriteBankApplyPreset(param_1 + 0x4e4,1);
    uiSpriteSetImageKeyframe(param_1 + 0xf88,1,0);
    uiSpriteSetKeyframe(param_1 + 0x1014,1,0);
    temp_v0 = 1;
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}

} /* extern "C" */
