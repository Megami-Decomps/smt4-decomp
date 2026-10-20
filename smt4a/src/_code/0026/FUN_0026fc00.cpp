/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fc00` (_code @ 0x26fc00, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int, unsigned int);
int uiSpriteSetImageKeyframe(int, int, unsigned int);

extern int g_camp; /* 0x57f108 */

/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */


void FUN_0026fc00(int param_1,int param_2,short param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short temp_v2;
  int temp_v3;
  
  temp_v0 = g_camp;
  temp_v2 = (short)param_2;
  if (param_2 == 1) {
    temp_v2 = 9;
    param_3 = 0x13;
  }
  else {
    if (param_2 == 2) {
      temp_v2 = 10;
    }
    else if (param_2 == 3) {
      temp_v2 = 0xb;
    }
    else if (param_2 == 4) {
      temp_v2 = 0xc;
    }
    if (param_2 != 2) {
      if (param_2 == 3 || param_2 == 4) {
        param_3 = 0x14;
      }
    }
    else {
      param_3 = 0x13;
    }
  }
  temp_v1 = g_camp + 0x658;
  if (param_1 != 2) {
    if (param_1 == 1) {
      uiSpriteSetKeyframe(temp_v1,(int)temp_v2,param_4);
      temp_v3 = temp_v1;
      uiSpriteSetImageKeyframe(temp_v3,(int)param_3,param_4);
    }
  }
  else {
    uiSpriteSetKeyframe(temp_v1,(int)temp_v2,param_4);
    temp_v3 = temp_v0 + 0x888;
    uiSpriteSetKeyframe(temp_v3,(int)temp_v2,param_4);
    uiSpriteSetImageKeyframe(temp_v1,(int)param_3,param_4);
    uiSpriteSetImageKeyframe(temp_v3,(int)param_3,param_4);
  }
  temp_v1 = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 0x8c + 0x914;
    uiSpriteSetKeyframe(temp_v3,(int)temp_v2,param_4);
    uiSpriteSetImageKeyframe(temp_v3,(int)param_3,param_4);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  return;
}

} /* extern "C" */
