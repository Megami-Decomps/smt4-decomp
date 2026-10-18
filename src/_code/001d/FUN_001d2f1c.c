/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2f1c` (_code @ 0x1d2f1c, 0x490 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern int *DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447600; /* 0x447600 */
extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern signed char DAT_0049f93c; /* 0x49f93c */
extern signed char DAT_0049f93e; /* 0x49f93e */
extern int DAT_0049fadc; /* 0x49fadc */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern int DAT_0049fc80; /* 0x49fc80 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00208ce8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287d74. */
/* Supplied declaration required: FUN_00287e4c. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_002a5a54. */
/* Supplied declaration required: FUN_0031d624. */


void FUN_001d2f1c(void)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned int temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  int temp_v23;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  temp_v2 = DAT_00447600;
  if (DAT_0049fc80 != 0) {
    return;
  }
  if (DAT_0049f93e != '\0') {
    temp_v3 = 0;
    do {
      temp_v4 = temp_v2 + temp_v3 * 0x180;
      if ((*(char *)(temp_v4 + 0x34) != '\0') && (*(char *)(temp_v4 + 0x1b0) != '\0')) {
        puVar6 = *(unsigned int **)(temp_v4 + 0x1ac);
        if ((*puVar6 & 2) == 0) {
          *puVar6 = *puVar6 | 2;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
    return;
  }
  if ((*DAT_004474f4 == 3) || (*(char *)(DAT_00447e58 + 0xe3c) != '\0')) {
    temp_v3 = 0;
    do {
      temp_v4 = temp_v2 + temp_v3 * 0x180;
      if ((*(char *)(temp_v4 + 0x34) != '\0') && (*(char *)(temp_v4 + 0x1b0) != '\0')) {
        puVar6 = *(unsigned int **)(temp_v4 + 0x1ac);
        if ((*puVar6 & 2) == 0) {
          *puVar6 = *puVar6 | 2;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
    return;
  }
  temp_v20 = 0;
  temp_v8 = DAT_0049fc64 == '\0';
  temp_v1 = DAT_0049fc64;
  if (temp_v8) {
    temp_v1 = DAT_0049f934;
  }
  temp_v9 = temp_v8 && temp_v1 == '\0';
  if (temp_v8 && temp_v1 == '\0') {
    temp_v9 = DAT_0049f93c == '\0';
  }
  if (temp_v9) {
    FUN_0031d624();
    temp_v3 = DAT_00447e88;
    temp_v18 = 0.017453292f;
    temp_v5 = *(unsigned int *)(DAT_00447e88 + 0x2c);
    temp_v6 = *(unsigned int *)(DAT_00447e88 + 0x30);
    *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(DAT_00447e88 + 0x28);
    *(unsigned int *)(temp_v2 + 0x18) = temp_v5;
    *(unsigned int *)(temp_v2 + 0x1c) = temp_v6;
    *(unsigned int *)(temp_v2 + 0x20) = *(unsigned int *)(temp_v3 + 0x7c);
    temp_v10 = *(float *)(temp_v3 + 0x50);
    *(float *)(temp_v2 + 0x24) = temp_v10;
    temp_v10 = temp_v10 * 0.017453292f;
    FUN_0028277c();
    *(float *)(temp_v2 + 0x28) = temp_v10 * *(float *)(temp_v2 + 0x20);
    *(unsigned int *)(temp_v2 + 0x2c) = temp_v20;
    temp_v18 = *(float *)(temp_v2 + 0x24) * temp_v18;
    FUN_00282600();
    *(float *)(temp_v2 + 0x30) = temp_v18 * *(float *)(temp_v2 + 0x20);
    if (0 < DAT_0049fadc) {
      DAT_0049fadc = DAT_0049fadc - 1;
    }
    FUN_00208ce8();
  }
  temp_v3 = DAT_00447600;
  temp_v21 = romwright_piece_4_4(0x3f800000,temp_v20);
  temp_v18 = (float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15];
  temp_v10 = 40.0f;
  temp_v13 = (float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13];
  temp_v12 = (float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14];
  temp_v15 = 1.0f / romwright_sqrt_4(temp_v13 * temp_v13 + temp_v12 * temp_v12 + temp_v18 * temp_v18);
  temp_v13 = temp_v13 * temp_v15;
  temp_v19 = CONCAT44(temp_v18 * temp_v15,temp_v12 * temp_v15);
  temp_v11 = DAT_004474f4[0x13];
  FUN_00287e4c();
  temp_v22 = (unsigned long long)temp_v11;
  if (DAT_0049f91c != 0x19) {
    if ((((DAT_0049f91c == 0x1a) || (DAT_0049f91c == 0x1b)) || (DAT_0049f91c == 0x1c)) &&
       (DAT_0049f920 == 1)) {
      temp_v10 = 60.0f;
    }
  }
  else if (DAT_0049f920 == 3) {
    temp_v10 = 60.0f;
  }
  temp_v4 = 0;
  temp_v18 = -temp_v10;
  do {
    temp_v7 = temp_v3 + temp_v4 * 0x180;
    if (*(char *)(temp_v7 + 0x34) != '\0') {
      FUN_00287e4c();
      temp_v16 = *(float *)(temp_v7 + 0x54) - (float)DAT_004474f4[0x13];
      temp_v12 = *(float *)(temp_v7 + 0x58) - (float)DAT_004474f4[0x14];
      temp_v14 = *(float *)(temp_v7 + 0x5c) - (float)DAT_004474f4[0x15];
      temp_v17 = (float)((unsigned long long)temp_v21 >> 0x20) /
               romwright_sqrt_4(temp_v16 * temp_v16 + temp_v12 * temp_v12 + temp_v14 * temp_v14);
      temp_v15 = (float)temp_v22;
      temp_v12 = temp_v13 * temp_v16 * temp_v17 + (float)temp_v19 * temp_v12 * temp_v17 +
               (float)((unsigned long long)temp_v19 >> 0x20) * temp_v14 * temp_v17;
      FUN_00287d74();
      temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v18) << 0x1f) |
               ((unsigned int)(temp_v15 == temp_v18) << 0x1e);
      *(float *)(temp_v7 + 0xb4) = temp_v15;
      temp_v0 = (unsigned char)(temp_v11 >> 0x18);
      if ((!((unsigned char)((temp_v0 >> 6) & 1) || (unsigned char)(temp_v0 >> 7) != (NAN(temp_v15) || NAN(temp_v18)))) &&
         (temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v15) << 0x1d),
         !romwright_subpiece_4_1_0(temp_v11 >> 0x1d,0))) {
        *(unsigned char *)(temp_v7 + 0xb2) = 1;
      }
      else {
        *(unsigned char *)(temp_v7 + 0xb2) = 0;
      }
      in_fpscr = (temp_v11 & 0xfffffff) | ((unsigned int)((float)temp_v21 <= temp_v12) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        *(unsigned char *)(temp_v7 + 0xb2) = 0;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  temp_v3 = 0;
  do {
    temp_v4 = temp_v2 + temp_v3 * 0x180;
    if ((*(char *)(temp_v4 + 0x34) != '\0') && (*(char *)(temp_v4 + 0x1b0) != '\0')) {
      temp_v8 = *(char *)(temp_v4 + 0xb2) == '\0';
      temp_v7 = 0;
      if (!temp_v8) {
        temp_v7 = *(int *)(temp_v4 + 0xb8);
      }
      if (!(temp_v8 || temp_v7 == 0x13)) {
        temp_v23 = *(unsigned int *)(temp_v4 + 0x54);
        uStack_54 = *(unsigned int *)(temp_v4 + 0x58);
        uStack_50 = *(unsigned int *)(temp_v4 + 0x5c);
        puVar6 = *(unsigned int **)(temp_v4 + 0x1ac);
        if ((*puVar6 & 2) != 0) {
          *puVar6 = *puVar6 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 1;
        }
        FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v4 + 0x1ac) + 8),0,&temp_v23);
        FUN_0028c880(*(unsigned int *)(*(int *)(temp_v4 + 0x1ac) + 8),0);
        if (*(int *)(temp_v4 + 100) != *(int *)(temp_v4 + 0x68)) {
          *(int *)(temp_v4 + 0x68) = *(int *)(temp_v4 + 100);
          FUN_002a5a54(*(unsigned int *)(*(int *)(temp_v4 + 0x1ac) + 8),*(unsigned int *)(temp_v4 + 100));
          VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x6c),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0029bdb4(*(unsigned int *)(*(int *)(temp_v4 + 0x1ac) + 8));
        }
      }
      else {
        puVar6 = *(unsigned int **)(temp_v4 + 0x1ac);
        if ((*puVar6 & 2) == 0) {
          *puVar6 = *puVar6 | 2;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x20);
  return;
}
