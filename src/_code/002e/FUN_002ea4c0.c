/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea4c0` (_code @ 0x2ea4c0, 0x734 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern unsigned int DAT_0049f990; /* 0x49f990 */
extern unsigned int DAT_0049f994; /* 0x49f994 */
extern unsigned int DAT_0049f998; /* 0x49f998 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern float DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_00248238. */
/* Supplied declaration required: FUN_00248268. */
/* Supplied declaration required: FUN_00248284. */
/* Supplied declaration required: FUN_0024f248. */
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_0027da20. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fd54. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_002805d4. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280bf8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287e4c. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002920e4. */
extern int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002bffbc(unsigned int);


void FUN_002ea4c0(void)

{
/* irregular: 19 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
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
  temp_v6 = 0x40000000;
  temp_v7 = 0;
  temp_v1 = *(int *)(DAT_00447e88 + 4);
  if (temp_v1 != 0x35) {
    if (0x35 >= temp_v1) {
      temp_v5 = 0.017453292f;
      if (temp_v1 != 0x32) {
        if (temp_v1 < 0x33) {
          if (temp_v1 != 0) {
            if (temp_v1 != 1) {
              if (temp_v1 == 2) {
                *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
                FUN_0024f248(1,DAT_0049f99c);
                temp_v0 = FUN_0027f10c();
                if (temp_v0 != 0) {
                  FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
                  temp_v0 = DAT_00447e88;
                  *(unsigned int *)(DAT_00447e88 + 0xa0) = DAT_0049f9a0;
                  *(float *)(temp_v0 + 0xa4) = DAT_0049f9a4 - 500.0f;
                  *(unsigned int *)(temp_v0 + 0xa8) = DAT_0049f9a8;
                  *(unsigned int *)(temp_v0 + 0xac) = *(unsigned int *)(temp_v0 + 0x50);
                  *(unsigned int *)(temp_v0 + 4) = 0x32;
                  *(unsigned int *)(temp_v0 + 8) = 0;
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
                *(unsigned int *)(temp_v0 + 0x58) = temp_v6;
                *(int *)(temp_v0 + 4) = temp_v1 + 1;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
          *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
          *(unsigned char *)(temp_v0 + 0x6c) = 0;
          temp_v3 = *(float *)(temp_v0 + 0x28);
          FUN_00287e4c();
          temp_v0 = DAT_00447e88;
          temp_v8 = 180.0f;
          *(float *)(DAT_00447e88 + 0x50) = temp_v3;
          temp_v6 = DAT_0049f9a8;
          temp_v4 = DAT_0049f9a4;
          *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
          *(float *)(temp_v0 + 0x2c) = temp_v4;
          *(unsigned int *)(temp_v0 + 0x30) = temp_v6;
          temp_v4 = (temp_v3 + 180.0f) * temp_v5;
          FUN_0028277c();
          temp_v0 = DAT_00447e88;
          temp_v3 = 110.0f;
          *(float *)(DAT_00447e88 + 0x28) = *(float *)(DAT_00447e88 + 0x28) + temp_v4 * 110.0f;
          temp_v5 = (*(float *)(temp_v0 + 0x50) + temp_v8) * temp_v5;
          FUN_00282600();
          *(float *)(DAT_00447e88 + 0x30) = *(float *)(DAT_00447e88 + 0x30) + temp_v5 * temp_v3;
          FUN_0027fe84(10);
          *(unsigned int *)(DAT_004474f4 + 0xac) = 0xffffffff;
          FUN_002b8b78(0xdb);
          FUN_0024f248(1,DAT_0049f99c);
          FUN_0028277c();
          FUN_00282600();
          FUN_00248284();
          temp_v1 = *(int *)(DAT_00447e88 + 4);
          temp_v0 = DAT_00447e88;
          *(int *)(temp_v0 + 4) = temp_v1 + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        if (temp_v1 != 0x33) {
          if (temp_v1 != 0x34) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          pfVar1 = (float *)(DAT_00447e88 + 0x20);
          temp_v2 = *(int *)(DAT_00447e88 + 0xbc);
          temp_v5 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
          *(float *)(DAT_00447e88 + 0x68) = temp_v5;
          *(float *)(temp_v0 + 0x20) = *pfVar1 + temp_v5;
          if (temp_v2 < 0x28) {
            *(int *)(temp_v0 + 0xbc) = temp_v2 + 1;
            *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
            *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
          }
          *(int *)(temp_v0 + 8) = *(int *)(temp_v0 + 8) + 1;
          if (temp_v5 <= 0.0f) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          *(int *)(temp_v0 + 4) = temp_v1 + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        temp_v0 = *(int *)(DAT_00447e88 + 8) + 1;
        *(int *)(DAT_00447e88 + 8) = temp_v0;
        if (temp_v0 < 0x15) {
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_0027fd54();
        switch(DAT_0049f94a) {
        case 0:
          temp_v6 = 0x100021b;
          FUN_002920e4(temp_v6);
          break;
        case 1:
          temp_v6 = 0x100021d;
          FUN_002920e4(temp_v6);
          break;
        case 2:
          temp_v6 = 0x100021f;
          FUN_002920e4(temp_v6);
          break;
        case 3:
          temp_v6 = 0x1000221;
          FUN_002920e4(temp_v6);
          break;
        case 4:
          FUN_002920e4(0x1000223);
        default:
        }
LAB_002ea974:
        FUN_0027ff10(0xffffffff);
        FUN_0028277c();
        FUN_00282600();
        temp_v0 = FUN_00297004(0,1);
        FUN_002920e4(temp_v0 + 0x100023c);
        temp_v0 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0x68) = 0x41000000;
        *(float *)(temp_v0 + 0x20) = *(float *)(temp_v0 + 0x20) + 8.0f;
      }
      else {
        DAT_0049fb46 = 0;
        *(unsigned int *)(DAT_004474f4 + 0xc) = 2;
        *(unsigned int *)(temp_v0 + 0x54) = 5;
        *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
        temp_v5 = *(float *)(temp_v0 + 0xa0) - *(float *)(temp_v0 + 0x1c);
        *(float *)(temp_v0 + 0xb0) = temp_v5;
        *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xa4) - *(float *)(temp_v0 + 0x20);
        *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xa8) - *(float *)(temp_v0 + 0x24);
        *(float *)(temp_v0 + 0xb0) = temp_v5 * 0.025f;
        *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xb4) * 0.025f;
        *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xb8) * 0.025f;
        temp_v0 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0xbc) = 0;
      }
    }
    else {
      if (temp_v1 == 0x5a) {
        *(int *)(temp_v0 + 4) = temp_v1 + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
        FUN_0028075c(DAT_00447e88 + 0x28);
        FUN_002805d4();
        return;
      }
      if (temp_v1 < 0x5b) {
        if (temp_v1 != 0x36) {
          if (temp_v1 != 0x37) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
          FUN_00248238();
          temp_v6 = 0x12;
          FUN_0027fd08(temp_v6);
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_00248268();
        temp_v1 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0x68) = temp_v7;
        temp_v0 = DAT_004474f4;
        *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(temp_v1 + 0x50);
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        FUN_0027fe84(0);
        temp_v0 = DAT_00447e88;
      }
      else {
        if (temp_v1 != 0x5b) {
          if ((temp_v1 != 0x5c) ||
             (temp_v0 = *(int *)(DAT_00447e88 + 8) + 1, *(int *)(DAT_00447e88 + 8) = temp_v0, temp_v0 < 4)
             ) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          temp_v6 = 1;
          FUN_0027fd08(temp_v6);
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        FUN_00248238();
        temp_v0 = DAT_00447e88;
      }
    }
    temp_v1 = *(int *)(temp_v0 + 4);
  }
  else {
    pfVar1 = (float *)(DAT_00447e88 + 0x20);
    temp_v1 = *(int *)(DAT_00447e88 + 0xbc);
    temp_v5 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
    *(float *)(DAT_00447e88 + 0x68) = temp_v5;
    *(float *)(temp_v0 + 0x20) = *pfVar1 + temp_v5;
    if (temp_v1 < 0x28) {
      *(int *)(temp_v0 + 0xbc) = temp_v1 + 1;
      *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
      *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
    }
    temp_v1 = *(int *)(temp_v0 + 8) + 1;
    *(int *)(temp_v0 + 8) = temp_v1;
    if (temp_v1 == 10) {
      FUN_002bf9e8(0x10000e7);
    }
    if (*(int *)(DAT_00447e88 + 8) == 0x1e) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
    }
    if ((*(int *)(DAT_00447e88 + 8) < 0x1f) || (temp_v0 = FUN_00289924(), temp_v0 == 0)) {
      FUN_0028075c(DAT_00447e88 + 0x28);
      FUN_002805d4();
      return;
    }
    temp_v1 = *(int *)(DAT_00447e88 + 4);
    temp_v0 = DAT_00447e88;
  }
  *(int *)(temp_v0 + 4) = temp_v1 + 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  FUN_0028075c(DAT_00447e88 + 0x28);
  FUN_002805d4();
  return;
}
