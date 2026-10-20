/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156478` (_code @ 0x156478, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_00167458(int, int);
int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_001654d8(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


unsigned int FUN_00156478(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int unaff_r5;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = DAT_0057f574;
  switch(*(unsigned int *)(DAT_0057f574 + 8)) {
  case 1:
    if (*(int *)(DAT_0057f574 + 0x20) == 2) {
      FUN_00163aa4(DAT_0057f574 + 0xe0);
    }
    temp_v1 = FUN_00163aa4(temp_v0 + 0x54);
    if (temp_v1 != 0) {
      if (*(char *)(temp_v0 + 0x33) != '\0') {
        *(unsigned int *)(temp_v0 + 8) = 4;
      }
      else {
        *(unsigned int *)(temp_v0 + 8) = 2;
        FUN_00184758(temp_v0 + 0x16c,2,0);
      }
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    break;
  case 2:
    FUN_00167458(DAT_0057f574 + 0x16c,0);
    temp_v1 = FUN_001654d8(temp_v0 + 0x16c);
    *(int *)(temp_v0 + 0x18) = temp_v1;
    if (temp_v1 < 1) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 8) = 3;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x14) + 0x2a;
    break;
  case 3:
    if ((*(int *)(DAT_0057f574 + 0xc) >= 0x1f) && (*(char *)(DAT_0057f574 + 0x32) != '\0')) {
      temp_v1 = *(int *)(DAT_0057f574 + 0x14);
      temp_v2 = *(int *)(DAT_0057f574 + 0x18) - 1;
      *(int *)(DAT_0057f574 + 0x18) = temp_v2;
      if (-temp_v2 != temp_v1 && temp_v2 <= -temp_v1) {
        *(int *)(temp_v0 + 0x18) = temp_v1 + *(int *)(temp_v0 + 0x1c) + 0x2a;
      }
      temp_v1 = *(int *)(temp_v0 + 0x1c) - 1;
      *(int *)(temp_v0 + 0x1c) = temp_v1;
      if (temp_v1 < -*(int *)(temp_v0 + 0x14)) {
        *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x14) + *(int *)(temp_v0 + 0x18) + 0x2a;
      }
    }
    break;
  case 4:
    temp_v1 = *(int *)(DAT_0057f574 + 0x10);
    temp_v3 = -1 < temp_v1;
    temp_v4 = temp_v1 == 0;
    if (temp_v3) {
      param_2 = *(int *)(DAT_0057f574 + 0xc);
      temp_v4 = param_2 == temp_v1;
    }
    if (!temp_v4 && (temp_v3 && temp_v1 <= param_2)) {
      unaff_r5 = DAT_0057f574;
    }
    if (!temp_v4 && (temp_v3 && temp_v1 <= param_2)) {
      *(unsigned int *)(unaff_r5 + 8) = 5;
      *(unsigned int *)(unaff_r5 + 0x10) = 0x1e;
      FUN_00184758(unaff_r5 + 0x54,1,0);
      FUN_00184c00(unaff_r5 + 0x54,1,0);
      if (*(int *)(unaff_r5 + 0x20) == 2) {
        FUN_00184758(unaff_r5 + 0xe0,4,0);
      }
    }
    break;
  case 5:
    if (*(int *)(DAT_0057f574 + 0x20) == 2) {
      FUN_00163aa4(DAT_0057f574 + 0xe0);
    }
    temp_v1 = FUN_00163aa4(temp_v0 + 0x54);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x33) = 0;
      *(unsigned int *)(temp_v0 + 8) = 0;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x284) = 0;
    }
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}

} /* extern "C" */
