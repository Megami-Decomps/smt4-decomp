/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028fce8` (_code @ 0x28fce8, 0x578 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(...);
int FUN_00184b80(...);
int FUN_003d2150(int);

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern int FUN_00291e14(void);
/* Supplied declaration required: FUN_003d2150. */


void FUN_0028fce8(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int unaff_r6;
  int *piVar4;
  int temp_v3;
  int unaff_r9;
  int temp_v4;
  unsigned int unaff_r11;
  
  *(unsigned int *)(param_1 + 0x243c) = 3;
  piVar4 = (int *)(param_1 + 0x2440);
  *(unsigned int *)(param_1 + 0x2438) = 0;
  *(short *)(param_1 + 0x244c) = (short)param_2;
  *(short *)(param_1 + 0x244e) = (short)param_3;
  temp_v0 = *(short *)(param_1 + 0x2448);
  temp_v3 = (int)temp_v0;
  if (temp_v3 + param_2 < 0) {
    *(short *)(param_1 + 0x244c) = -temp_v0;
  }
  if (*(short *)(param_1 + 0x244c) + temp_v3 >= 11) {
    *(short *)(param_1 + 0x244c) = 10 - temp_v0;
  }
  if (0 < param_3) {
    if (0 < *(short *)(param_1 + 0x244c)) {
      temp_v3 = temp_v3 + *(short *)(param_1 + 0x244c);
    }
    FUN_003d2150(0x1000214);
    unaff_r6 = 0;
    if (0 < *(short *)(param_1 + 0x244e)) {
      unaff_r11 = 0xfa6;
      do {
        temp_v4 = ((temp_v3 - *(short *)(param_1 + 0x244a)) - unaff_r6) + 0x13;
        if (*piVar4 != 0) {
          FUN_00184b80(param_1 + temp_v4 * 0x8c + 0x20,8);
        }
        else {
          temp_v1 = FUN_00291e14();
          if (temp_v1 == 0) {
            temp_v2 = 7;
          }
          else {
            temp_v2 = 0xa5;
          }
          FUN_00184b80(param_1 + temp_v4 * 0x8c + 0x20,temp_v2);
        }
        unaff_r9 = param_1 + (((temp_v3 - *(short *)(param_1 + 0x244a)) - unaff_r6) + 0x31) * 0x8c;
        FUN_001846d0(unaff_r9 + 0x20,10);
        if (*piVar4 != 0) {
          FUN_00184b80(unaff_r9 + 0x20,0xfa7);
        }
        else {
          temp_v4 = FUN_00291e14();
          temp_v2 = 0xfa8;
          if (temp_v4 == 0) {
            temp_v2 = unaff_r11;
          }
          FUN_00184b80(unaff_r9 + 0x20,temp_v2);
        }
        unaff_r6 = unaff_r6 + 1;
      } while (unaff_r6 < *(short *)(param_1 + 0x244e));
    }
  }
  temp_v0 = *(short *)(param_1 + 0x244c);
  temp_v4 = param_1 + 0x217c;
  if (0 < temp_v0) {
    unaff_r11 = 0xfa1;
  }
  if (temp_v0 != 0) {
    unaff_r6 = 0;
  }
  if (0 < temp_v0) {
    unaff_r9 = 0xc;
  }
  if (temp_v0 < 0) {
    temp_v3 = 0xd;
  }
  if (temp_v0 >= 1) {
    do {
      FUN_001846d0(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x20,2);
      FUN_001846d0(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x598,2);
      temp_v3 = *(short *)(param_1 + 0x2448) + unaff_r6;
      if (temp_v3 < 4) {
        if (temp_v3 == 0) {
          FUN_001846d0(temp_v4,unaff_r9);
        }
        FUN_001846d0(param_1 + temp_v3 * 0x8c + 0x2208,unaff_r9);
      }
      if (*piVar4 != 0) {
        FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x20,1);
        FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0xb10,8);
        FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1088,3);
        FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1600,unaff_r11);
        temp_v3 = *(short *)(param_1 + 0x2448) + unaff_r6;
        if (temp_v3 < 4) {
          if (temp_v3 == 0) {
            FUN_00184b80(temp_v4,0xbd);
          }
          FUN_00184b80(param_1 + temp_v3 * 0x8c + 0x2208,0xbc - temp_v3);
        }
      }
      else {
        temp_v3 = FUN_00291e14();
        temp_v1 = param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x20;
        if (temp_v3 != 0) {
          FUN_00184b80(temp_v1,0xa3);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0xb10,0xa5);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1088,0xa4);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1600,0xfb0);
          temp_v3 = *(short *)(param_1 + 0x2448) + unaff_r6;
          if (temp_v3 < 4) {
            if (temp_v3 == 0) {
              FUN_00184b80(temp_v4,0xc2);
            }
            FUN_00184b80(param_1 + temp_v3 * 0x8c + 0x2208,0xc1 - temp_v3);
          }
        }
        else {
          FUN_00184b80(temp_v1,0);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0xb10,7);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1088,2);
          FUN_00184b80(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x1600,4000);
          temp_v3 = *(short *)(param_1 + 0x2448) + unaff_r6;
          if (temp_v3 < 4) {
            if (temp_v3 == 0) {
              FUN_00184b80(temp_v4,0xb8);
            }
            FUN_00184b80(param_1 + temp_v3 * 0x8c + 0x2208,0xb7 - temp_v3);
          }
        }
      }
      unaff_r6 = unaff_r6 + 1;
    } while (unaff_r6 < *(short *)(param_1 + 0x244c));
  }
  else if (temp_v0 < 0) {
    do {
      FUN_001846d0((param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c) - 0x6c,8);
      FUN_001846d0(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0x50c,8);
      FUN_001846d0(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0xa84,9);
      FUN_001846d0(param_1 + (*(short *)(param_1 + 0x2448) + unaff_r6) * 0x8c + 0xffc,8);
      temp_v1 = (int)*(short *)(param_1 + 0x2448) + (unaff_r6 - 1);
      if (temp_v1 < 4) {
        if (temp_v1 == 0) {
          FUN_001846d0(temp_v4,temp_v3);
        }
        FUN_001846d0(param_1 + temp_v1 * 0x8c + 0x2208,temp_v3);
      }
      unaff_r6 = unaff_r6 - 1;
    } while (*(short *)(param_1 + 0x244c) < unaff_r6);
    return;
  }
  return;
}

} /* extern "C" */
