/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f78a0` (_code @ 0x2f78a0, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */


void FUN_002f78a0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = param_1 + 0x638;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c + 0xe8c;
    FUN_0014e188(temp_v1,0x14,0xbb9,temp_v2,0xc9);
    uiSpriteSetKeyframe(temp_v1,10,0);
    uiSpriteSetImageKeyframe(temp_v1,0x13,0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xd);
  FUN_0014e188(param_1 + 0x15a8,0x14,0xbd8,temp_v2,0xc9);
  uiSpriteSetImageKeyframe(param_1 + 0x15a8,6,0);
  FUN_0014e188(param_1 + 0x197c,0x14,0xbd8,temp_v2,0xc9);
  uiSpriteSelectAnim(param_1 + 0x197c,8);
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_0014e188(param_1 + 0x1634,0x14,0xbd8,temp_v2,0xc9);
  uiSpriteSetImageKeyframe(param_1 + 0x1634,0x16,0);
  return;
}

} /* extern "C" */
