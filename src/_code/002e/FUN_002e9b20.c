/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9b20` (_code @ 0x2e9b20, 0x5d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_00248238. */
/* Supplied declaration required: FUN_00248268. */
/* Supplied declaration required: FUN_00248284. */
/* Supplied declaration required: FUN_0024f248. */
extern int FUN_00273a78(void);
/* Supplied declaration required: FUN_00273a98. */
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_002805d4. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280bf8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_002920e4. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c8b2c. */


void FUN_002e9b20(void)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float fStack_3c;
  unsigned int uStack_38;
  float temp_v10 [8];
  
  if (*(int *)(DAT_00447e88 + 4) < 10) {
    FUN_00280bf8();
    temp_v0 = DAT_00447e88;
    *(float *)(DAT_00447e88 + 0x1c) =
         *(float *)(DAT_00447e88 + 0x1c) +
         (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * 0.33333334f;
    *(float *)(temp_v0 + 0x20) =
         *(float *)(temp_v0 + 0x20) +
         (*(float *)(temp_v0 + 0x2c) - *(float *)(temp_v0 + 0x20)) * 0.16666667f;
    *(float *)(temp_v0 + 0x24) =
         *(float *)(temp_v0 + 0x24) +
         (*(float *)(temp_v0 + 0x30) - *(float *)(temp_v0 + 0x24)) * 0.33333334f;
  }
  temp_v0 = DAT_00447e88;
  temp_v8 = 0x40000000;
  temp_v1 = *(int *)(DAT_00447e88 + 4);
  temp_v6 = 0.0f;
  temp_v5 = 180.0f;
  if (temp_v1 != 0xb) {
    if (temp_v1 < 0xb) {
      temp_v4 = 0.017453292f;
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 != 2) {
            if (temp_v1 == 10) {
              temp_v1 = *(int *)(DAT_00447e88 + 8) + 1;
              *(int *)(DAT_00447e88 + 8) = temp_v1;
              if (temp_v1 == 1) {
                *(unsigned int *)(temp_v0 + 0x54) = 0x10;
                *(unsigned int *)(temp_v0 + 0x58) = 0;
                FUN_002920e4();
                FUN_0027ff10(0xffffffff);
                FUN_0028277c();
                FUN_00282600();
                FUN_002920e4(0x1000240);
              }
              if (*(int *)(DAT_00447e88 + 8) == 2) {
                FUN_00248268();
                temp_v0 = DAT_00447e88;
                DAT_0049fb46 = 0;
                puVar5 = (unsigned int *)(DAT_00447e88 + 0x1c);
                *(unsigned int *)(DAT_00447e88 + 0x4c) = *(unsigned int *)(DAT_00447e88 + 0x50);
                temp_v8 = *(unsigned int *)(temp_v0 + 0x2c);
                temp_v3 = *(unsigned int *)(temp_v0 + 0x30);
                *puVar5 = *(unsigned int *)(temp_v0 + 0x28);
                *(unsigned int *)(temp_v0 + 0x20) = temp_v8;
                *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
          else {
            *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
            FUN_0024f248(1,DAT_0049f99c);
            temp_v1 = FUN_0027f10c();
            temp_v0 = DAT_00447e88;
            if (temp_v1 != 0) {
              *(unsigned int *)(DAT_00447e88 + 4) = 10;
              *(unsigned int *)(temp_v0 + 8) = 0;
              if (DAT_0049f968 == 0) {
                temp_v8 = 3;
              }
              else {
                temp_v8 = 4;
              }
              *(unsigned int *)(DAT_004474f4 + 0xc) = temp_v8;
              temp_v9 = *(unsigned int *)(temp_v0 + 0x28);
              fStack_3c = *(float *)(temp_v0 + 0x2c);
              uStack_38 = *(unsigned int *)(temp_v0 + 0x30);
              FUN_002c8b2c(2,10,0x66,&temp_v9,temp_v10,0xffffffff);
              temp_v0 = DAT_00447e88;
              temp_v10[0] = temp_v10[0] + temp_v5;
              if (temp_v10[0] < temp_v6) {
                temp_v10[0] = temp_v10[0] + 360.0f;
              }
              if ((int)temp_v10[0] >= 0x43b40001) {
                temp_v10[0] = temp_v10[0] - 360.0f;
              }
              *(float *)(DAT_00447e88 + 0x50) = temp_v10[0];
              *(unsigned int *)(temp_v0 + 0x28) = temp_v9;
              *(float *)(temp_v0 + 0x2c) = fStack_3c;
              *(unsigned int *)(temp_v0 + 0x30) = uStack_38;
              temp_v6 = (temp_v10[0] + temp_v5) * temp_v4;
              *(float *)(temp_v0 + 0x2c) = fStack_3c - 142.0f;
              FUN_0028277c();
              temp_v0 = DAT_00447e88;
              temp_v7 = 35.0f;
              *(float *)(DAT_00447e88 + 0x28) = *(float *)(DAT_00447e88 + 0x28) + temp_v6 * 35.0f;
              temp_v4 = (*(float *)(temp_v0 + 0x50) + temp_v5) * temp_v4;
              FUN_00282600();
              *(float *)(DAT_00447e88 + 0x30) = *(float *)(DAT_00447e88 + 0x30) + temp_v4 * temp_v7;
            }
            else {
              temp_v0 = FUN_002bffbc(5);
              if ((temp_v0 != 0) || (temp_v0 = FUN_00276550(), temp_v0 != 0)) {
                temp_v0 = DAT_004474f4;
                *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_0027fe84(0);
                temp_v0 = DAT_00447e88;
                *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
                *(unsigned int *)(temp_v0 + 0x58) = 0x40a00000;
                FUN_0024f248(0,DAT_0049f99c);
                FUN_00248268();
                temp_v0 = DAT_00447e88;
                *(unsigned int *)(DAT_00447e88 + 4) = 0x5a;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
          FUN_0024f248(1,DAT_0049f99c);
          temp_v0 = DAT_00447e88;
          if (*(int *)(DAT_00447e88 + 8) >= 3) {
            temp_v1 = *(int *)(DAT_00447e88 + 4);
            *(unsigned int *)(DAT_00447e88 + 0x54) = 0x1d;
            *(unsigned int *)(temp_v0 + 0x58) = temp_v8;
            *(int *)(temp_v0 + 4) = temp_v1 + 1;
            *(unsigned int *)(temp_v0 + 8) = 0;
          }
        }
      }
      else {
        *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
        *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v0 + 0x6c) = 0;
        temp_v3 = DAT_0049f9a8;
        temp_v8 = DAT_0049f9a4;
        *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
        *(unsigned int *)(temp_v0 + 0x2c) = temp_v8;
        *(unsigned int *)(temp_v0 + 0x30) = temp_v3;
        *(unsigned int *)(temp_v0 + 0x50) = DAT_0049f9ac;
        FUN_0027fe84(0xc);
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0xfffffffd;
        FUN_002b8b78(0xdb);
        FUN_0024f248(1,DAT_0049f99c);
        FUN_0028277c();
        FUN_00282600();
        FUN_00248284();
        temp_v0 = DAT_00447e88;
        *(int *)(DAT_00447e88 + 4) = *(int *)(DAT_00447e88 + 4) + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
    }
    else {
      if (temp_v1 == 0xc) {
        temp_v8 = 0xe;
      }
      else {
        if (temp_v1 == 0x5a) {
          *(unsigned int *)(DAT_00447e88 + 4) = 0x5b;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        if (temp_v1 == 0x5b) {
          FUN_00248238(0x1000212);
          temp_v0 = DAT_00447e88;
          *(int *)(DAT_00447e88 + 4) = *(int *)(DAT_00447e88 + 4) + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        if ((temp_v1 != 0x5c) ||
           (temp_v0 = *(int *)(DAT_00447e88 + 8) + 1, *(int *)(DAT_00447e88 + 8) = temp_v0, temp_v0 < 4))
        {
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        temp_v8 = 1;
      }
      FUN_0027fd08(temp_v8);
    }
  }
  else {
    puVar5 = (unsigned int *)(DAT_00447e88 + 0x28);
    temp_v4 = *(float *)(DAT_00447e88 + 0x2c) - 2.0f;
    temp_v8 = *(unsigned int *)(DAT_00447e88 + 0x30);
    temp_v2 = *(int *)(DAT_00447e88 + 8) + 1;
    *(float *)(DAT_00447e88 + 0x2c) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x1c) = *puVar5;
    *(unsigned int *)(temp_v0 + 8) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v8;
    *(float *)(temp_v0 + 0x20) = temp_v4;
    if ((temp_v2 == 1) || ((temp_v2 == 0xb || temp_v2 == 0x1c) || temp_v2 == 0x29)) {
      FUN_002920e4((temp_v2 & 3) + 0x1000212,temp_v0,temp_v2 & 3,temp_v4);
      FUN_0027ff10(0xffffffff);
    }
    if (*(int *)(DAT_00447e88 + 8) == 0x1e) {
      FUN_00273a98();
    }
    if ((*(int *)(DAT_00447e88 + 8) >= 0x1f) && (temp_v0 = FUN_00273a78(), temp_v0 == 0)) {
      FUN_00248238();
      temp_v0 = DAT_004474f4;
      *(float *)(DAT_004474f4 + 0x18) = *(float *)(DAT_00447e88 + 0x50) + temp_v5;
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      FUN_0027fe84(0);
      temp_v0 = DAT_00447e88;
      *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
      *(float *)(temp_v0 + 0x58) = temp_v6;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  FUN_0028075c(DAT_00447e88 + 0x28);
  FUN_002805d4();
  return;
}
