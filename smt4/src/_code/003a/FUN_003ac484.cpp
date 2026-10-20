/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac484` (_code @ 0x3ac484, 0x260 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00293f10(int, int);
int FUN_002942c4(int, int);
int FUN_002958f8(int, int);
int uiSpriteSetImageKeyframe(...);

/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_002958f8. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int FUN_002bf818(int);


unsigned int FUN_003ac484(int param_1)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v4 + 0x1c) = *(unsigned char *)(temp_v4 + 0x470);
  switch(*(unsigned char *)(temp_v4 + 0x470)) {
  case 0:
    *(unsigned char *)(temp_v4 + 0x470) = 2;
    break;
  case 1:
    if (*(char *)(temp_v4 + 0x1d) == '\x04') {
      *(unsigned char *)(temp_v4 + 0x470) = 4;
    }
    break;
  case 2:
    temp_v3 = 0;
    do {
      temp_v2 = asdTMTexTableNodeIsLoaded(0x22,temp_v3);
      if (temp_v2 == 0) goto LAB_003ac5a4;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 2);
    temp_v3 = (int)*(short *)(temp_v4 + 8);
    if ((-1 < temp_v3) && (FUN_00293f10(temp_v3,1), temp_v3 != 0)) {
      *(unsigned char *)(temp_v4 + 0x470) = 1;
    }
    break;
  case 3:
    if (*(char *)(temp_v4 + 0x1d) == '\x05') {
      temp_v1 = 5;
      *(unsigned char *)(temp_v4 + 0x470) = temp_v1;
    }
    break;
  case 4:
    if (*(short *)(temp_v4 + 0x270) < 8) {
      *(short *)(temp_v4 + 0x270) = *(short *)(temp_v4 + 0x270) + 1;
    }
    if (*(short *)(temp_v4 + 0x272) < 8) {
      *(short *)(temp_v4 + 0x272) = *(short *)(temp_v4 + 0x272) + 1;
    }
    temp_v3 = FUN_002bf818(temp_v4 + 0x40);
    if (temp_v3 != 0) {
      *(unsigned char *)(temp_v4 + 0x470) = 3;
      *(unsigned char *)(temp_v4 + 0x1e) = 3;
      *(unsigned short *)(temp_v4 + 0x270) = 8;
      *(unsigned short *)(temp_v4 + 0x272) = 8;
    }
    break;
  case 5:
    temp_v3 = FUN_002bf818(temp_v4 + 0x158);
    if (temp_v3 != 0) {
      temp_v1 = 6;
      *(unsigned char *)(temp_v4 + 0x470) = temp_v1;
    }
  }
LAB_003ac5a4:
  switch(*(unsigned char *)(temp_v4 + 0x1e)) {
  case 1:
    temp_v3 = (int)*(short *)(temp_v4 + 0x18);
    if (temp_v3 < 0) {
      return 0;
    }
    FUN_00293f10(temp_v3,1);
    if (temp_v3 == 0) {
      return 0;
    }
    if (*(int *)(temp_v4 + 0x14) == *(int *)(temp_v4 + 0xc)) {
      *(int *)(temp_v4 + 4) = *(int *)(temp_v4 + 0x14);
      *(unsigned int *)(temp_v4 + 8) = *(unsigned int *)(temp_v4 + 0x18);
      *(unsigned char *)(temp_v4 + 0x1e) = 2;
      return 0;
    }
    if (-1 < *(short *)(temp_v4 + 0x18)) {
      FUN_002958f8((int)*(short *)(temp_v4 + 0x18),1);
    }
    *(unsigned int *)(temp_v4 + 0x14) = *(unsigned int *)(temp_v4 + 0xc);
    *(unsigned int *)(temp_v4 + 0x18) = *(unsigned int *)(temp_v4 + 0x10);
    temp_v0 = *(short *)(temp_v4 + 0x18);
    if (-1 < temp_v0) {
      FUN_002942c4((int)temp_v0,1);
    }
    *(unsigned char *)(temp_v4 + 0x1f) = 0;
    break;
  case 2:
    temp_v3 = FUN_002bf818(temp_v4 + 0xcc);
    if (temp_v3 != 0) {
      *(unsigned char *)(temp_v4 + 0x1e) = 3;
    }
    break;
  case 3:
    if (*(char *)(temp_v4 + 0x1f) != '\x04') {
      return 0;
    }
    *(unsigned char *)(temp_v4 + 0x1e) = 4;
    uiSpriteSetImageKeyframe(temp_v4 + 0xcc,0);
    uiSpriteSetImageKeyframe(temp_v4 + 0x1e4,1,0);
    *(unsigned int *)(temp_v4 + 0x14) = *(unsigned int *)(temp_v4 + 0xc);
    *(unsigned int *)(temp_v4 + 0x18) = *(unsigned int *)(temp_v4 + 0x10);
    temp_v0 = *(short *)(temp_v4 + 0x18);
    if (-1 < temp_v0) {
      FUN_002942c4((int)temp_v0,1);
    }
    *(unsigned char *)(temp_v4 + 0x1f) = 0;
    break;
  case 4:
    temp_v3 = FUN_002bf818(temp_v4 + 0x1e4);
    if (temp_v3 != 0) {
      if ((*(int *)(temp_v4 + 4) != *(int *)(temp_v4 + 0x14)) && (-1 < *(short *)(temp_v4 + 8))) {
        FUN_002958f8((int)*(short *)(temp_v4 + 8),1);
      }
      *(unsigned int *)(temp_v4 + 4) = 0;
      *(unsigned char *)(temp_v4 + 0x1e) = 1;
    }
  }
  return 0;
}

} /* extern "C" */
