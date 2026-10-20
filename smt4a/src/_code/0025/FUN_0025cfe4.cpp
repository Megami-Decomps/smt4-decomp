/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cfe4` (_code @ 0x25cfe4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001527d8(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int FUN_001689e8(...);
int FUN_001834a4(int, int);
int FUN_001835b4(...);
int FUN_0025cc78(...);
int VectorSignedToFloat(...);

extern int g_renderCtx; /* 0x59dbb4 */
extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001689e8. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0025cc78. */


void FUN_0025cfe4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  unsigned long long temp_v11;
  
  if (param_1 != 0) {
    efctSetSpeed();
    temp_v8 = *(int *)(param_1 + 0x40);
    temp_v7 = (unsigned int)(0 < *(int *)(param_1 + 0x3c));
    temp_v9 = 0;
    temp_v10 = 4;
    piVar1 = (int *)(param_1 + 0x3c);
    do {
      if (0 < temp_v8) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v8 = piVar1[3];
      if (0 < piVar1[2]) {
        temp_v9 = temp_v9 + 1;
      }
      temp_v10 = temp_v10 - 1;
      piVar1 = piVar1 + 2;
    } while (temp_v10 != 0);
    temp_v9 = temp_v7 + temp_v9;
    temp_v8 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      temp_v9 = temp_v9 + 1;
    }
    if (temp_v9 < 7) {
      temp_v9 = FUN_001834a4(0x2e,0x124);
      temp_v8 = FUN_001834a4(0x2e,0x14c);
      temp_v8 = (int)*(short *)(temp_v8 + 10) - (int)*(short *)(temp_v9 + 10);
    }
    else if (temp_v9 < 9) {
      temp_v9 = FUN_001834a4(0x2e,0x124);
      temp_v8 = FUN_001834a4(0x2e,0x14d);
      temp_v8 = (int)*(short *)(temp_v8 + 10) - (int)*(short *)(temp_v9 + 10);
    }
    FUN_00164b5c(2,0x2e,0x24,*(unsigned int *)(param_2 + 4),*(int *)(param_2 + 8) + temp_v8,0x65);
    temp_v11 = 0x3f80000000000000;
    temp_v9 = 0;
    do {
      temp_v10 = param_1 + temp_v9 * 4;
      if (0 < *(int *)(temp_v10 + 0x3c)) {
        temp_v0 = FUN_001834a4(0x2e,temp_v9 + 0x138);
        temp_v1 = FUN_001834a4(0x2e,temp_v9 + 0x142);
        temp_v2 = FUN_001834a4(0x2e,0x134);
        temp_v3 = FUN_001834a4(0x2e,0x133);
        temp_v4 = FUN_001834a4(0x2e,0x137);
        temp_v5 = FUN_001834a4(0x2e,0x135);
        temp_v6 = FUN_001834a4(0x2e,0x136);
        FUN_001689e8((int)*(short *)(param_1 + temp_v9 * 2 + 0x28),
                     *(int *)(param_2 + 4) + (int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v3 + 8)
                     ,*(short *)(temp_v3 + 10) + temp_v8 +
                      *(int *)(param_2 + 8) + (int)*(short *)(temp_v0 + 10),0x65,0);
        if (*(char *)(param_1 + temp_v9 + 100) != '\0') {
          if ((*(int *)(g_renderCtx + 0x52c) == 0) &&
             (temp_v3 = *(int *)(temp_v10 + 0x70) + 1, *(int *)(temp_v10 + 0x70) = temp_v3, temp_v3 >= 0x21)) {
            *(unsigned int *)(temp_v10 + 0x70) = 0;
          }
          temp_v3 = *(int *)(temp_v10 + 0x70) % 0x20;
          if (temp_v3 < 0x11) {
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v3 = temp_v3 - 0x10;
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          efctSetSpeed(temp_v3);
          FUN_00164b5c(2,0x2e,0xd,*(int *)(param_2 + 4) + (int)*(short *)(temp_v1 + 8),
                       (int)*(short *)(temp_v1 + 10) + *(int *)(param_2 + 8) + temp_v8,0x65);
          efctSetSpeed();
        }
        FUN_001527d8(*(unsigned int *)(param_1 + temp_v9 * 4),0xffffffff);
        FUN_0025cc78(*(unsigned int *)(param_1 + temp_v9 * 4),
                     *(int *)(param_2 + 4) + (int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8)
                     ,*(short *)(temp_v2 + 10) + temp_v8 +
                      *(int *)(param_2 + 8) + (int)*(short *)(temp_v0 + 10),0x65);
        temp_v10 = *(int *)(temp_v10 + 0x3c);
        FUN_001835b4(2,0x2e,0x131,*(int *)(param_2 + 4) + (int)*(short *)(temp_v0 + 8),
                     *(int *)(param_2 + 8) + (int)*(short *)(temp_v0 + 10) + temp_v8,0x65);
        FUN_001835b4(2,7,0xd,(int)*(short *)(temp_v0 + 8) + *(int *)(param_2 + 4) +
                             (int)*(short *)(temp_v4 + 8),
                     *(short *)(temp_v4 + 10) + temp_v8 +
                     (int)*(short *)(temp_v0 + 10) + *(int *)(param_2 + 8),0x65);
        FUN_001835b4(2,7,temp_v10 / 10,
                     (int)*(short *)(temp_v0 + 8) + *(int *)(param_2 + 4) + (int)*(short *)(temp_v6 + 8)
                     ,*(short *)(temp_v6 + 10) + temp_v8 +
                      (int)*(short *)(temp_v0 + 10) + *(int *)(param_2 + 8),0x65);
        FUN_001835b4(2,7,temp_v10 % 10,
                     (int)*(short *)(temp_v5 + 8) + *(int *)(param_2 + 4) + (int)*(short *)(temp_v0 + 8)
                     ,(int)*(short *)(temp_v0 + 10) + *(int *)(param_2 + 8) +
                      *(short *)(temp_v5 + 10) + temp_v8,0x65);
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 10);
    DAT_0063077c = (float)((unsigned long long)temp_v11 >> 0x20);
    if ((int)DAT_0063077c >= 0x3f800001) {
      DAT_0063077c = 1.0f;
    }
    if (DAT_0063077c < 0.0f) {
      DAT_0063077c = 0.0f;
    }
    DAT_00630730 = DAT_0063077c;
    DAT_00630740 = DAT_0063077c;
    DAT_00630750 = DAT_0063077c;
    DAT_00630760 = DAT_0063077c;
    DAT_00630775 = 1;
    return;
  }
  return;
}

} /* extern "C" */
