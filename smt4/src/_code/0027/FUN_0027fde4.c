/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027fde4` (_code @ 0x27fde4, 0x580 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f94b; /* 0x49f94b */
extern unsigned char DAT_0049f94d; /* 0x49f94d */
extern unsigned int DAT_0049f99c; /* 0x49f99c */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern int DAT_004c2420; /* 0x4c2420 */

/* Supplied declaration required: FUN_001fa760. */
/* Supplied declaration required: FUN_0024f034. */
/* Supplied declaration required: FUN_0025247c. */
extern int FUN_00273808(void);
/* Supplied declaration required: FUN_00273828. */
extern int FUN_002762e0(void);
/* Supplied declaration required: FUN_00276934. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_0027f48c. */
/* Supplied declaration required: FUN_0027fa98. */
/* Supplied declaration required: FUN_0027fc14. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: FUN_00280988. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287be4. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: FUN_002c86ec. */
/* Supplied declaration required: FUN_002d3e58. */
/* Supplied declaration required: FUN_002dfee0. */


void FUN_0027fde4(void)

{
/* irregular: 2 goto(s); irregular input(s): in_d8; 19 native warning(s); review required */
  float *pfVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long in_d8;
  unsigned long long temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned long long temp_v17;
  unsigned char temp_v18 [16];
  unsigned long long uStack_38;
  
  temp_v8 = *(unsigned long long *)(DAT_00447e88 + 0x28);
  temp_v10 = *(unsigned int *)(DAT_00447e88 + 0x30);
  uStack_38 = in_d8;
  FUN_00280988();
  temp_v2 = DAT_00447e88;
  temp_v6 = *(float *)(DAT_00447e88 + 0x1c) +
          (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * 0.33333334f;
  *(float *)(DAT_00447e88 + 0x1c) = temp_v6;
  *(float *)(temp_v2 + 0x20) =
       *(float *)(temp_v2 + 0x20) + (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v2 + 0x24) =
       *(float *)(temp_v2 + 0x24) + (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * 0.33333334f
  ;
  temp_v3 = *(int *)(temp_v2 + 4);
  if (temp_v3 != 0xc) {
    if (temp_v3 < 0xc) {
      temp_v11 = 0x40a00000;
      if (temp_v3 != 2) {
        if (temp_v3 < 2) {
          if (temp_v3 != 0) {
            if (temp_v3 == 1) {
              *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
              FUN_0024f034(1,DAT_0049f99c);
              temp_v2 = DAT_00447e88;
              if (*(int *)(DAT_00447e88 + 8) >= 3) {
                temp_v3 = *(int *)(DAT_00447e88 + 4);
                *(unsigned int *)(DAT_00447e88 + 0x54) = 0x1d;
                *(unsigned int *)(temp_v2 + 0x58) = 0x40000000;
                *(int *)(temp_v2 + 4) = temp_v3 + 1;
                *(unsigned int *)(temp_v2 + 8) = 0;
              }
            }
          }
          else {
            *(unsigned int *)(temp_v2 + 0x54) = 0;
            *(unsigned int *)(temp_v2 + 0x58) = 0x40400000;
            *(unsigned char *)(temp_v2 + 0x6c) = 0;
            FUN_00287aec();
            temp_v4 = DAT_0049f9a8;
            temp_v11 = DAT_0049f9a4;
            temp_v2 = DAT_00447e88;
            temp_v7 = 0.017453292f;
            temp_v15 = 100.0f;
            temp_v16 = 0x41f00000;
            temp_v12 = 180.0f;
            *(unsigned int *)(DAT_00447e88 + 0x118) = DAT_0049f9a0;
            *(unsigned int *)(temp_v2 + 0x11c) = temp_v11;
            *(unsigned int *)(temp_v2 + 0x120) = temp_v4;
            if ((int)temp_v6 < 0x42700000) {
              temp_v6 = (*(float *)(temp_v2 + 0x4c) + 180.0f) * 0.017453292f;
              FUN_0028250c();
              temp_v2 = DAT_00447e88;
              *(float *)(DAT_00447e88 + 0x118) = *(float *)(DAT_00447e88 + 0x118) + temp_v6 * temp_v15;
              temp_v7 = (*(float *)(temp_v2 + 0x4c) + temp_v12) * temp_v7;
              FUN_00282390();
              temp_v2 = DAT_00447e88 + 0x124;
              *(float *)(DAT_00447e88 + 0x120) = *(float *)(DAT_00447e88 + 0x120) + temp_v7 * temp_v15;
              FUN_0025247c(temp_v2);
              temp_v2 = DAT_00447e88;
              *(unsigned int *)(DAT_00447e88 + 0x130) = temp_v16;
              *(unsigned char *)(temp_v2 + 0x115) = 1;
              temp_v11 = *(unsigned int *)(temp_v2 + 0x28);
              FUN_00287be4();
              *(unsigned int *)(DAT_00447e88 + 0x50) = temp_v11;
            }
            else {
              temp_v6 = (*(float *)(temp_v2 + 0x50) + 180.0f) * 0.017453292f;
              FUN_0028250c();
              temp_v2 = DAT_00447e88;
              *(float *)(DAT_00447e88 + 0x118) = *(float *)(DAT_00447e88 + 0x118) + temp_v6 * temp_v15;
              temp_v7 = (*(float *)(temp_v2 + 0x50) + temp_v12) * temp_v7;
              FUN_00282390();
              temp_v2 = DAT_00447e88 + 0x124;
              *(float *)(DAT_00447e88 + 0x120) = *(float *)(DAT_00447e88 + 0x120) + temp_v7 * temp_v15;
              FUN_0025247c(temp_v2);
              temp_v2 = DAT_00447e88;
              *(unsigned int *)(DAT_00447e88 + 0x130) = temp_v16;
              *(unsigned char *)(temp_v2 + 0x115) = 1;
              temp_v11 = *(unsigned int *)(temp_v2 + 0x28);
              FUN_00287be4();
              *(unsigned int *)(DAT_00447e88 + 0x50) = temp_v11;
            }
            FUN_0027fc14(10);
            *(unsigned int *)(DAT_004474f4 + 0xac) = 0xffffffff;
            FUN_002b8838(0xdb);
            FUN_0024f034(1,DAT_0049f99c);
            FUN_001fa760();
            temp_v2 = DAT_00447e88;
            temp_v3 = *(int *)(temp_v2 + 4);
            *(int *)(temp_v2 + 4) = temp_v3 + 1;
            *(unsigned int *)(temp_v2 + 8) = 0;
          }
        }
        else if (temp_v3 != 10) {
          if ((temp_v3 == 0xb) &&
             (temp_v3 = *(int *)(temp_v2 + 8) + 1, *(int *)(temp_v2 + 8) = temp_v3, temp_v3 == 0x14)) {
            FUN_00273828();
            temp_v3 = *(int *)(DAT_00447e88 + 4);
            temp_v2 = DAT_00447e88;
            *(int *)(temp_v2 + 4) = temp_v3 + 1;
            *(unsigned int *)(temp_v2 + 8) = 0;
          }
        }
        else {
          DAT_0049fb46 = 0;
          *(unsigned int *)(temp_v2 + 0x54) = 8;
          *(unsigned int *)(temp_v2 + 0x58) = 0x40a00000;
          temp_v3 = *(int *)(temp_v2 + 4);
          *(int *)(temp_v2 + 4) = temp_v3 + 1;
          *(unsigned int *)(temp_v2 + 8) = 0;
        }
      }
      else {
        *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
        FUN_0024f034(1,DAT_0049f99c);
        temp_v3 = FUN_0027ee9c();
        temp_v2 = DAT_00447e88;
        if (temp_v3 != 0) {
          *(unsigned int *)(DAT_00447e88 + 4) = 10;
          *(unsigned int *)(temp_v2 + 8) = 0;
        }
        else {
          temp_v2 = FUN_002bfde4(5);
          if ((temp_v2 != 0) || (temp_v2 = FUN_002762e0(), temp_v2 != 0)) {
            temp_v2 = DAT_004474f4;
            *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
            *(unsigned int *)(temp_v2 + 0xac) = 0;
            FUN_0027fc14(0);
            temp_v2 = DAT_00447e88;
            *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
            *(unsigned int *)(temp_v2 + 0x58) = temp_v11;
            FUN_0024f034(0,DAT_0049f99c);
            FUN_002dfee0();
            temp_v2 = DAT_00447e88;
            *(unsigned int *)(DAT_00447e88 + 4) = 0x5a;
            *(unsigned int *)(temp_v2 + 8) = 0;
          }
        }
      }
    }
    else if (temp_v3 != 0xd) {
      if (temp_v3 != 0x5a) {
        if (temp_v3 != 0x5b) {
          if ((temp_v3 != 0x5c) ||
             (temp_v3 = *(int *)(temp_v2 + 8) + 1, *(int *)(temp_v2 + 8) = temp_v3, temp_v3 < 4))
          goto LAB_00280248;
          temp_v11 = 1;
          FUN_0027fa98(temp_v11);
        }
        else {
          FUN_002d3e58();
          temp_v3 = *(int *)(DAT_00447e88 + 4);
          temp_v2 = DAT_00447e88;
          *(int *)(temp_v2 + 4) = temp_v3 + 1;
          *(unsigned int *)(temp_v2 + 8) = 0;
        }
      }
      else {
        *(int *)(temp_v2 + 4) = temp_v3 + 1;
        *(unsigned int *)(temp_v2 + 8) = 0;
      }
    }
    else {
      temp_v3 = *(int *)(temp_v2 + 8) + 1;
      *(int *)(temp_v2 + 8) = temp_v3;
      if (temp_v3 == 0x14) {
        FUN_002d3e58();
        FUN_00276934();
        temp_v11 = 8;
        FUN_0027fa98(temp_v11);
      }
    }
  }
  else {
    temp_v2 = FUN_00273808();
    if (temp_v2 == 0) {
      FUN_002dfee0();
      temp_v2 = DAT_004474f4;
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
      *(unsigned int *)(temp_v2 + 0xac) = 0;
      FUN_0027fc14(0);
      temp_v3 = *(int *)(DAT_00447e88 + 4);
      temp_v2 = DAT_00447e88;
      *(int *)(temp_v2 + 4) = temp_v3 + 1;
      *(unsigned int *)(temp_v2 + 8) = 0;
    }
  }
LAB_00280248:
  if (*(char *)(DAT_00447e88 + 0x115) != '\0') {
    temp_v6 = *(float *)(DAT_00447e88 + 0x28);
    FUN_00287aec();
    temp_v2 = DAT_00447e88;
    temp_v7 = *(float *)(DAT_00447e88 + 0x130);
    if (temp_v7 >= temp_v6) {
      temp_v11 = *(unsigned int *)(DAT_00447e88 + 0x11c);
      temp_v4 = *(unsigned int *)(DAT_00447e88 + 0x120);
      *(unsigned int *)(DAT_00447e88 + 0x28) = *(unsigned int *)(DAT_00447e88 + 0x118);
      *(unsigned char *)(temp_v2 + 0x115) = 0;
      *(unsigned int *)(temp_v2 + 0x2c) = temp_v11;
      *(unsigned int *)(temp_v2 + 0x30) = temp_v4;
    }
    else {
      pfVar1 = (float *)(DAT_00447e88 + 0x128);
      temp_v6 = *(float *)(DAT_00447e88 + 300);
      *(float *)(DAT_00447e88 + 0x28) =
           *(float *)(DAT_00447e88 + 0x28) + *(float *)(DAT_00447e88 + 0x124) * temp_v7;
      *(float *)(temp_v2 + 0x2c) = *(float *)(temp_v2 + 0x2c) + *pfVar1 * temp_v7;
      *(float *)(temp_v2 + 0x30) = *(float *)(temp_v2 + 0x30) + temp_v6 * temp_v7;
    }
    temp_v2 = DAT_00447e88;
    temp_v3 = DAT_00447e88 + 0x34;
    *(int *)(DAT_00447e88 + 0x34) = (int)temp_v8;
    *(int *)(temp_v2 + 0x38) = (int)((unsigned long long)temp_v8 >> 0x20);
    *(unsigned int *)(temp_v2 + 0x3c) = temp_v10;
    temp_v2 = temp_v2 + 0x28;
    FUN_0027f48c(temp_v2,temp_v3);
    if (temp_v2 != 0) {
      *(unsigned char *)(DAT_00447e88 + 0x115) = 0;
    }
  }
  FUN_002804ec(DAT_00447e88 + 0x28);
  temp_v2 = 0;
  DAT_0049f94b = 0xff;
  DAT_0049f94d = 0xff;
  if (0 < DAT_004c2420) {
    temp_v14 = 0;
    temp_v9 = uStack_38;
    do {
      temp_v17 = temp_v14 >> 0x20;
      temp_v5 = 0;
      temp_v3 = temp_v2 * 0x7c;
      do {
        temp_v13 = (unsigned int)(temp_v14 >> 0x20);
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            if (temp_v5 != 2) {
              if (temp_v5 == 3) {
                temp_v9 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x4c1510);
                temp_v14 = (unsigned long long)temp_v13 << 0x20;
                FUN_0025247c(temp_v18);
              }
            }
            else {
              temp_v9 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x4c14f8);
              temp_v14 = (unsigned long long)temp_v13 << 0x20;
              FUN_0025247c(temp_v18);
            }
          }
          else {
            temp_v9 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x4c14e0);
            temp_v14 = (unsigned long long)temp_v13 << 0x20;
            FUN_0025247c(temp_v18);
          }
        }
        else {
          temp_v9 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x4c14c8);
          temp_v14 = (unsigned long long)temp_v13 << 0x20;
          FUN_0025247c(temp_v18);
        }
        temp_v6 = (float)temp_v9;
        FUN_002c86ec();
        temp_v1 = DAT_0049f94b;
        if (temp_v6 < (float)temp_v17) goto LAB_002804c4;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 4);
      temp_v0 = (unsigned char)*(unsigned short *)(temp_v3 + 0x4c14ba);
      temp_v1 = temp_v0;
      if (*(short *)(temp_v3 + 0x4c14b8) != 0) {
        temp_v1 = DAT_0049f94b;
        DAT_0049f94d = temp_v0;
      }
LAB_002804c4:
      DAT_0049f94b = temp_v1;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_004c2420);
  }
  return;
}
