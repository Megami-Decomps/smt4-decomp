/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d424c` (_code @ 0x2d424c, 0x60c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern int DAT_0049f958; /* 0x49f958 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Supplied declaration required: FUN_0019db68. */
/* Supplied declaration required: FUN_0024ac90. */
/* Supplied declaration required: FUN_0024acc0. */
/* Supplied declaration required: FUN_0024f034. */
extern int FUN_00273808(void);
/* Supplied declaration required: FUN_00273828. */
extern int FUN_002762e0(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_0027fa98. */
/* Supplied declaration required: FUN_0027fae4. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: FUN_00280364. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: FUN_00280988. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_00291e40. */
extern int FUN_00296d6c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002bfde4(unsigned int);
extern int FUN_002c09d0(unsigned int);


void FUN_002d424c(void)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
  if (*(int *)(DAT_00447e88 + 4) < 10) {
    FUN_00280988();
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
  temp_v4 = 0x40a00000;
  temp_v2 = *(int *)(DAT_00447e88 + 4);
  if (temp_v2 != 0xd) {
    if (temp_v2 >= 0xe) {
      if (temp_v2 != 100) {
        if (temp_v2 < 0x65) {
          if (temp_v2 == 0x5a) {
            *(unsigned int *)(DAT_00447e88 + 4) = 0x5b;
            *(unsigned int *)(temp_v0 + 8) = 0;
            FUN_002804ec(DAT_00447e88 + 0x28);
            FUN_00280364();
            return;
          }
          if (temp_v2 != 0x5b) {
            if ((temp_v2 == 0x5c) &&
               (temp_v0 = *(int *)(DAT_00447e88 + 8) + 1, *(int *)(DAT_00447e88 + 8) = temp_v0,
               temp_v0 >= 4)) {
              FUN_0027fa98(1);
            }
            FUN_002804ec(DAT_00447e88 + 0x28);
            FUN_00280364();
            return;
          }
          FUN_0024ac90();
        }
        else if (temp_v2 != 0x65) {
          if (temp_v2 != 0x66) {
            FUN_002804ec(DAT_00447e88 + 0x28);
            FUN_00280364();
            return;
          }
          FUN_0024ac90();
          FUN_0027fa98(0x14);
        }
        else {
          temp_v2 = FUN_002896bc();
          temp_v0 = DAT_004474f4;
          if (temp_v2 == 0) {
            FUN_002804ec(DAT_00447e88 + 0x28);
            FUN_00280364();
            return;
          }
          *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
          *(unsigned int *)(temp_v0 + 0xac) = 0;
          FUN_0027fc14(0);
          temp_v0 = DAT_00447e88;
          *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
          *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
          FUN_0024f034(0,DAT_0049f99c);
          FUN_0024acc0();
        }
        temp_v0 = DAT_00447e88;
        *(int *)(DAT_00447e88 + 4) = *(int *)(DAT_00447e88 + 4) + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
        FUN_002804ec(DAT_00447e88 + 0x28);
        FUN_00280364();
        return;
      }
      temp_v1 = 10;
      temp_v4 = 0;
      FUN_0029c3c0(temp_v4,temp_v1,0xff);
      temp_v0 = DAT_00447e88;
      *(int *)(DAT_00447e88 + 4) = *(int *)(DAT_00447e88 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_002804ec(DAT_00447e88 + 0x28);
      FUN_00280364();
      return;
    }
    temp_v6 = 0.017453292f;
    if (temp_v2 == 10) {
      DAT_0049fb46 = 0;
      *(unsigned int *)(DAT_004474f4 + 0xc) = 1;
      *(unsigned int *)(temp_v0 + 0x54) = 0x15;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40a00000;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_002804ec(DAT_00447e88 + 0x28);
      FUN_00280364();
      return;
    }
    if (temp_v2 < 0xb) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
            FUN_0024f034(1,DAT_0049f99c);
            temp_v2 = FUN_0027ee9c();
            temp_v0 = DAT_00447e88;
            if (temp_v2 != 0) {
              *(unsigned int *)(DAT_00447e88 + 4) = 10;
              *(unsigned int *)(temp_v0 + 8) = 0;
            }
            else {
              temp_v0 = FUN_002bfde4(6);
              if ((temp_v0 != 0) || (temp_v0 = FUN_002762e0(), temp_v0 != 0)) {
                temp_v0 = DAT_004474f4;
                *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_0027fc14(0);
                temp_v0 = DAT_00447e88;
                *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
                *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
                FUN_0024f034(0,DAT_0049f99c);
                FUN_0024acc0();
                temp_v0 = DAT_00447e88;
                *(unsigned int *)(DAT_00447e88 + 4) = 0x5a;
                *(unsigned int *)(temp_v0 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
          FUN_0024f034(1,DAT_0049f99c);
          temp_v0 = DAT_00447e88;
          if (*(int *)(DAT_00447e88 + 8) >= 3) {
            temp_v2 = *(int *)(DAT_00447e88 + 4);
            *(unsigned int *)(DAT_00447e88 + 0x54) = 0x1c;
            *(unsigned int *)(temp_v0 + 0x58) = 0x40000000;
            *(int *)(temp_v0 + 4) = temp_v2 + 1;
            *(unsigned int *)(temp_v0 + 8) = 0;
          }
        }
        FUN_002804ec(DAT_00447e88 + 0x28);
        FUN_00280364();
        return;
      }
      *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
      *(unsigned char *)(temp_v0 + 0x6c) = 0;
      temp_v1 = DAT_0049f9a8;
      temp_v4 = DAT_0049f9a4;
      *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
      *(unsigned int *)(temp_v0 + 0x2c) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
      temp_v3 = DAT_0049f9bc * 0.017453292f;
      FUN_0028250c();
      temp_v5 = 25.0f;
      *(float *)(DAT_00447e88 + 0x28) = *(float *)(DAT_00447e88 + 0x28) + temp_v3 * 25.0f;
      temp_v6 = DAT_0049f9bc * temp_v6;
      FUN_00282390();
      temp_v0 = DAT_00447e88;
      *(float *)(DAT_00447e88 + 0x30) = *(float *)(DAT_00447e88 + 0x30) + temp_v6 * temp_v5;
      *(unsigned int *)(temp_v0 + 0x50) = DAT_0049f9ac;
      FUN_0027fc14(0xd);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 1;
      FUN_002b8838(0xda);
      FUN_0024f034(1,DAT_0049f99c);
      FUN_0019db68();
    }
    else if (temp_v2 != 0xb) {
      if (temp_v2 != 0xc) {
        FUN_002804ec(DAT_00447e88 + 0x28);
        FUN_00280364();
        return;
      }
      if ((DAT_0049f958 == 0x3303001) && (temp_v0 = FUN_002c09d0(0x292), temp_v0 != 0)) {
        temp_v0 = FUN_002896bc();
        if (temp_v0 == 0) {
          FUN_002804ec(DAT_00447e88 + 0x28);
          FUN_00280364();
          return;
        }
      }
      else {
        temp_v0 = FUN_00273808();
        if (temp_v0 != 0) {
          FUN_002804ec(DAT_00447e88 + 0x28);
          FUN_00280364();
          return;
        }
      }
      FUN_0024acc0();
      temp_v0 = DAT_004474f4;
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      FUN_0027fc14(0);
    }
    else {
      temp_v0 = *(int *)(DAT_00447e88 + 8) + 1;
      *(int *)(DAT_00447e88 + 8) = temp_v0;
      if (temp_v0 != 10) {
        FUN_002804ec(DAT_00447e88 + 0x28);
        FUN_00280364();
        return;
      }
      FUN_0027fae4();
      switch(DAT_0049f94a) {
      case 0:
        FUN_00291e40(0x100021b);
        break;
      case 1:
        temp_v4 = 0x100021d;
        FUN_00291e40(temp_v4);
        break;
      case 2:
        temp_v4 = 0x100021f;
        FUN_00291e40(temp_v4);
        break;
      case 3:
        temp_v4 = 0x1000221;
        FUN_00291e40(temp_v4);
        break;
      case 4:
        temp_v4 = 0x1000223;
        FUN_00291e40(temp_v4);
        break;
      default:
      }
      FUN_0027fca0(0xffffffff);
      FUN_0028250c();
      FUN_00282390();
      temp_v0 = FUN_00296d6c(0,1);
      FUN_00291e40(temp_v0 + 0x100023c);
      if ((DAT_0049f958 == 0x3303001) && (temp_v0 = FUN_002c09d0(0x292), temp_v0 != 0)) {
        FUN_0029c3c0(0,0xf,0xff);
        temp_v1 = 0xf;
        temp_v4 = 1;
        FUN_0029c3c0(temp_v4,temp_v1,0xff);
      }
      else {
        FUN_00273828();
      }
    }
  }
  else {
    FUN_0024ac90();
    FUN_0027fa98(0x14);
  }
  temp_v0 = DAT_00447e88;
  *(int *)(DAT_00447e88 + 4) = *(int *)(DAT_00447e88 + 4) + 1;
  *(unsigned int *)(temp_v0 + 8) = 0;
  FUN_002804ec(DAT_00447e88 + 0x28);
  FUN_00280364();
  return;
}
