/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7cd4` (_code @ 0x2f7cd4, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(...);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int fillTwoWordsWithByte(int, unsigned int);

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: fillTwoWordsWithByte. */


void FUN_002f7cd4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_1 + 0x24ac;
  FUN_00163aa4(param_1 + 0x3fc);
  FUN_00163aa4();
  temp_v1 = *(int *)(param_1 + 0x2568);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return;
      }
    }
    else {
      puVar3 = (unsigned short *)(temp_v3 + *(int *)(param_1 + 0x24f4) * 8);
      temp_v0 = *puVar3;
      temp_v2 = *(unsigned int *)(puVar3 + 2);
      *puVar3 = *(unsigned short *)(temp_v3 + *(int *)(param_1 + 0x24f8) * 8);
      *(unsigned int *)(temp_v3 + *(int *)(param_1 + 0x24f4) * 8 + 4) =
           *(unsigned int *)(temp_v3 + *(int *)(param_1 + 0x24f8) * 8 + 4);
      *(unsigned short *)(temp_v3 + *(int *)(param_1 + 0x24f8) * 8) = temp_v0;
      *(unsigned int *)(temp_v3 + *(int *)(param_1 + 0x24f8) * 8 + 4) = temp_v2 & 0xffff;
      *(unsigned char *)(param_1 + 0x24f0) = 0;
      uiSpriteSetKeyframe(param_1 + 0x3fc,0xd,0);
      uiSpriteSetImageKeyframe(param_1 + 0x3fc,10,0);
      uiSpriteSetKeyframe(param_1 + 0x488,0xc,0);
      uiSpriteSetImageKeyframe(param_1 + 0x488,10,0);
      *(int *)(param_1 + 0x2568) = *(int *)(param_1 + 0x2568) + 1;
    }
    if (*(char *)(param_1 + 0x486) != '\0') {
      *(unsigned char *)(param_1 + 0x2578) = 1;
      fillTwoWordsWithByte(param_1 + 0x24f4,0xffffffff);
      *(unsigned int *)(param_1 + 0x2564) = 1;
      *(unsigned int *)(param_1 + 0x2568) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x486) != '\0') {
    *(int *)(param_1 + 0x2568) = *(int *)(param_1 + 0x2568) + 1;
  }
  return;
}

} /* extern "C" */
