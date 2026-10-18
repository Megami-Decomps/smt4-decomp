/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8f9c` (_code @ 0x2e8f9c, 0xb84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f990; /* 0x49f990 */
extern unsigned int DAT_0049f994; /* 0x49f994 */
extern unsigned int DAT_0049f998; /* 0x49f998 */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00248238. */
/* Supplied declaration required: FUN_00248268. */
/* Supplied declaration required: FUN_00248284. */
/* Supplied declaration required: FUN_0024f248. */
extern int FUN_00273a78(void);
/* Supplied declaration required: FUN_00273a98. */
extern int FUN_00276550(void);
extern int FUN_0027d9b8(void);
/* Supplied declaration required: FUN_0027da20. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_0027fbc8. */
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fd54. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_002805d4. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280bf8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287c44. */
/* Supplied declaration required: FUN_002920e4. */
extern int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002bffbc(unsigned int);


void FUN_002e8f9c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10 [10];
  
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
  temp_v3 = 0x100021b;
  temp_v1 = *(int *)(DAT_00447e88 + 4);
  temp_v4 = 0.017453292f;
  temp_v7 = 0x40000000;
  temp_v6 = 15.0f;
  temp_v8 = 0;
  if (temp_v1 != 0x10) {
    if (temp_v1 >= 0x10) {
      if (temp_v1 == 0x36) {
        FUN_00248268();
        temp_v1 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0x68) = temp_v8;
        temp_v0 = DAT_004474f4;
        *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(temp_v1 + 0x50);
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        FUN_0027fe84(0);
        temp_v0 = DAT_00447e88;
        temp_v1 = *(int *)(temp_v0 + 4);
        *(int *)(temp_v0 + 4) = temp_v1 + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
        FUN_0028075c(DAT_00447e88 + 0x28);
        FUN_002805d4();
        return;
      }
      if (temp_v1 < 0x37) {
        if (temp_v1 == 0x32) {
          DAT_0049fb46 = 0;
          *(unsigned int *)(DAT_004474f4 + 0xc) = 2;
          *(unsigned int *)(temp_v0 + 0x54) = 5;
          *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
          *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xa4) - *(float *)(temp_v0 + 0x20);
          *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xa8) - *(float *)(temp_v0 + 0x24);
          *(float *)(temp_v0 + 0xb0) = (*(float *)(temp_v0 + 0xa0) - *(float *)(temp_v0 + 0x1c)) * 0.025f;
          *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xb4) * 0.025f;
          *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xb8) * 0.025f;
          temp_v0 = DAT_00447e88;
          *(unsigned int *)(DAT_00447e88 + 0xbc) = 0;
          temp_v1 = *(int *)(temp_v0 + 4);
          *(int *)(temp_v0 + 4) = temp_v1 + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        if (temp_v1 == 0x33) {
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
            FUN_002920e4(temp_v3);
            break;
          case 1:
            temp_v3 = 0x100021d;
            FUN_002920e4(temp_v3);
            break;
          case 2:
            temp_v3 = 0x100021f;
            FUN_002920e4(temp_v3);
            break;
          case 3:
            temp_v3 = 0x1000221;
            FUN_002920e4(temp_v3);
            break;
          case 4:
            FUN_002920e4(0x1000223);
          }
          goto LAB_002e94b0;
        }
        if (temp_v1 != 0x34) {
          if (temp_v1 != 0x35) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          pfVar1 = (float *)(DAT_00447e88 + 0x20);
          temp_v1 = *(int *)(DAT_00447e88 + 0xbc);
          temp_v4 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
          *(float *)(DAT_00447e88 + 0x68) = temp_v4;
          *(float *)(temp_v0 + 0x20) = *pfVar1 + temp_v4;
          if (temp_v1 < 0x28) {
            *(int *)(temp_v0 + 0xbc) = temp_v1 + 1;
            *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
            *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
          }
          temp_v1 = *(int *)(temp_v0 + 8) + 1;
          *(int *)(temp_v0 + 8) = temp_v1;
          if (temp_v1 == 0x1e) {
            FUN_00273a98();
          }
          if ((*(int *)(DAT_00447e88 + 8) < 0x1f) || (temp_v0 = FUN_00273a78(), temp_v0 != 0)) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          FUN_00273a98();
          temp_v1 = *(int *)(DAT_00447e88 + 4);
          temp_v0 = DAT_00447e88;
        }
        else {
          pfVar1 = (float *)(DAT_00447e88 + 0x20);
          temp_v2 = *(int *)(DAT_00447e88 + 0xbc);
          temp_v4 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
          *(float *)(DAT_00447e88 + 0x68) = temp_v4;
          *(float *)(temp_v0 + 0x20) = *pfVar1 + temp_v4;
          if (temp_v2 < 0x28) {
            *(int *)(temp_v0 + 0xbc) = temp_v2 + 1;
            *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
            *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
          }
          *(int *)(temp_v0 + 8) = *(int *)(temp_v0 + 8) + 1;
          if (temp_v4 <= 0.0f) {
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
        }
      }
      else {
        if (temp_v1 == 0x37) {
          *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
          FUN_00248238();
          FUN_0027fd08(0xc);
          FUN_0028075c(DAT_00447e88 + 0x28);
          FUN_002805d4();
          return;
        }
        if (temp_v1 != 0x5a) {
          if (temp_v1 != 0x5b) {
            if ((temp_v1 != 0x5c) ||
               (temp_v0 = *(int *)(DAT_00447e88 + 8) + 1, *(int *)(DAT_00447e88 + 8) = temp_v0,
               temp_v0 < 4)) {
              FUN_0028075c(DAT_00447e88 + 0x28);
              FUN_002805d4();
              return;
            }
            temp_v3 = 1;
            FUN_0027fd08(temp_v3);
            FUN_0028075c(DAT_00447e88 + 0x28);
            FUN_002805d4();
            return;
          }
          FUN_00248238();
          temp_v0 = DAT_00447e88;
          temp_v1 = *(int *)(temp_v0 + 4);
        }
      }
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_0028075c(DAT_00447e88 + 0x28);
      FUN_002805d4();
      return;
    }
    switch(temp_v1) {
    case 0:
      *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
      *(unsigned char *)(temp_v0 + 0x6c) = 0;
      temp_v7 = DAT_0049f9a8;
      temp_v3 = DAT_0049f9a4;
      *(unsigned int *)(temp_v0 + 0x28) = DAT_0049f9a0;
      *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x50) = DAT_0049f9ac;
      FUN_0027fe84(0xc);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0xfffffffd;
      FUN_002b8b78(0xdb);
      FUN_0024f248(1,DAT_0049f99c);
      FUN_0028277c();
      FUN_00282600();
      FUN_00248284();
      temp_v0 = DAT_00447e88;
      temp_v1 = *(int *)(temp_v0 + 4);
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      break;
    case 1:
      *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
      FUN_0024f248(1,DAT_0049f99c);
      temp_v0 = DAT_00447e88;
      if (*(int *)(DAT_00447e88 + 8) >= 3) {
        temp_v1 = *(int *)(DAT_00447e88 + 4);
        *(unsigned int *)(DAT_00447e88 + 0x54) = 0x1d;
        *(unsigned int *)(temp_v0 + 0x58) = temp_v7;
        *(int *)(temp_v0 + 4) = temp_v1 + 1;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
      break;
    case 2:
      *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
      FUN_0024f248(1,DAT_0049f99c);
      temp_v0 = FUN_0027f10c();
      if (temp_v0 != 0) {
        FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
        temp_v1 = FUN_0027d9b8();
        temp_v0 = DAT_00447e88;
        if (DAT_0049f968 != 0) {
          temp_v6 = *(float *)(DAT_00447e88 + 0x50) * temp_v4;
          FUN_0028277c();
          temp_v0 = DAT_00447e88;
          temp_v5 = 250.0f;
          *(float *)(DAT_00447e88 + 0xa0) = *(float *)(DAT_00447e88 + 0x28) + temp_v6 * 250.0f;
          *(float *)(temp_v0 + 0xa4) = *(float *)(temp_v0 + 0x2c) - 500.0f;
          temp_v4 = *(float *)(temp_v0 + 0x50) * temp_v4;
          FUN_00282600();
          temp_v0 = DAT_00447e88;
          *(float *)(DAT_00447e88 + 0xa8) = *(float *)(DAT_00447e88 + 0x30) + temp_v4 * temp_v5;
          *(unsigned int *)(temp_v0 + 0xac) = *(unsigned int *)(temp_v0 + 0x50);
          *(unsigned int *)(temp_v0 + 4) = 0x32;
          *(unsigned int *)(temp_v0 + 8) = 0;
        }
        else {
          temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_00447e88 + 0xa0) = temp_v3;
          temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v0 + 0xa4) = temp_v3;
          temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v0 + 0xa8) = temp_v3;
          temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v0 + 0xac) = temp_v3;
          *(unsigned int *)(temp_v0 + 4) = 10;
          *(unsigned int *)(temp_v0 + 8) = 0;
        }
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
      break;
    case 10:
      DAT_0049fb46 = 0;
      *(unsigned int *)(DAT_004474f4 + 0xc) = 1;
      *(unsigned int *)(temp_v0 + 0x54) = 5;
      *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
      temp_v4 = *(float *)(temp_v0 + 0xa0) - *(float *)(temp_v0 + 0x1c);
      *(float *)(temp_v0 + 0xb0) = temp_v4;
      *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xa4) - *(float *)(temp_v0 + 0x20);
      *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xa8) - *(float *)(temp_v0 + 0x24);
      *(float *)(temp_v0 + 0xb0) = temp_v4 * 0.025f;
      *(float *)(temp_v0 + 0xb4) = *(float *)(temp_v0 + 0xb4) * 0.025f;
      *(float *)(temp_v0 + 0xb8) = *(float *)(temp_v0 + 0xb8) * 0.025f;
      temp_v0 = DAT_00447e88;
      *(unsigned int *)(DAT_00447e88 + 0xbc) = 0;
      temp_v1 = *(int *)(temp_v0 + 4);
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      break;
    case 0xb:
      temp_v0 = *(int *)(DAT_00447e88 + 8) + 1;
      *(int *)(DAT_00447e88 + 8) = temp_v0;
      if (temp_v0 < 0x15) break;
      FUN_0027fd54();
      switch(DAT_0049f94a) {
      case 0:
        FUN_002920e4(temp_v3);
        break;
      case 1:
        temp_v3 = 0x100021d;
        FUN_002920e4(temp_v3);
        break;
      case 2:
        temp_v3 = 0x100021f;
        FUN_002920e4(temp_v3);
        break;
      case 3:
        temp_v3 = 0x1000221;
        FUN_002920e4(temp_v3);
        break;
      case 4:
        FUN_002920e4(0x1000223);
      default:
      }
LAB_002e94b0:
      FUN_0027ff10(0xffffffff);
      FUN_0028277c();
      FUN_00282600();
      temp_v0 = FUN_00297004(0,1);
      FUN_002920e4(temp_v0 + 0x100023c);
      temp_v0 = DAT_00447e88;
      *(float *)(DAT_00447e88 + 0x68) = temp_v6;
      *(float *)(temp_v0 + 0x20) = *(float *)(temp_v0 + 0x20) + temp_v6;
      temp_v1 = *(int *)(temp_v0 + 4);
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      break;
    case 0xc:
      pfVar1 = (float *)(DAT_00447e88 + 0x20);
      temp_v1 = *(int *)(DAT_00447e88 + 0xbc);
      temp_v4 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
      *(float *)(DAT_00447e88 + 0x68) = temp_v4;
      *(float *)(temp_v0 + 0x20) = *pfVar1 + temp_v4;
      if (temp_v1 < 0x28) {
        *(int *)(temp_v0 + 0xbc) = temp_v1 + 1;
        *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
        *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
      }
      *(int *)(temp_v0 + 8) = *(int *)(temp_v0 + 8) + 1;
      if (0.0f < temp_v4) {
        *(unsigned int *)(temp_v0 + 4) = 0xd;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
      break;
    case 0xd:
      pfVar1 = (float *)(DAT_00447e88 + 0x20);
      temp_v1 = *(int *)(DAT_00447e88 + 0xbc);
      temp_v4 = *(float *)(DAT_00447e88 + 0x68) - 2.0f;
      *(float *)(DAT_00447e88 + 0x68) = temp_v4;
      temp_v4 = *pfVar1 + temp_v4;
      *(float *)(temp_v0 + 0x20) = temp_v4;
      if (temp_v1 < 0x28) {
        *(int *)(temp_v0 + 0xbc) = temp_v1 + 1;
        *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v0 + 0xb0);
        *(float *)(temp_v0 + 0x24) = *(float *)(temp_v0 + 0x24) + *(float *)(temp_v0 + 0xb8);
      }
      temp_v6 = *(float *)(temp_v0 + 0xa4);
      *(int *)(temp_v0 + 8) = *(int *)(temp_v0 + 8) + 1;
      if (temp_v4 < temp_v6) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0xa0);
        temp_v7 = *(unsigned int *)(temp_v0 + 0xa8);
        *(unsigned int *)(temp_v0 + 0x1c) = temp_v3;
        *(unsigned int *)(temp_v0 + 0x68) = 0;
        *(unsigned int *)(temp_v0 + 0x24) = temp_v7;
        *(float *)(temp_v0 + 0x20) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x54) = 7;
        *(unsigned int *)(temp_v0 + 0x58) = 0x40400000;
        *(unsigned int *)(temp_v0 + 0x30) = temp_v7;
        *(unsigned int *)(temp_v0 + 8) = 0;
        *(unsigned int *)(temp_v0 + 4) = 0xe;
        *(unsigned int *)(temp_v0 + 0x28) = temp_v3;
        *(float *)(temp_v0 + 0x2c) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x3c) = temp_v7;
        *(unsigned int *)(temp_v0 + 0x34) = temp_v3;
        *(float *)(temp_v0 + 0x38) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x48) = temp_v7;
        *(unsigned int *)(temp_v0 + 0x40) = temp_v3;
        *(float *)(temp_v0 + 0x44) = temp_v6;
      }
      break;
    case 0xe:
      temp_v0 = *(int *)(DAT_00447e88 + 8) + 1;
      *(int *)(DAT_00447e88 + 8) = temp_v0;
      if (temp_v0 == 1) {
        FUN_00248268();
        temp_v0 = DAT_004474f4;
        *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        FUN_0027fe84(0);
        *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      }
      if (*(int *)(DAT_00447e88 + 8) == 3) {
        FUN_0027fd54();
        switch(DAT_0049f94a) {
        case 0:
          temp_v3 = 0x100021c;
          FUN_002920e4(temp_v3);
          break;
        case 1:
          temp_v3 = 0x100021e;
          FUN_002920e4(temp_v3);
          break;
        case 2:
          temp_v3 = 0x1000220;
          FUN_002920e4(temp_v3);
          break;
        case 3:
          temp_v3 = 0x1000222;
          FUN_002920e4(temp_v3);
          break;
        case 4:
          FUN_002920e4(0x1000224);
        default:
        }
LAB_002e9754:
        FUN_0027ff10(0xffffffff);
        FUN_0028277c();
        FUN_00282600();
        temp_v0 = FUN_00297004(0,1);
        FUN_002920e4(temp_v0 + 0x100023e);
      }
      if (*(int *)(DAT_00447e88 + 8) != 6) break;
      if (*(int *)(DAT_00447e88 + 0xbc) >= 0x24) {
        temp_v3 = 0x1e;
        temp_v7 = 0x14;
      }
      else {
        temp_v3 = 0xf;
        temp_v7 = 10;
      }
      FUN_00287c44(temp_v7,temp_v3,0);
      temp_v1 = *(int *)(DAT_00447e88 + 4);
      temp_v0 = DAT_00447e88;
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      break;
    case 0xf:
      FUN_00248238();
      temp_v0 = DAT_00447e88;
      temp_v1 = *(int *)(temp_v0 + 4);
      *(int *)(temp_v0 + 4) = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  else {
    temp_v0 = *(int *)(DAT_00447e88 + 8) + 1;
    *(int *)(DAT_00447e88 + 8) = temp_v0;
    if ((temp_v0 < 0x12) ||
       ((((FUN_0027fbc8(&temp_v9,temp_v10,0), temp_v9 < 0xbf000001 && ((int)temp_v9 < 0x3f000001)
          ) && (temp_v10[0] < 0xbf000001)) &&
        (((int)temp_v10[0] < 0x3f000001 && (*(int *)(DAT_00447e88 + 8) < 0x1f)))))) {
      FUN_0028075c(DAT_00447e88 + 0x28);
      FUN_002805d4();
      return;
    }
    *(unsigned int *)(DAT_00447e88 + 0x58) = 0x40a00000;
    temp_v3 = 0xc;
    FUN_0027fd08(temp_v3);
  }
  FUN_0028075c(DAT_00447e88 + 0x28);
  FUN_002805d4();
  return;
}
