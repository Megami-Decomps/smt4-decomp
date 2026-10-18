/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fc00` (_code @ 0x26fc00, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_0026fc00(int param_1,int param_2,short param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f108;
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
  temp_v1 = DAT_0057f108 + 0x658;
  if (param_1 != 2) {
    if (param_1 == 1) {
      FUN_00184758(temp_v1,(int)temp_v2,param_4);
      temp_v3 = temp_v1;
      FUN_00184c00(temp_v3,(int)param_3,param_4);
    }
  }
  else {
    FUN_00184758(temp_v1,(int)temp_v2,param_4);
    temp_v3 = temp_v0 + 0x888;
    FUN_00184758(temp_v3,(int)temp_v2,param_4);
    FUN_00184c00(temp_v1,(int)param_3,param_4);
    FUN_00184c00(temp_v3,(int)param_3,param_4);
  }
  temp_v1 = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 0x8c + 0x914;
    FUN_00184758(temp_v3,(int)temp_v2,param_4);
    FUN_00184c00(temp_v3,(int)param_3,param_4);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  return;
}
