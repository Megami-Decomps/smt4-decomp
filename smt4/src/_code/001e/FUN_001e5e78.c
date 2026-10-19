/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e5e78` (_code @ 0x1e5e78, 0x25f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447a78; /* 0x447a78 */
extern int DAT_00447e88; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern signed char DAT_0049fb45; /* 0x49fb45 */
extern signed char DAT_0049fb47; /* 0x49fb47 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_00208c64. */
/* Supplied declaration required: FUN_0025a1fc. */
/* Supplied declaration required: FUN_0025a8d8. */
extern int FUN_0025b408(void);
/* Supplied declaration required: FUN_0025b478. */
extern int FUN_0025b4b0(float *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0027d9a8. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: FUN_00287be4. */
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: FUN_00295ba4. */
/* Supplied declaration required: FUN_002ad314. */
/* Supplied declaration required: FUN_0030fb0c. */
extern short aeabi_idivmod(int, int);


void FUN_001e5e78(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  short temp_v5;
  int *piVar7;
  int temp_v6;
  short temp_v7;
  unsigned char *puVar10;
  unsigned int temp_v8;
  int temp_v9;
  char *pcVar13;
  float *pfVar14;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24 [2];
  char acStack_f8 [20];
  float temp_v25 [4];
  unsigned int uStack_d4;
  int temp_v26;
  float temp_v27;
  unsigned int uStack_c8;
  float temp_v28 [2];
  unsigned int temp_v29;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  
  temp_v4 = DAT_00447a78;
  temp_v30 = 0;
  temp_v31 = 0;
  temp_v29 = 0;
  puVar10 = (unsigned char *)(DAT_00447a78 + 0xcce0);
  piVar7 = (int *)(DAT_00447a78 + 0xcce4);
  if (DAT_0049f934 != '\0') {
    *puVar10 = 1;
    *piVar7 = 2;
  }
  else if (*piVar7 < 1) {
    *piVar7 = 0;
    *puVar10 = 0;
  }
  else {
    *piVar7 = *piVar7 - 1;
    *puVar10 = 1;
  }
  temp_v12 = *(int *)(DAT_004474f4 + 0x58);
  temp_v32 = param_1;
  FUN_00287aec();
  temp_v6 = DAT_00447a78;
  temp_v21 = 0x4248000000000000;
  temp_v22 = 0x3f800000;
  if (temp_v12 >= 0x3f800000) {
    temp_v12 = 0;
    do {
      temp_v9 = temp_v6 + temp_v12 * 0x194;
      if (*(char *)(temp_v9 + 0x1d0) != '\0') {
        temp_v13 = *(unsigned int *)(DAT_00447e88 + 0x1c);
        FUN_00287aec();
        *(unsigned int *)(temp_v9 + 0x218) = temp_v13;
      }
      temp_v9 = DAT_00447a78;
      temp_v16 = (float)((unsigned long long)temp_v21 >> 0x20);
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < 0x80);
    temp_v6 = 0;
    do {
      temp_v12 = temp_v9 + temp_v6 * 0x194;
      temp_v8 = (unsigned int)*(unsigned char *)(temp_v12 + 0x1d0);
      if (temp_v8 != 0) {
        *(unsigned char *)(temp_v12 + 0x21c) = 0;
        acStack_f8[temp_v6] = '\0';
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x80);
    temp_v6 = 0;
    do {
      temp_v12 = temp_v9 + temp_v6 * 0x194;
      pcVar13 = (char *)(temp_v12 + 0x1d0);
      temp_v11 = *pcVar13 != '\0';
      if (temp_v11) {
        temp_v8 = *(unsigned int *)(temp_v12 + 0x1ec);
      }
      if ((temp_v11 && 0 < (int)temp_v8) && (acStack_f8[temp_v6] == '\0')) {
        acStack_f8[temp_v6] = '\x01';
        temp_v12 = temp_v6;
        while (temp_v3 = temp_v12, temp_v12 = temp_v3 + 1, temp_v12 < 0x80) {
          temp_v10 = temp_v9 + temp_v12 * 0x194;
          if ((*(char *)(temp_v10 + 0x1d0) != '\0' && 0 < (int)temp_v8) &&
             (*(int *)(pcVar13 + 0x1c) == *(int *)(temp_v10 + 0x1ec))) {
            acStack_f8[temp_v3 + 1] = '\x01';
            temp_v14 = *(float *)(pcVar13 + 0x48);
            temp_v15 = *(float *)(temp_v10 + 0x218);
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v15) << 0x1f) |
                    ((unsigned int)(temp_v14 == temp_v15) << 0x1e);
            in_fpscr = temp_v0 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v15 != temp_v15)) << 0x1c);
            temp_v2 = (unsigned char)(temp_v0 >> 0x18);
            if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              pcVar13 = (char *)(temp_v10 + 0x1d0);
            }
          }
        }
        pcVar13[0x4c] = '\x01';
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x80);
    temp_v17 = *(float *)(DAT_004474f4 + 0x58) - *(float *)(DAT_004474f4 + 0x4c);
    temp_v15 = *(float *)(DAT_004474f4 + 0x5c) - *(float *)(DAT_004474f4 + 0x50);
    temp_v14 = *(float *)(DAT_004474f4 + 0x60) - *(float *)(DAT_004474f4 + 0x54);
    temp_v19 = (float)temp_v22 / romwright_sqrt_4(temp_v17 * temp_v17 + temp_v15 * temp_v15 + temp_v14 * temp_v14);
    temp_v17 = temp_v17 * temp_v19;
    temp_v21 = CONCAT44(temp_v15 * temp_v19,temp_v14 * temp_v19);
    temp_v8 = *(unsigned int *)(DAT_004474f4 + 0x4c);
    FUN_00287be4();
    temp_v23 = (unsigned long long)temp_v8;
    temp_v14 = 10000.0f;
    temp_v6 = 0;
    do {
      temp_v12 = temp_v4 + temp_v6 * 0x194;
      if (*(char *)(temp_v12 + 0x1d0) != '\0') {
        temp_v19 = *(float *)(temp_v12 + 0x218);
        temp_v15 = temp_v14;
        if (*(int *)(temp_v12 + 0x1e4) < 0x22) {
          temp_v15 = *(float *)(temp_v12 + 0x20c);
        }
        temp_v9 = *(int *)(temp_v12 + 0x214);
        temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < temp_v15) << 0x1f) |
                 ((unsigned int)(temp_v19 == temp_v15) << 0x1e);
        in_fpscr = temp_v8 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
        temp_v2 = (unsigned char)(temp_v8 >> 0x18);
        if (!((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          if (0 < temp_v9) {
            temp_v9 = temp_v9 - 1;
            *(int *)(temp_v12 + 0x214) = temp_v9;
          }
          if (temp_v9 != 0) goto LAB_001e6120;
LAB_001e6260:
          *(unsigned char *)(temp_v12 + 0x212) = 0;
        }
        else {
          if (temp_v9 < 0x10) {
            *(int *)(temp_v12 + 0x214) = temp_v9 + 1;
          }
LAB_001e6120:
          if ((0 >= *(int *)(temp_v12 + 0x1ec)) || (*(char *)(temp_v12 + 0x21c) != '\0')) {
            if (*(int *)(temp_v12 + 0x1ec) == -1) {
              temp_v25[2] = *(float *)(DAT_00447e88 + 0x1c);
              uStack_d4 = *(unsigned int *)(DAT_00447e88 + 0x24);
              temp_v26 = *(unsigned int *)(temp_v12 + 0x22c);
              uStack_c8 = *(unsigned int *)(temp_v12 + 0x234);
              temp_v25[3] = *(float *)(DAT_00447e88 + 0x20) + temp_v16;
              temp_v27 = *(float *)(temp_v12 + 0x230) + temp_v16;
              temp_v9 = FUN_0025b4b0(temp_v25 + 2,(unsigned int *)&temp_v26,0);
              if (temp_v9 != -1) goto LAB_001e6260;
            }
            if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
              *(unsigned char *)(temp_v12 + 0x212) = 1;
            }
            else {
              FUN_00287be4();
              temp_v15 = *(float *)(temp_v12 + 0x22c) - *(float *)(DAT_004474f4 + 0x4c);
              temp_v19 = *(float *)(temp_v12 + 0x230) - *(float *)(DAT_004474f4 + 0x50);
              temp_v18 = *(float *)(temp_v12 + 0x234) - *(float *)(DAT_004474f4 + 0x54);
              temp_v20 = (float)temp_v22 / romwright_sqrt_4(temp_v15 * temp_v15 + temp_v19 * temp_v19 + temp_v18 * temp_v18);
              temp_v8 = (unsigned int)temp_v23;
              temp_v15 = temp_v17 * temp_v15 * temp_v20 +
                       (float)((unsigned long long)temp_v21 >> 0x20) * temp_v19 * temp_v20 +
                       (float)temp_v21 * temp_v18 * temp_v20;
              FUN_00287b0c();
              if ((temp_v8 < 0xc2200000) && ((int)temp_v8 < 0x42200000)) {
                *(unsigned char *)(temp_v12 + 0x212) = 1;
              }
              else {
                *(unsigned char *)(temp_v12 + 0x212) = 0;
              }
              in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)((float)((unsigned long long)temp_v22 >> 0x20) <= temp_v15) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                *(unsigned char *)(temp_v12 + 0x212) = 0;
              }
            }
          }
          else {
            *(unsigned char *)(temp_v12 + 0x212) = 0;
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x80);
  }
  temp_v6 = 0;
  do {
    temp_v12 = temp_v4 + temp_v6 * 0x194;
    pcVar13 = (char *)(temp_v12 + 0x1d0);
    if (*pcVar13 != '\0') {
      temp_v16 = (float)((unsigned long long)temp_v22 >> 0x20);
      switch(*(unsigned int *)(temp_v12 + 0x1d4)) {
      case 0:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0;
        if ((*(int *)(temp_v12 + 500) != -1) && (temp_v9 = FUN_0025b478(), temp_v9 == 0)) {
          *(unsigned int *)(temp_v12 + 0x1d4) = 1;
          break;
        }
        temp_v8 = 2;
        *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        break;
      case 1:
        temp_v9 = FUN_0025b478(*(unsigned int *)(temp_v12 + 500));
        if (temp_v9 != 0) {
          temp_v8 = 2;
          *(unsigned short *)(temp_v12 + 0x1dc) = 0;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
          break;
        }
        *(unsigned short *)(temp_v12 + 0x1dc) = 0;
        *(int *)(temp_v12 + 0x200) = (int)((unsigned long long)temp_v22 >> 0x20);
        if ((DAT_0049fb45 != '\0') && (temp_v9 = FUN_0025b408(), temp_v9 != 0)) {
          temp_v8 = 5;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 2:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0;
        *(float *)(temp_v12 + 0x200) = temp_v16;
        if ((DAT_0049fb45 != '\0') && (temp_v9 = FUN_0025b408(), temp_v9 != 0)) {
          temp_v8 = 6;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 3:
        temp_v31 = 1;
        *(unsigned short *)(temp_v12 + 0x1dc) = 1;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffffff;
        *(short *)(temp_v12 + 0x1f8) = *(short *)(temp_v12 + 0x1f8) + 1;
        if (DAT_0049fb45 == '\0') {
          *(unsigned int *)(temp_v12 + 0x1d4) = 1;
          break;
        }
        temp_v9 = FUN_0025b408();
        if (temp_v9 == 0) {
          if ((DAT_0049fb45 == '\0') || (temp_v9 = FUN_0025b408(), temp_v9 == 0)) {
            *(unsigned int *)(temp_v12 + 0x1d4) = 1;
            break;
          }
          *(unsigned int *)(temp_v12 + 0x1d4) = 5;
        }
        temp_v9 = *(int *)(temp_v12 + 0x1e4);
        if (((!(temp_v9 == 1 || temp_v9 == 3)) && (!(temp_v9 == 2 || temp_v9 == 4))) &&
           (!(temp_v9 == 5 || temp_v9 == 7))) {
          temp_v29 = 0;
          if (*(short *)(temp_v12 + 0x1f8) >= 0x1f) {
            if (*(char *)(temp_v4 + 0xcce0) == '\0') {
              FUN_00291e40(0x10001fe);
            }
            *(unsigned int *)(temp_v12 + 0x1d4) = 4;
            *(unsigned short *)(temp_v12 + 0x1fa) = 0;
          }
        }
        else {
          temp_v29 = 1;
          if (*(short *)(temp_v12 + 0x1f8) >= 0x1f) {
            FUN_00208c64(*(unsigned int *)(temp_v12 + 500));
            temp_v8 = 6;
            *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
          }
        }
        break;
      case 4:
        *(unsigned short *)(temp_v12 + 0x1dc) = 2;
        temp_v31 = 1;
        *(float *)(temp_v12 + 0x200) = temp_v16;
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        temp_v9 = (int)*(short *)(temp_v12 + 0x1fa);
        if (temp_v9 >= 0x11) {
          temp_v9 = 0x10;
        }
        VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0025a8d8(pcVar13);
        if (temp_v9 >= 9) {
          *(unsigned int *)(temp_v12 + 0x254) = 0;
        }
        else {
          *(unsigned int *)(temp_v12 + 0x254) = 0xffffff80;
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0030fb0c(pcVar13,1);
        }
        if (temp_v9 < 6) {
          *(unsigned int *)(temp_v12 + 600) = 0;
        }
        else {
          *(unsigned int *)(temp_v12 + 600) = 0xffffff80;
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0030fb0c(pcVar13,2);
        }
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffffff;
        temp_v7 = *(short *)(temp_v12 + 0x1fa) + 2;
        *(short *)(temp_v12 + 0x1fa) = temp_v7;
        if (temp_v7 >= 0x11) {
          FUN_00208c64(*(unsigned int *)(temp_v12 + 500));
          temp_v8 = 6;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 5:
        temp_v9 = FUN_0025b478(*(unsigned int *)(temp_v12 + 500));
        if (temp_v9 != 0) {
          temp_v8 = 6;
          *(unsigned short *)(temp_v12 + 0x1dc) = 0;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
          break;
        }
        temp_v30 = 1;
        *(unsigned short *)(temp_v12 + 0x1dc) = 3;
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          *(unsigned short *)(temp_v12 + 0x1dc) = 0;
        }
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffffff;
        if (DAT_0049fb45 == '\0') {
          *(unsigned int *)(temp_v12 + 0x1d4) = 1;
          break;
        }
        temp_v9 = FUN_0025b408();
        if (temp_v9 != 0) {
          if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
            if (*(char *)(temp_v4 + 0xcce0) == '\0') {
              FUN_00291e40(0x10001fd);
            }
            FUN_00208c64(*(unsigned int *)(temp_v12 + 500));
            temp_v8 = 6;
            *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
            break;
          }
          if (*(char *)(temp_v4 + 0xcce0) == '\0') {
            FUN_00291e40(0x10001fd);
          }
          *(unsigned int *)(temp_v12 + 0x1d4) = 3;
          *(unsigned short *)(temp_v12 + 0x1f8) = 0;
        }
        else if ((DAT_0049fb45 == '\0') || (temp_v9 = FUN_0025b408(), temp_v9 == 0)) {
          *(unsigned int *)(temp_v12 + 0x1d4) = 1;
        }
        break;
      case 6:
        *(unsigned short *)(temp_v12 + 0x1dc) = 4;
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          *(unsigned short *)(temp_v12 + 0x1dc) = 0x10;
        }
        if (*(int *)(temp_v12 + 0x1d8) != 0) {
          *(float *)(temp_v12 + 0x25c) = temp_v16;
        }
        else {
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          *(float *)(temp_v12 + 0x200) = *(float *)(temp_v12 + 0x200) + 0.2f;
        }
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          FUN_0028250c();
          temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 35.0f + 200.0f;
          if (*(int *)(temp_v12 + 0x1d8) != 0) {
            *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c);
            *(unsigned int *)(temp_v12 + 0x248) = 0x42f00000;
            *(unsigned int *)(temp_v12 + 0x24c) = 0x42f00000;
            *(float *)(temp_v12 + 0x23c) = temp_v16;
            *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234);
          }
          else {
            *(float *)(temp_v12 + 0x238) =
                 *(float *)(temp_v12 + 0x238) +
                 (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
            *(float *)(temp_v12 + 0x23c) =
                 *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * 0.25f;
            *(float *)(temp_v12 + 0x240) =
                 *(float *)(temp_v12 + 0x240) +
                 (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
            *(float *)(temp_v12 + 0x248) =
                 *(float *)(temp_v12 + 0x248) + (120.0f - *(float *)(temp_v12 + 0x248)) * 0.25f;
            *(float *)(temp_v12 + 0x24c) =
                 *(float *)(temp_v12 + 0x24c) + (120.0f - *(float *)(temp_v12 + 0x24c)) * 0.25f;
          }
        }
        else {
          FUN_0028250c();
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) +
               ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        }
        FUN_0025a8d8(pcVar13);
        if (*(int *)(temp_v12 + 0x1d8) != 0) {
          *(unsigned int *)(temp_v12 + 0x1d8) = 0;
        }
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v9 = *(int *)(temp_v12 + 0x1f0);
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        if (((temp_v9 != -3 && temp_v9 != -2) && (temp_v9 != -1 && temp_v9 != 1)) &&
           ((DAT_0049fb45 == '\0' || (temp_v9 = FUN_0025b408(), temp_v9 == 0)))) {
          temp_v8 = 2;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 7:
        *(unsigned short *)(temp_v12 + 0x1dc) = 5;
        if (temp_v32 != 0) {
          *(unsigned short *)(temp_v12 + 0x1fc) = 10;
          *(unsigned int *)(temp_v12 + 0x214) = 0x10;
        }
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          *(unsigned short *)(temp_v12 + 0x1dc) = 0x11;
          temp_v16 = *(float *)(temp_v12 + 0x200);
          FUN_0028250c();
          temp_v9 = (int)*(short *)(temp_v12 + 0x1fc);
          temp_v16 = temp_v16 * 35.0f;
          temp_v14 = *(float *)(temp_v12 + 0x230) + temp_v16;
          if (temp_v9 >= 4) {
            temp_v16 = 300.0f;
          }
          if (temp_v9 < 4) {
            temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 * 75.0f;
          }
          temp_v15 = (float)temp_v22;
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * temp_v15;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) +
               ((temp_v14 + 200.0f + temp_v16) - *(float *)(temp_v12 + 0x23c)) * temp_v15;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * temp_v15;
          if (temp_v32 != 0) {
            *(float *)(temp_v12 + 0x248) =
                 *(float *)(temp_v12 + 0x248) + (168.0f - *(float *)(temp_v12 + 0x248));
            *(float *)(temp_v12 + 0x24c) =
                 *(float *)(temp_v12 + 0x24c) + (168.0f - *(float *)(temp_v12 + 0x24c));
          }
          else {
            *(float *)(temp_v12 + 0x248) =
                 *(float *)(temp_v12 + 0x248) + (168.0f - *(float *)(temp_v12 + 0x248)) * 0.25f;
            *(float *)(temp_v12 + 0x24c) =
                 *(float *)(temp_v12 + 0x24c) + (168.0f - *(float *)(temp_v12 + 0x24c)) * 0.25f;
          }
          if (*(short *)(temp_v12 + 0x1fc) < 4) {
            *(int *)(temp_v12 + 0x350) = (int)((unsigned long long)temp_v22 >> 0x20);
            *(float *)(temp_v12 + 0x25c) =
                 *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          }
          else {
            temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v12 + 0x25c) = temp_v16 * -60.0f;
            VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0025a1fc(pcVar13);
            temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v12 + 0x350) = temp_v16 * 0.16666667f;
          }
        }
        else {
          temp_v16 = *(float *)(temp_v12 + 0x200);
          FUN_0028250c();
          temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
          switch(*(unsigned int *)(temp_v12 + 0x1f0)) {
          case 0:
          case 1:
            if (*(short *)(temp_v12 + 0x1fc) >= 4) {
              temp_v16 = temp_v16 + 55.0f;
            }
            else {
              temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = temp_v16 + temp_v14 * 13.75f;
            }
          }
          temp_v14 = (float)temp_v22;
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * temp_v14;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * temp_v14;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * temp_v14;
          if (*(short *)(temp_v12 + 0x1fc) < 4) {
            *(int *)(temp_v12 + 0x350) = (int)((unsigned long long)temp_v22 >> 0x20);
            *(float *)(temp_v12 + 0x25c) =
                 *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          }
          else {
            temp_v9 = *(short *)(temp_v12 + 0x1fc) - 4;
            if (*(int *)(temp_v12 + 0x1f0) != 0) {
              temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
              *(float *)(temp_v12 + 0x25c) = temp_v16 * -5.0f;
            }
            else {
              temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
              *(float *)(temp_v12 + 0x25c) = temp_v16 * -10.0f;
            }
            VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0025a1fc(pcVar13);
            temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v12 + 0x350) = temp_v16 * 0.16666667f;
          }
        }
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v7 = *(short *)(temp_v12 + 0x1fc) + 1;
        temp_v8 = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        if (temp_v7 >= 11) {
          temp_v8 = 8;
        }
        *(short *)(temp_v12 + 0x1fc) = temp_v7;
        if (temp_v7 >= 11) {
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 8:
        *(unsigned short *)(temp_v12 + 0x1dc) = 6;
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          *(unsigned short *)(temp_v12 + 0x1dc) = 0x11;
        }
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          *(float *)(temp_v12 + 0x200) = *(float *)(temp_v12 + 0x200) + 0.2f;
        }
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          FUN_0028250c();
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) +
               ((*(float *)(temp_v12 + 0x230) + temp_v16 * 35.0f + 500.0f) - *(float *)(temp_v12 + 0x23c)) *
               0.25f;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
          *(unsigned int *)(temp_v12 + 0x25c) = 0xc3b40000;
          *(int *)(temp_v12 + 0x350) = (int)temp_v22;
          *(float *)(temp_v12 + 0x248) =
               *(float *)(temp_v12 + 0x248) + (168.0f - *(float *)(temp_v12 + 0x248)) * 0.25f;
          *(float *)(temp_v12 + 0x24c) =
               *(float *)(temp_v12 + 0x24c) + (168.0f - *(float *)(temp_v12 + 0x24c)) * 0.25f;
          FUN_0025a8d8(pcVar13);
          FUN_0025a1fc(pcVar13);
        }
        else {
          FUN_0028250c();
          temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
          switch(*(unsigned int *)(temp_v12 + 0x1f0)) {
          case 0:
          case 1:
            temp_v16 = temp_v16 + 55.0f;
          }
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * 0.25f;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
          if (*(int *)(temp_v12 + 0x1f0) == 0) {
            temp_v13 = 0xc2700000;
          }
          else {
            temp_v13 = 0xc1f00000;
          }
          *(unsigned int *)(temp_v12 + 0x25c) = temp_v13;
          FUN_0025a8d8(pcVar13);
          FUN_0025a1fc(pcVar13);
        }
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        if (DAT_0049fb47 != '\0') {
          temp_v8 = 0x11;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 9:
        *(unsigned short *)(temp_v12 + 0x1dc) = 7;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        FUN_0028250c();
        temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
        if (*(short *)(temp_v12 + 0x1fc) >= 4) {
          temp_v16 = temp_v16 + 25.0f;
        }
        else {
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = temp_v16 + temp_v14 * 6.25f;
        }
        temp_v14 = (float)temp_v22;
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * temp_v14;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * temp_v14;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * temp_v14;
        temp_v16 = *(float *)(DAT_00447e88 + 0x50) + 180.0f;
        *(float *)(temp_v12 + 0x244) = temp_v16;
        if ((int)temp_v16 >= 0x43b40001) {
          *(float *)(temp_v12 + 0x244) = temp_v16 - 360.0f;
        }
        *(unsigned int *)(temp_v12 + 0x1e0) = 1;
        if (*(short *)(temp_v12 + 0x1fc) < 4) {
          temp_v15 = 0.25f;
          *(int *)(temp_v12 + 0x350) = (int)((unsigned long long)temp_v22 >> 0x20);
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          FUN_002ad314(temp_v24,temp_v28);
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 90.0f * temp_v15 * temp_v16;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x234) + temp_v28[0] * 90.0f * temp_v15 * temp_v14;
        }
        else {
          temp_v14 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x25c) = temp_v14 * -10.0f;
          *(float *)(temp_v12 + 0x350) = temp_v16 * 0.16666667f;
          FUN_002ad314(temp_v24,temp_v28);
          *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 90.0f;
          *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 90.0f;
          VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0025a1fc(pcVar13);
        }
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        *(unsigned int *)(temp_v12 + 0x1e0) = 0;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v7 = *(short *)(temp_v12 + 0x1fc) + 1;
        temp_v8 = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        if (temp_v7 >= 11) {
          temp_v8 = 10;
        }
        *(short *)(temp_v12 + 0x1fc) = temp_v7;
        if (temp_v7 >= 11) {
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 10:
        *(unsigned short *)(temp_v12 + 0x1dc) = 8;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f + 25.0f) - *(float *)(temp_v12 + 0x23c)) *
             0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        *(unsigned int *)(temp_v12 + 0x25c) = 0xc2700000;
        temp_v16 = *(float *)(DAT_00447e88 + 0x50) + 180.0f;
        *(float *)(temp_v12 + 0x244) = temp_v16;
        if ((int)temp_v16 >= 0x43b40001) {
          *(float *)(temp_v12 + 0x244) = temp_v16 - 360.0f;
        }
        FUN_002ad314(temp_v24,temp_v28);
        *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 90.0f;
        *(unsigned int *)(temp_v12 + 0x1e0) = 1;
        *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 90.0f;
        FUN_0025a8d8(pcVar13);
        FUN_0025a1fc(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        *(unsigned int *)(temp_v12 + 0x1e0) = 0;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v9 = *(int *)(temp_v12 + 0x214);
        temp_v8 = temp_v9 * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        break;
      case 0xb:
        *(unsigned short *)(temp_v12 + 0x1dc) = 9;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        FUN_0028250c();
        temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
        if (*(short *)(temp_v12 + 0x1fc) >= 4) {
          temp_v16 = temp_v16 + 35.0f;
        }
        else {
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = temp_v16 + temp_v14 * 8.75f;
        }
        temp_v14 = (float)temp_v22;
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * temp_v14;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * temp_v14;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * temp_v14;
        temp_v16 = *(float *)(DAT_00447e88 + 0x50) + 180.0f;
        *(float *)(temp_v12 + 0x244) = temp_v16;
        if ((int)temp_v16 >= 0x43b40001) {
          *(float *)(temp_v12 + 0x244) = temp_v16 - 360.0f;
        }
        if (*(short *)(temp_v12 + 0x1fc) < 4) {
          temp_v15 = 0.25f;
          *(int *)(temp_v12 + 0x350) = (int)((unsigned long long)temp_v22 >> 0x20);
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          FUN_002ad314(temp_v24,temp_v28);
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 30.0f * temp_v15 * temp_v14;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x234) + temp_v28[0] * 30.0f * temp_v15 * temp_v16;
        }
        else {
          temp_v14 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x25c) = temp_v14 * -9.166667f;
          *(float *)(temp_v12 + 0x350) = temp_v16 * 0.16666667f;
          FUN_002ad314(temp_v24,temp_v28);
          *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 30.0f;
          *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 30.0f;
          VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0025a1fc(pcVar13);
        }
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v7 = *(short *)(temp_v12 + 0x1fc) + 1;
        temp_v8 = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        if (temp_v7 >= 11) {
          temp_v8 = 0xc;
        }
        *(short *)(temp_v12 + 0x1fc) = temp_v7;
        goto joined_r0x001e7e00;
      case 0xc:
        *(unsigned short *)(temp_v12 + 0x1dc) = 10;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f + 35.0f) - *(float *)(temp_v12 + 0x23c)) *
             0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        *(unsigned int *)(temp_v12 + 0x25c) = 0xc25c0000;
        temp_v16 = *(float *)(DAT_00447e88 + 0x50) + 180.0f;
        *(float *)(temp_v12 + 0x244) = temp_v16;
        if ((int)temp_v16 >= 0x43b40001) {
          *(float *)(temp_v12 + 0x244) = temp_v16 - 360.0f;
        }
        FUN_002ad314(temp_v24,temp_v28);
        *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 30.0f;
        *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 30.0f;
        FUN_0025a8d8(pcVar13);
        FUN_0025a1fc(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v9 = *(int *)(temp_v12 + 0x214);
        temp_v8 = temp_v9 * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        break;
      case 0xd:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0xb;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        FUN_0028250c();
        temp_v14 = (float)temp_v22;
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * temp_v14;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * temp_v14;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * temp_v14;
        if (*(short *)(temp_v12 + 0x1fc) < 4) {
          temp_v15 = 0.25f;
          *(int *)(temp_v12 + 0x350) = (int)((unsigned long long)temp_v22 >> 0x20);
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          FUN_002ad314(temp_v24,temp_v28);
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v12 + 0x1fc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 200.0f * temp_v15 * temp_v14;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x234) + temp_v28[0] * 200.0f * temp_v15 * temp_v16;
        }
        else {
          temp_v14 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v12 + 0x25c) = temp_v14 * -11.666667f;
          *(float *)(temp_v12 + 0x350) = temp_v16 * 0.16666667f;
          FUN_002ad314(temp_v24,temp_v28);
          *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 200.0f;
          *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 200.0f;
          VectorSignedToFloat(*(short *)(temp_v12 + 0x1fc) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0025a1fc(pcVar13);
        }
        FUN_0025a8d8(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v7 = *(short *)(temp_v12 + 0x1fc) + 1;
        temp_v8 = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        if (temp_v7 >= 11) {
          temp_v8 = 0xe;
        }
        *(short *)(temp_v12 + 0x1fc) = temp_v7;
joined_r0x001e7e00:
        if (temp_v7 < 0xb) break;
        *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        break;
      case 0xe:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0xc;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) +
             ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        *(unsigned int *)(temp_v12 + 0x25c) = 0xc28c0000;
        FUN_002ad314(temp_v24,temp_v28);
        *(float *)(temp_v12 + 0x238) = *(float *)(temp_v12 + 0x22c) + temp_v24[0] * 200.0f;
        *(float *)(temp_v12 + 0x240) = *(float *)(temp_v12 + 0x234) + temp_v28[0] * 200.0f;
        FUN_0025a8d8(pcVar13);
        FUN_0025a1fc(pcVar13);
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v8 = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        break;
      case 0xf:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0xd;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        FUN_0028250c();
        temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
        switch(*(unsigned int *)(temp_v12 + 0x1f0)) {
        case 0:
        case 1:
          temp_v16 = temp_v16 + 55.0f;
        }
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        FUN_0025a8d8(pcVar13);
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v7 = *(short *)(temp_v12 + 0x1fc) + 2;
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | 0xffffff00;
        *(short *)(temp_v12 + 0x1fc) = temp_v7;
        if (temp_v7 >= 0xd) {
          temp_v8 = 0x10;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 0x10:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0xe;
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          temp_v16 = temp_v16 + 0.2f;
          *(float *)(temp_v12 + 0x200) = temp_v16;
        }
        FUN_0028250c();
        temp_v16 = *(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f;
        switch(*(unsigned int *)(temp_v12 + 0x1f0)) {
        case 0:
        case 1:
          temp_v16 = temp_v16 + 55.0f;
        }
        *(float *)(temp_v12 + 0x238) =
             *(float *)(temp_v12 + 0x238) +
             (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
        *(float *)(temp_v12 + 0x23c) =
             *(float *)(temp_v12 + 0x23c) + (temp_v16 - *(float *)(temp_v12 + 0x23c)) * 0.25f;
        *(float *)(temp_v12 + 0x240) =
             *(float *)(temp_v12 + 0x240) +
             (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
        FUN_0025a8d8(pcVar13);
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        temp_v8 = temp_v8 | 0xffffff00;
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8;
        break;
      case 0x11:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0xf;
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          *(unsigned short *)(temp_v12 + 0x1dc) = 0x12;
        }
        if (*(int *)(temp_v12 + 0x1d8) == 0) {
          *(float *)(temp_v12 + 0x200) = *(float *)(temp_v12 + 0x200) + 0.2f;
        }
        temp_v16 = *(float *)(temp_v12 + 0x200);
        if (*(int *)(temp_v12 + 0x1e4) >= 0x22) {
          FUN_0028250c();
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) +
               ((*(float *)(temp_v12 + 0x230) + temp_v16 * 35.0f + 200.0f) - *(float *)(temp_v12 + 0x23c)) *
               0.25f;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          *(int *)(temp_v12 + 0x350) = (int)temp_v22;
          *(float *)(temp_v12 + 0x248) =
               *(float *)(temp_v12 + 0x248) + (120.0f - *(float *)(temp_v12 + 0x248)) * 0.25f;
          *(float *)(temp_v12 + 0x24c) =
               *(float *)(temp_v12 + 0x24c) + (120.0f - *(float *)(temp_v12 + 0x24c)) * 0.25f;
          FUN_0025a8d8(pcVar13);
        }
        else {
          FUN_0028250c();
          *(float *)(temp_v12 + 0x238) =
               *(float *)(temp_v12 + 0x238) +
               (*(float *)(temp_v12 + 0x22c) - *(float *)(temp_v12 + 0x238)) * 0.25f;
          *(float *)(temp_v12 + 0x23c) =
               *(float *)(temp_v12 + 0x23c) +
               ((*(float *)(temp_v12 + 0x230) + temp_v16 * 5.0f) - *(float *)(temp_v12 + 0x23c)) * 0.25f;
          *(float *)(temp_v12 + 0x240) =
               *(float *)(temp_v12 + 0x240) +
               (*(float *)(temp_v12 + 0x234) - *(float *)(temp_v12 + 0x240)) * 0.25f;
          *(float *)(temp_v12 + 0x25c) =
               *(float *)(temp_v12 + 0x25c) - *(float *)(temp_v12 + 0x25c) * 0.25f;
          FUN_0025a8d8(pcVar13);
        }
        *(unsigned int *)(temp_v12 + 0x250) = 0xffffff00;
        if ((0 < *(int *)(temp_v12 + 0x1e8)) && (*(char *)(temp_v12 + 0x211) != '\0')) {
          *(unsigned int *)(temp_v12 + 0x250) = 0x40404000;
        }
        temp_v8 = *(int *)(temp_v12 + 0x214) * 0x10;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(unsigned int *)(temp_v12 + 0x250) = temp_v8 | *(unsigned int *)(temp_v12 + 0x250);
        if (DAT_0049fb47 == '\0') {
          temp_v8 = 6;
          *(unsigned int *)(temp_v12 + 0x1d4) = temp_v8;
        }
        break;
      case 0x12:
        *(unsigned short *)(temp_v12 + 0x1dc) = 0;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x80);
  if (temp_v32 != 0) {
    return;
  }
  if (*(int *)(temp_v4 + 0x30) != 1) {
    if (*(int *)(temp_v4 + 0x30) == 2) {
      temp_v6 = *(int *)(temp_v4 + 0x38);
      if (temp_v6 >= 1) {
        *(int *)(temp_v4 + 0x38) = temp_v6 - 1;
      }
      else {
        temp_v6 = *(int *)(temp_v4 + 0x34) + 0x10;
        *(int *)(temp_v4 + 0x34) = temp_v6;
        if (temp_v6 >= 0x100) {
          temp_v6 = 0xff;
        }
        *(int *)(temp_v4 + 0x34) = temp_v6;
      }
    }
  }
  else {
    temp_v6 = *(int *)(temp_v4 + 0x38);
    if (temp_v6 < 1) {
      temp_v6 = *(int *)(temp_v4 + 0x34) - 0x10;
      *(int *)(temp_v4 + 0x34) = temp_v6;
      if (temp_v6 < 1) {
        *(unsigned int *)(temp_v4 + 0x34) = 0;
        *(unsigned int *)(temp_v4 + 0x30) = 0;
      }
    }
    else {
      *(int *)(temp_v4 + 0x38) = temp_v6 - 1;
    }
  }
  if ((*(char *)(temp_v4 + 0x18) != '\0') &&
     (temp_v6 = *(int *)(temp_v4 + 0x1c) + 1, *(int *)(temp_v4 + 0x1c) = temp_v6, temp_v6 >= 0x5b)) {
    *(unsigned char *)(temp_v4 + 0x18) = 0;
    FUN_00295ba4(1);
  }
  temp_v4 = DAT_00447e88;
  if (temp_v30 == 0) {
    *(unsigned char *)(DAT_00447e88 + 0x180) = 0;
  }
  else {
    if (*(char *)(DAT_00447e88 + 0x180) == '\0') {
      *(unsigned char *)(DAT_00447e88 + 0x181) = 1;
    }
    *(unsigned char *)(temp_v4 + 0x180) = 1;
  }
  temp_v4 = DAT_00447e88;
  if (temp_v31 == 0) {
    *(unsigned char *)(DAT_00447e88 + 0x182) = 0;
  }
  else {
    if (*(char *)(DAT_00447e88 + 0x182) == '\0') {
      *(char *)(DAT_00447e88 + 0x184) = (char)temp_v29;
      *(unsigned char *)(temp_v4 + 0x183) = 1;
    }
    *(unsigned char *)(temp_v4 + 0x182) = 1;
  }
  temp_v4 = DAT_00447a78;
  temp_v24[1] = 0.6f;
  acStack_f8[0] = -0x66;
  acStack_f8[1] = -0x67;
  acStack_f8[2] = '\x19';
  acStack_f8[3] = '?';
  acStack_f8[4] = -0x66;
  acStack_f8[5] = -0x67;
  acStack_f8[6] = '\x19';
  acStack_f8[7] = '?';
  if (*(char *)(DAT_00447a78 + 0xccc0) != '\0') {
    if (*(short *)(DAT_00447a78 + 0xccc2) == 0) {
      *(unsigned char *)(DAT_00447a78 + 0xccc0) = 0;
    }
    else {
      temp_v14 = 0.5f;
      temp_v21 = 0x40000000;
      temp_v6 = 0;
      temp_v16 = (float)VectorSignedToFloat((int)*(short *)(DAT_00447a78 + 0xccc4),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v25[0] = temp_v16 * 0.01f;
      temp_v16 = (float)VectorSignedToFloat((int)*(short *)(DAT_00447a78 + 0xccc6),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v25[1] = temp_v16 * 0.01f;
      temp_v16 = (float)VectorSignedToFloat((int)*(short *)(DAT_00447a78 + 0xccc8),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v25[2] = temp_v16 * 0.01f;
      do {
        pfVar14 = temp_v25 + temp_v6;
        temp_v16 = *pfVar14;
        if (temp_v16 != (float)((unsigned long long)temp_v22 >> 0x20)) {
          FUN_0027d9a8();
          temp_v17 = *pfVar14;
          temp_v12 = temp_v4 + temp_v6 * 4;
          temp_v15 = *(float *)(temp_v12 + 0xcccc);
          temp_v16 = temp_v16 * temp_v14 * temp_v17 + temp_v17 * temp_v14;
          if (romwright_fabs_4(temp_v15) >= temp_v17 * temp_v24[temp_v6 + 1]) {
            if (temp_v15 <= (float)((unsigned long long)temp_v22 >> 0x20)) {
              temp_v15 = temp_v15 + temp_v16;
            }
            else {
              temp_v15 = temp_v15 - temp_v16;
            }
            *(float *)(temp_v12 + 0xcccc) = temp_v15;
          }
          else {
            FUN_0027d9a8();
            *(float *)(temp_v12 + 0xcccc) =
                 *(float *)(temp_v12 + 0xcccc) + (temp_v15 - temp_v14) * temp_v16 * (float)temp_v21;
          }
          temp_v16 = -*pfVar14;
          if (-*pfVar14 < *(float *)(temp_v12 + 0xcccc)) {
            temp_v16 = *(float *)(temp_v12 + 0xcccc);
          }
          *(float *)(temp_v12 + 0xcccc) = temp_v16;
          if (*pfVar14 < temp_v16) {
            temp_v16 = *pfVar14;
          }
          *(float *)(temp_v12 + 0xcccc) = temp_v16;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v7 = *(short *)(temp_v4 + 0xccc2);
      temp_v6 = (int)temp_v7;
      if (0 < temp_v6) {
        temp_v1 = *(short *)(temp_v4 + 0xccc4);
        temp_v5 = aeabi_idivmod((int)temp_v1,temp_v6 + 5);
        *(short *)(temp_v4 + 0xccc4) = temp_v1 - temp_v5;
        temp_v1 = *(short *)(temp_v4 + 0xccc6);
        temp_v5 = aeabi_idivmod((int)temp_v1,temp_v6 + 5);
        *(short *)(temp_v4 + 0xccc6) = temp_v1 - temp_v5;
        temp_v1 = *(short *)(temp_v4 + 0xccc8);
        temp_v5 = aeabi_idivmod((int)temp_v1,temp_v6 + 5);
        *(short *)(temp_v4 + 0xccc8) = temp_v1 - temp_v5;
        *(short *)(temp_v4 + 0xccc2) = temp_v7 - 1;
        return;
      }
    }
  }
  else {
    temp_v13 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
    *(unsigned int *)(DAT_00447a78 + 0xcccc) = temp_v13;
    *(unsigned int *)(temp_v4 + 0xccd0) = temp_v13;
    *(unsigned int *)(temp_v4 + 0xccd4) = temp_v13;
  }
  return;
}
