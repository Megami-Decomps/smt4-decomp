/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a24a8` (_code @ 0x4a24a8, 0x588 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_005e1e88; /* 0x5e1e88 */

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
extern int FUN_002a482c(int);
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_00493518. */
/* Supplied declaration required: FUN_0049359c. */
/* Supplied declaration required: FUN_004935c8. */
/* Supplied declaration required: FUN_0049364c. */
/* Supplied declaration required: FUN_004a2a30. */
/* Supplied declaration required: FUN_004a3238. */
/* Supplied declaration required: FUN_004a77c0. */
/* Supplied declaration required: FUN_004a7950. */
extern int FUN_004cfe4c(int);
extern int FUN_004d0040(int);


void FUN_004a24a8(int param_1)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  float temp_v8;
  unsigned int *unaff_r11;
  float temp_v9 [2];
  float temp_v10 [5];
  
  FUN_0049359c(param_1 + 200,temp_v9);
  FUN_0049364c(param_1 + 200,temp_v10);
  if (((int)(temp_v9[0] + temp_v10[0]) < 0x43a00000) &&
     ((unsigned int)(temp_v9[0] + temp_v10[0]) < 0xc3a00000)) {
    temp_v8 = *(float *)(param_1 + 0x850);
    temp_v9[0] = temp_v8;
    FUN_004935c8(param_1 + 200,2,0);
    temp_v9[0] = temp_v8;
    FUN_00493518(param_1 + 200,0x4a4,0);
    temp_v9[0] = temp_v8;
    FUN_00493518(param_1 + 200,0x4a5,0);
    temp_v9[0] = temp_v8;
    FUN_00493518(param_1 + 200,0x4a6,0);
    temp_v9[0] = temp_v8;
    FUN_00493518(param_1 + 200,0x4a7,0);
    if (*(char *)(param_1 + 0x860) != '\0') {
      temp_v9[0] = temp_v8;
      FUN_00493518(param_1 + 200,0x4a3,0);
    }
    else {
      temp_v9[0] = temp_v8;
      FUN_00493518(param_1 + 200,0x4a2,0);
    }
    if (*(char *)(param_1 + 0x860) != '\x01') {
      if (*(char *)(param_1 + 0xa876) != '\0') {
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b3,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b4,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b5,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b6,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5bf,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5c0,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5c1,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5c2,0);
      }
      else {
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b7,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b8,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5b9,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5ba,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5bb,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5bc,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5bd,0);
        temp_v9[0] = temp_v8;
        FUN_00493518(param_1 + 200,0x5be,0);
      }
    }
    FUN_001677c0();
    FUN_004a7950(param_1,(int)*(char *)(param_1 + 0x94),temp_v8);
    FUN_001677c0();
    if (*(int *)(param_1 + 0x28) != 0) {
      temp_v1 = FUN_002a482c(param_1 + 0x20);
      temp_v2 = FUN_004d0040(param_1 + 0x20);
      temp_v7 = 1;
      temp_v6 = param_1 + 0x864;
      do {
        temp_v5 = 0;
        if (temp_v5 < temp_v2) {
          do {
            if ((*(int *)(param_1 + 0x14) != 2) ||
               (temp_v3 = FUN_0031d174(param_1 + 0x20), temp_v3 != temp_v5)) {
              temp_v9[0] = (float)(int)*(short *)(temp_v6 + (temp_v1 + temp_v5) * 0x20 + 4);
              FUN_004a3238(param_1,temp_v5,temp_v7,0);
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v2);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 5);
      if (0 < temp_v2) {
        unaff_r11 = &DAT_005e1e88;
      }
      temp_v7 = 0;
      if (temp_v7 < temp_v2) {
        do {
          if ((*(int *)(param_1 + 0x14) == 2) &&
             (temp_v5 = FUN_0031d174(param_1 + 0x20), temp_v5 == temp_v7)) {
            if (temp_v7 != 0) {
              if (unaff_r11[temp_v7 - 1] != unaff_r11[temp_v7]) {
                FUN_00184e64();
              }
            }
            else {
              FUN_00184e64(*unaff_r11);
            }
          }
          else {
            temp_v9[0] = (float)(int)*(short *)(temp_v6 + (temp_v1 + temp_v7) * 0x20 + 4);
            FUN_004a3238(param_1,temp_v7,5,0);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < temp_v2);
      }
      FUN_00183bb0();
      temp_v1 = *(int *)(param_1 + 0x14);
      if ((((temp_v1 == 2 || temp_v1 == 3) || (temp_v1 == 8 || temp_v1 == 4)) || (temp_v1 == 5 || temp_v1 == 6))
         || (temp_v1 == 10 || temp_v1 == 9)) {
        temp_v1 = FUN_004cfe4c(param_1 + 0x20);
        temp_v0 = *(short *)(temp_v6 + temp_v1 * 0x20 + 4);
        temp_v4 = FUN_0031d174(param_1 + 0x20);
        FUN_004a2a30(param_1,temp_v4,1,(int)temp_v0);
      }
      FUN_001677c0();
      FUN_004a77c0(param_1,temp_v8);
      FUN_001677c0();
      return;
    }
  }
  return;
}
