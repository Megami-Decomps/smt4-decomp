/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8ba0` (_code @ 0x2e8ba0, 0x3fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_001b4374. */
/* Supplied declaration required: FUN_0020d660. */
/* Supplied declaration required: FUN_0021df5c. */
/* Supplied declaration required: FUN_0024f248. */
extern int FUN_00273a78(void);
/* Supplied declaration required: FUN_00273a98. */
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_00276ba4. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_002805d4. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280bf8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002bffbc(unsigned int);


void FUN_002e8ba0(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
  FUN_00280bf8();
  temp_v1 = DAT_00447e88;
  *(float *)(DAT_00447e88 + 0x1c) =
       *(float *)(DAT_00447e88 + 0x1c) +
       (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * 0.33333334f;
  *(float *)(temp_v1 + 0x20) =
       *(float *)(temp_v1 + 0x20) + (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v1 + 0x24) =
       *(float *)(temp_v1 + 0x24) + (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f
  ;
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 0xc) {
    if (temp_v2 < 0xc) {
      temp_v4 = 0x40a00000;
      if (temp_v2 == 2) {
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        FUN_0024f248(1,DAT_0049f99c);
        temp_v2 = FUN_0027f10c();
        temp_v1 = DAT_00447e88;
        if (temp_v2 != 0) {
          *(unsigned int *)(DAT_00447e88 + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
        else {
          temp_v1 = FUN_002bffbc(5);
          if ((temp_v1 != 0) || (temp_v1 = FUN_00276550(), temp_v1 != 0)) {
            temp_v1 = DAT_004474f4;
            *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
            *(unsigned int *)(temp_v1 + 0xac) = 0;
            FUN_0027fe84(0);
            temp_v1 = DAT_00447e88;
            *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
            *(unsigned int *)(temp_v1 + 0x58) = temp_v4;
            FUN_0024f248(0,DAT_0049f99c);
            FUN_0021df5c();
            temp_v1 = DAT_00447e88;
            *(unsigned int *)(DAT_00447e88 + 4) = 0x5a;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
        }
        FUN_0028075c(DAT_00447e88 + 0x28);
        FUN_002805d4();
        return;
      }
      if (temp_v2 < 2) {
        if (temp_v2 != 0) {
          if (temp_v2 == 1) {
            *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
            FUN_0024f248(1,DAT_0049f99c);
            temp_v1 = DAT_00447e88;
            if (*(int *)(DAT_00447e88 + 8) >= 3) {
              temp_v2 = *(int *)(DAT_00447e88 + 4);
              *(unsigned int *)(DAT_00447e88 + 0x54) = 0x1d;
              *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
              *(int *)(temp_v1 + 4) = temp_v2 + 1;
              *(unsigned int *)(temp_v1 + 8) = 0;
            }
          }
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        *(unsigned int *)(temp_v1 + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v1 + 0x6c) = 0;
        temp_v0 = DAT_0049f9a8;
        temp_v4 = DAT_0049f9a4;
        temp_v5 = 0.017453292f;
        *(unsigned int *)(temp_v1 + 0x28) = DAT_0049f9a0;
        *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
        temp_v3 = DAT_0049f9bc * 0.017453292f;
        FUN_0028277c();
        temp_v6 = 40.0f;
        *(float *)(DAT_00447e88 + 0x28) = *(float *)(DAT_00447e88 + 0x28) + temp_v3 * 40.0f;
        temp_v5 = DAT_0049f9bc * temp_v5;
        FUN_00282600();
        temp_v1 = DAT_00447e88;
        *(float *)(DAT_00447e88 + 0x30) = *(float *)(DAT_00447e88 + 0x30) + temp_v5 * temp_v6;
        *(unsigned int *)(temp_v1 + 0x50) = DAT_0049f9ac;
        FUN_0027fe84(0xb);
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0xfffffffe;
        FUN_002b8b78(0xdb);
        FUN_0024f248(1,DAT_0049f99c);
        FUN_0028277c();
        FUN_00282600();
        FUN_001b4374();
        temp_v2 = *(int *)(DAT_00447e88 + 4);
        temp_v1 = DAT_00447e88;
      }
      else if (temp_v2 != 10) {
        if ((temp_v2 != 0xb) ||
           (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 != 0x14)) {
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_00273a98();
        temp_v2 = *(int *)(DAT_00447e88 + 4);
        temp_v1 = DAT_00447e88;
      }
      else {
        DAT_0049fb46 = 0;
        *(unsigned int *)(temp_v1 + 0x54) = 8;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        FUN_0027ff10(1);
        temp_v2 = *(int *)(DAT_00447e88 + 4);
        temp_v1 = DAT_00447e88;
      }
    }
    else {
      if (temp_v2 == 0xd) {
        temp_v2 = *(int *)(temp_v1 + 8) + 1;
        *(int *)(temp_v1 + 8) = temp_v2;
        if (temp_v2 != 0x14) {
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_0020d660();
        FUN_00276ba4();
        temp_v4 = 10;
        FUN_0027fd08(temp_v4);
        FUN_0028075c(DAT_00447e88 + 0x28);
        FUN_002805d4();
        return;
      }
      if (temp_v2 != 0x5a) {
        if (temp_v2 != 0x5b) {
          if ((temp_v2 != 0x5c) ||
             (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 < 4)) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          temp_v4 = 1;
          FUN_0027fd08(temp_v4);
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_0020d660();
        temp_v2 = *(int *)(DAT_00447e88 + 4);
        temp_v1 = DAT_00447e88;
      }
    }
  }
  else {
    temp_v1 = FUN_00273a78();
    if (temp_v1 != 0) {
      FUN_0028075c(DAT_00447e88 + 0x28);
      FUN_002805d4();
      return;
    }
    FUN_0021df5c();
    temp_v1 = DAT_004474f4;
    *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
    *(unsigned int *)(temp_v1 + 0xac) = 0;
    FUN_0027fe84(0);
    temp_v2 = *(int *)(DAT_00447e88 + 4);
    temp_v1 = DAT_00447e88;
  }
  *(int *)(temp_v1 + 4) = temp_v2 + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_0028075c(DAT_00447e88 + 0x28);
  FUN_002805d4();
  return;
}
