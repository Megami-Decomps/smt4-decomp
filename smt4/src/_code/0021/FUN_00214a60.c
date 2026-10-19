/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214a60` (_code @ 0x214a60, 0xfb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned char LAB_00215490; /* 0x215490 */
extern int DAT_0044de2c; /* 0x44de2c */
extern int DAT_0044de30; /* 0x44de30 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
/* Supplied declaration required: FUN_001c0b88. */
/* Supplied declaration required: FUN_0025086c. */
/* Supplied declaration required: FUN_0025090c. */
/* Supplied declaration required: FUN_0028f4b4. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002ae038. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */
extern int FUN_002c30c4(unsigned char *);
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_00214a60(void)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int *piVar14;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned int in_fpscr;
  unsigned char *puVar23;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned char *puStack_120;
  float afStack_11c [2];
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  int temp_v26;
  unsigned char temp_v27 [32];
  unsigned char temp_v28 [132];
  int temp_v29;
  unsigned char temp_v30 [8];
  unsigned char temp_v31 [8];
  unsigned char temp_v32 [8];
  unsigned char temp_v33 [20];
  
  temp_v26 = DAT_0044de2c;
  temp_v29 = DAT_0044de2c + 0x300;
  if (*(char *)(DAT_0044de2c + 0x378) == '\0') {
    temp_v4 = *(int *)(DAT_0044de2c + 8);
    if ((((temp_v4 - 2U < 9) && (temp_v4 != 3 && temp_v4 != 4)) && (temp_v4 != 5 && temp_v4 != 6)) &&
       ((temp_v4 != 7 && temp_v4 != 8) && temp_v4 != 9)) {
      temp_v1 = *(char *)(DAT_0044de2c + 0x49);
      FUN_002c0cec(0x3d,0);
      temp_v4 = FUN_002c0cc4();
      temp_v4 = temp_v4 + temp_v1 * 0x54 + 0x14;
    }
    else {
      temp_v4 = 0;
    }
    FUN_0029ee6c(temp_v4,0x323232ff);
    FUN_002bf380(2,0x36,*(unsigned int *)(temp_v26 + 0x34),*(unsigned int *)(temp_v26 + 100),0,2);
    temp_v22 = 0x3f80000000000000;
    temp_v4 = 0;
    do {
      temp_v6 = DAT_0044ea00;
      temp_v17 = DAT_0044de2c;
      if (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0') {
        temp_v5 = FUN_002c5d80(1,0);
        piVar14 = (int *)(temp_v6 + 0x124c);
        temp_v9 = *piVar14;
        temp_v10 = piVar14[temp_v9 + 2];
        *piVar14 = temp_v9 + 1;
        piVar14[temp_v9 + 3] = temp_v5;
        if (*(char *)(temp_v6 + 0x1264) != '\0' || temp_v10 != temp_v5) {
          (**(romwright_code **)(temp_v6 + 0x1268))();
          *(unsigned char *)(temp_v6 + 0x1264) = 0;
        }
        FUN_002bf538();
        FUN_002bed3c();
        temp_v6 = FUN_002bf4f8(0x36,temp_v4 + 0x51);
        temp_v5 = temp_v17 + temp_v4 * 4;
        FUN_002bf538();
        temp_v11 = 2;
        if (temp_v4 == DAT_0044de30) {
          temp_v11 = 3;
        }
        FUN_002bf380(2,0x36,temp_v11,*(unsigned int *)(temp_v5 + 0x68),(int)*(short *)(temp_v6 + 10),2);
        temp_v9 = FUN_002bf4f8(0x36,0x2f);
        temp_v10 = (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v6 + 10);
        temp_v17 = temp_v17 + temp_v4 * 0x80;
        VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + *(int *)(temp_v5 + 0x68),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(4,0xffffffff,temp_v17 + 0x24c,temp_v10);
        temp_v9 = FUN_002bf4f8(0x36,0x39);
        temp_v14 = (unsigned int)*(unsigned char *)(temp_v17 + 0x298) % 10;
        FUN_002bf288(2,0xd,temp_v14 + 3000,*(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v9 + 8),
                     (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v9 + 10),2);
        temp_v9 = FUN_002bf4f8(0x36,0x3a);
        FUN_002bf288(2,0xd,(*(unsigned char *)(temp_v17 + 0x298) - temp_v14) / 10 + 3000,
                     *(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v9 + 8),
                     (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v9 + 10),2);
        if (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0') {
          temp_v25 = 0;
          temp_v0 = *(unsigned char *)(temp_v17 + 0x299);
          temp_v19 = (temp_v0 & 1) != 0;
          if (temp_v19) {
            temp_v25 = 1;
          }
          temp_v25 = (unsigned int)temp_v19;
          temp_v20 = (temp_v0 & 2) != 0;
          temp_v18 = temp_v20 || temp_v19;
          if (temp_v20) {
            (*(unsigned short *)((unsigned char *)&temp_v25 + 0)) = romwright_piece_1_1(temp_v18,temp_v19);
            temp_v25 = (unsigned int)(unsigned short)temp_v25;
          }
          temp_v19 = (temp_v0 & 4) != 0;
          if (temp_v19) {
            temp_v25 = (((unsigned int)(temp_v25) & 0xff000000U) | (((unsigned int)(romwright_piece_1_2(temp_v19 || temp_v18,(unsigned short)temp_v25)) & 0xffffffU) << 0));
            temp_v25 = (unsigned int)(unsigned int)temp_v25;
          }
          if ((temp_v0 & 8) != 0) {
            temp_v25 = romwright_piece_1_3(1,(unsigned int)temp_v25);
          }
          if (((*(unsigned char *)((unsigned char *)&temp_v25 + 3)) == '\x01') ||
             ((*(unsigned char *)((unsigned char *)&temp_v25 + 2)) == '\x01' || ((*(unsigned char *)((unsigned char *)&temp_v25 + 1)) == '\x01' || (char)temp_v25 == '\x01'))
             ) {
            temp_v5 = 0;
            temp_v9 = DAT_0044de2c + temp_v4 * 4;
            do {
              temp_v11 = *(unsigned int *)(temp_v9 + 0x68);
              if (*(char *)((int)&temp_v25 + temp_v5) != '\0') {
                FUN_002bf288(2,0x36,temp_v5 + 0x34,temp_v11,(int)*(short *)(temp_v6 + 10),2);
              }
              else {
                FUN_002bf288(2,0x36,temp_v5 + 0x30,temp_v11,(int)*(short *)(temp_v6 + 10),2);
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 4);
          }
        }
        temp_v5 = DAT_0044de2c;
        temp_v9 = FUN_002bf4f8(0x36,0x2a);
        temp_v14 = (unsigned int)*(unsigned short *)(temp_v17 + 0x2a4);
        if ((temp_v14 != 0) && (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0')) {
          if (temp_v14 - 200 < 100) {
            temp_v14 = 0xcb;
          }
          FUN_0025090c(temp_v14,*(unsigned short *)(temp_v17 + 0x2a6),2,temp_v27);
          temp_v2 = **(short **)(temp_v9 + 0xc);
          FUN_0028f4b4(temp_v27,2);
          temp_v5 = *(int *)(temp_v5 + temp_v4 * 4 + 0x68);
          VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v5 + *(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v9 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xf49800ff,temp_v27,temp_v5);
        }
        temp_v5 = DAT_0044de2c;
        if (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0') {
          temp_v23 = FUN_002bf4f8(0x36,0x23);
          temp_v14 = *(unsigned int *)(temp_v17 + 0x29c);
          temp_v9 = (int)(((long long)(int)temp_v14 * -0x6e5d4c3b + ((unsigned long long)temp_v14 << 0x20)) >> 0x20
                        );
          temp_v10 = (int)(((long long)(int)temp_v14 * -0x6e5d4c3b + ((unsigned long long)temp_v14 << 0x20)) >> 0x20
                        );
          temp_v14 = temp_v14 + ((temp_v10 >> 0xb) - (temp_v10 >> 0x1f)) * -0xe10;
          temp_v10 = (int)(((long long)(int)temp_v14 * -0x77777777 + ((unsigned long long)temp_v14 << 0x20)) >> 0x20
                        );
          temp_v15 = (int)(((long long)(int)temp_v14 * -0x77777777 + ((unsigned long long)temp_v14 << 0x20)) >> 0x20
                        );
          temp_v16 = (temp_v10 >> 5) - (temp_v10 >> 0x1f);
          temp_v10 = temp_v14 + ((temp_v15 >> 5) - (temp_v15 >> 0x1f)) * -0x3c;
          FUN_002907c4(temp_v28,(temp_v9 >> 0xb) - (temp_v9 >> 0x1f));
          FUN_0025086c(temp_v16 / 10,temp_v33);
          FUN_0025086c(temp_v16 % 10,temp_v30);
          FUN_0025086c(temp_v10 / 10,temp_v31);
          FUN_0025086c(temp_v10 % 10,temp_v32);
          puStack_120 = temp_v32;
          FUN_002be624(temp_v27,&LAB_00215490,temp_v28,temp_v33,temp_v30,temp_v31);
          temp_v9 = FUN_002c30c4(temp_v27);
          VectorSignedToFloat((int)**(short **)(temp_v23 + 0xc) - (temp_v9 * 9) / 2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v23 + 10) + (int)*(short *)(temp_v6 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v23 + 8) + *(int *)(temp_v5 + temp_v4 * 4 + 0x68),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0x787878ff,temp_v27);
        }
        temp_v5 = DAT_0044de2c;
        if (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0') {
          FUN_002bf4f8(0x36,0x10);
          FUN_002bf4f8(0x36,0x18);
          temp_v9 = 0;
          temp_v5 = temp_v5 + temp_v4 * 4;
          do {
            FUN_002bf288(2,0x36,temp_v9 + 0x12,*(unsigned int *)(temp_v5 + 0x68),
                         (int)*(short *)(temp_v6 + 10),0xb);
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 4);
          temp_v9 = FUN_002bf4f8(0x36,0x18);
          FUN_002bf288(2,0x36,0x16,*(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v9 + 8),
                       (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v9 + 10),0x15);
          FUN_002b6758(0xffffffff,*(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v9 + 8),
                       (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v6 + 10),2,0);
          temp_v9 = 0;
          do {
            temp_v10 = temp_v17 + 0x24c + temp_v9 * 2;
            if (*(short *)(temp_v10 + 0x5c) != 0) {
              temp_v15 = FUN_002bf4f8(0x36,temp_v9 + 0x19);
              FUN_002bf288(2,0x36,0x16,*(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v15 + 8),
                           (int)*(short *)(temp_v15 + 10) + (int)*(short *)(temp_v6 + 10),0xb);
              FUN_002b6758((int)*(short *)(temp_v10 + 0x5c),
                           *(int *)(temp_v5 + 0x68) + (int)*(short *)(temp_v15 + 8),
                           (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v15 + 10),0x15,0);
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 3);
        }
        if (*(char *)(DAT_0044de2c + temp_v4 + 0x34c) != '\0') {
          if (*(short *)(temp_v17 + 0x2b2) != 0) {
            temp_v9 = DAT_0044de2c + temp_v4 * 4;
            FUN_002bf288(2,0x36,0x6e,*(unsigned int *)(temp_v9 + 0x68),(int)*(short *)(temp_v6 + 10),2);
            FUN_002be304(0x72e02700);
            temp_v7 = (unsigned int)*(unsigned short *)(temp_v17 + 0x2b2);
            temp_v14 = (temp_v7 + 1) / 1000;
            temp_v8 = (temp_v14 * -1000 + 1 + temp_v7) / 100;
            temp_v17 = temp_v14 * 1000 + temp_v8 * 100;
            temp_v12 = (temp_v7 - temp_v17) + 1;
            temp_v13 = temp_v12 / 10;
            temp_v17 = temp_v7 - (temp_v17 + temp_v13 * 10);
            temp_v5 = FUN_002bf4f8(0x36,0x72,temp_v13 * 5,temp_v12 * -0x33333333);
            if (temp_v14 != 0) {
              FUN_002bf288(2,0xd,temp_v14 + 3000,*(int *)(temp_v9 + 0x68) + (int)*(short *)(temp_v5 + 8),
                           (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10),2);
            }
            temp_v5 = FUN_002bf4f8(0x36,0x71);
            if (temp_v8 != 0 || temp_v14 != 0) {
              FUN_002bf288(2,0xd,temp_v8 + 3000,*(int *)(temp_v9 + 0x68) + (int)*(short *)(temp_v5 + 8),
                           (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10),2);
            }
            temp_v5 = FUN_002bf4f8(0x36,0x70);
            if ((temp_v8 != 0 || temp_v13 != 0) || temp_v14 != 0) {
              FUN_002bf288(2,0xd,temp_v13 + 3000,*(int *)(temp_v9 + 0x68) + (int)*(short *)(temp_v5 + 8),
                           (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10),2);
            }
            temp_v5 = FUN_002bf4f8(0x36,0x6f);
            if (((temp_v8 != 0 || temp_v13 != 0) || temp_v17 != -1) || temp_v14 != 0) {
              FUN_002bf288(2,0xd,temp_v17 + 0xbb9,*(int *)(temp_v9 + 0x68) + (int)*(short *)(temp_v5 + 8)
                           ,(int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10),2);
            }
            FUN_002bed3c();
          }
          else if (*(char *)(temp_v17 + 0x299) != '\0') {
            FUN_002bf288(2,0x36,0x17,*(unsigned int *)(DAT_0044de2c + temp_v4 * 4 + 0x68),
                         (int)*(short *)(temp_v6 + 10),2);
          }
        }
        temp_v17 = DAT_0044ea00;
        piVar14 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v6 = *piVar14;
        temp_v5 = piVar14[temp_v6 + 2];
        *piVar14 = temp_v6 - 1;
        if (*(char *)(temp_v17 + 0x1264) != '\0' || temp_v5 != piVar14[temp_v6 + 1]) {
          (**(romwright_code **)(temp_v17 + 0x1268))();
          *(unsigned char *)(temp_v17 + 0x1264) = 0;
        }
        FUN_002bf538();
      }
      else {
        temp_v6 = FUN_002bf4f8(0x36,temp_v4 + 0x51);
        temp_v5 = temp_v17 + temp_v4 * 4;
        FUN_002bf538();
        temp_v11 = 4;
        if (temp_v4 == DAT_0044de30) {
          temp_v11 = 5;
        }
        FUN_002bf380(2,0x36,temp_v11,*(unsigned int *)(temp_v5 + 0x68),(int)*(short *)(temp_v6 + 10),2);
        FUN_002bf538();
        temp_v9 = FUN_002bf4f8(0x36,0x2f);
        temp_v1 = *(char *)(temp_v17 + 0x49);
        FUN_002c0cec(0x3d,0);
        temp_v17 = FUN_002c0cc4();
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v6 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + *(int *)(temp_v5 + 0x68),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(4,0x787878ff,temp_v17 + temp_v1 * 0x54,(int)*(short *)(temp_v6 + 10));
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 2);
    FUN_002bf538();
    if (((*(char *)(temp_v26 + 0x70) != '\0') && (*(char *)(temp_v26 + 0x71) == '\0')) &&
       (*(char *)(temp_v29 + 0x54) != '\0')) {
      temp_v17 = FUN_002bf4f8(0x36,DAT_0044de30 + 0x51);
      temp_v4 = DAT_0044ea00;
      temp_v6 = FUN_002c5da8(6,1,0);
      piVar14 = (int *)(temp_v4 + 0x12ac);
      temp_v5 = *piVar14;
      temp_v9 = piVar14[temp_v5 + 2];
      *piVar14 = temp_v5 + 1;
      piVar14[temp_v5 + 3] = temp_v6;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf538();
      FUN_002bed3c();
      FUN_002bf380(2,0x36,6,(int)*(short *)(temp_v17 + 8),(int)*(short *)(temp_v17 + 10),2);
      temp_v4 = DAT_0044ea00;
      piVar14 = (int *)(DAT_0044ea00 + 0x12ac);
      temp_v17 = *piVar14;
      temp_v6 = piVar14[temp_v17 + 2];
      *piVar14 = temp_v17 - 1;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != piVar14[temp_v17 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
    temp_v4 = DAT_0044ea00;
    if ((*(char *)(temp_v26 + 0x55) != '\0') && (*(char *)(temp_v26 + 0x72) == '\0')) {
      temp_v17 = FUN_002c5d80(1,0);
      piVar14 = (int *)(temp_v4 + 0x124c);
      temp_v6 = *piVar14;
      temp_v5 = piVar14[temp_v6 + 2];
      *piVar14 = temp_v6 + 1;
      piVar14[temp_v6 + 3] = temp_v17;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v5 != temp_v17) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
      FUN_002bf538();
      afStack_11c[1] = (float)temp_v22;
      temp_v25 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
      temp_v23 = (int)afStack_11c[1];
      temp_v24 = afStack_11c[1];
      FUN_002ae038(afStack_11c + 1);
      FUN_001c0b88(0,0,0x140,0xf0,0xd3);
      temp_v4 = DAT_0044ea00;
      piVar14 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v17 = *piVar14;
      temp_v6 = piVar14[temp_v17 + 2];
      *piVar14 = temp_v17 - 1;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v6 != piVar14[temp_v17 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
      FUN_002bf538();
      FUN_002bed3c();
      temp_v17 = DAT_0044ea00;
      temp_v4 = DAT_0044de2c;
      if ((*(char *)(temp_v26 + 0x55) != '\0') && (*(char *)(temp_v26 + 0x72) == '\0')) {
        temp_v6 = FUN_002c5d80(1,0);
        piVar14 = (int *)(temp_v17 + 0x124c);
        temp_v5 = *piVar14;
        temp_v9 = piVar14[temp_v5 + 2];
        *piVar14 = temp_v5 + 1;
        piVar14[temp_v5 + 3] = temp_v6;
        if (*(char *)(temp_v17 + 0x1264) != '\0' || temp_v9 != temp_v6) {
          (**(romwright_code **)(temp_v17 + 0x1268))();
          *(unsigned char *)(temp_v17 + 0x1264) = 0;
        }
        FUN_002bf538();
        FUN_002bed3c();
        FUN_002bf4f8(0x36,*(unsigned int *)(temp_v4 + 0x50));
        FUN_002bf380(2,0x36,*(unsigned int *)(temp_v4 + 0x50),0,0,0xd3);
        temp_v17 = 0;
        do {
          temp_v6 = FUN_002bf4f8(0x36,temp_v17 + 0x62);
          temp_v2 = *(short *)(temp_v6 + 8);
          puVar23 = (unsigned char *)VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          (&puStack_120)[temp_v17 * 2] = puVar23;
          temp_v3 = *(short *)(temp_v6 + 10);
          temp_v21 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          afStack_11c[temp_v17 * 2] = temp_v21;
          FUN_002bf288(2,0x36,0x5f,(int)temp_v2,(int)temp_v3,0xd3);
          temp_v17 = temp_v17 + 1;
        } while (temp_v17 < 9);
        temp_v8 = (*(int *)(temp_v4 + 0x60) + 1U) & 3;
        *(unsigned int *)(temp_v4 + 0x60) = temp_v8;
        temp_v14 = *(unsigned int *)(temp_v4 + 0x58);
        if (temp_v8 == 0) {
          temp_v14 = temp_v14 + 1;
          *(unsigned int *)(temp_v4 + 0x58) = temp_v14;
        }
        temp_v14 = temp_v14 & 7;
        *(unsigned int *)(temp_v4 + 0x58) = temp_v14;
        temp_v8 = (temp_v14 + 4) & 7;
        temp_v13 = (temp_v14 + 1) & 7;
        temp_v7 = (temp_v8 + 1) & 7;
        FUN_002bf288(2,0x36,0x61,(int)romwright_u2f((unsigned int)((&puStack_120)[temp_v14 * 2])),(int)afStack_11c[temp_v14 * 2]
                     ,0xd3);
        FUN_002bf288(2,0x36,0x60,(int)romwright_u2f((unsigned int)((&puStack_120)[temp_v13 * 2])),(int)afStack_11c[temp_v13 * 2]
                     ,0xd3);
        FUN_002bf288(2,0x36,0x61,(int)romwright_u2f((unsigned int)((&puStack_120)[temp_v8 * 2])),(int)afStack_11c[temp_v8 * 2],
                     0xd3);
        FUN_002bf288(2,0x36,0x60,(int)romwright_u2f((unsigned int)((&puStack_120)[temp_v7 * 2])),(int)afStack_11c[temp_v7 * 2],
                     0xd3);
        temp_v4 = DAT_0044ea00;
        piVar14 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v17 = *piVar14;
        temp_v6 = piVar14[temp_v17 + 2];
        *piVar14 = temp_v17 - 1;
        if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v6 != piVar14[temp_v17 + 1]) {
          (**(romwright_code **)(temp_v4 + 0x1268))();
          *(unsigned char *)(temp_v4 + 0x1264) = 0;
        }
        FUN_002bf538();
      }
    }
  }
  return 0;
}
