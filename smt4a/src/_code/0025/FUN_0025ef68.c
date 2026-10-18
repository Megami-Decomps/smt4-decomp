/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ef68` (_code @ 0x25ef68, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

extern unsigned int DAT_00580208; /* 0x580208 */
extern unsigned int DAT_0058020c; /* 0x58020c */
extern unsigned int DAT_00580210; /* 0x580210 */
extern unsigned int DAT_00580214; /* 0x580214 */
extern int DAT_0058021c; /* 0x58021c */
extern int DAT_00580220; /* 0x580220 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */
extern unsigned char DAT_005ecf14; /* 0x5ecf14 */
extern unsigned char DAT_005ed114; /* 0x5ed114 */
extern unsigned char DAT_005ed294; /* 0x5ed294 */
extern unsigned char DAT_005ed334; /* 0x5ed334 */
extern int DAT_005f1c4c; /* 0x5f1c4c */
extern int DAT_005f1c50; /* 0x5f1c50 */

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
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002c28dc. */


unsigned int FUN_0025ef68(float *param_1,float *param_2,int param_3)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float *temp_v20;
  float *temp_v21;
  int temp_v22;
  
  temp_v4 = -1;
  temp_v18 = 0;
  temp_v6 = *param_2;
  temp_v8 = param_2[1];
  temp_v9 = param_2[2];
  temp_v19 = *param_1;
  temp_v12 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
  temp_v5 = param_1[1];
  temp_v13 = param_1[2];
  temp_v16 = romwright_piece_4_4(param_1[1],param_1[2]);
  DAT_005f1c4c = -1;
  DAT_005f1c50 = -1;
  if (0 < (int)DAT_00580208) {
    puVar1 = (unsigned char *)0x5ecf13;
    if ((DAT_00580208 & 1) != 0) {
      DAT_005ecf14 = 0;
      puVar1 = &DAT_005ecf14;
    }
    for (temp_v0 = (int)DAT_00580208 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_0058020c) {
    puVar1 = (unsigned char *)0x5ed113;
    if ((DAT_0058020c & 1) != 0) {
      DAT_005ed114 = 0;
      puVar1 = &DAT_005ed114;
    }
    for (temp_v0 = (int)DAT_0058020c >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_00580210) {
    puVar1 = (unsigned char *)0x5ed293;
    if ((DAT_00580210 & 1) != 0) {
      DAT_005ed294 = 0;
      puVar1 = &DAT_005ed294;
    }
    for (temp_v0 = (int)DAT_00580210 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_00580214) {
    puVar1 = (unsigned char *)0x5ed333;
    if ((DAT_00580214 & 1) != 0) {
      DAT_005ed334 = 0;
      puVar1 = &DAT_005ed334;
    }
    for (temp_v0 = (int)DAT_00580214 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  temp_v8 = temp_v5 - temp_v8;
  temp_v9 = temp_v13 - temp_v9;
  if ((int)romwright_sqrt_4((temp_v19 - temp_v6) * (temp_v19 - temp_v6) + temp_v8 * temp_v8 + temp_v9 * temp_v9) <
      0x3c23d70a) {
    return 1;
  }
  temp_v0 = 0;
  temp_v6 = 25.0f;
  temp_v14 = CONCAT44(temp_v5 + 15.0f,temp_v13);
  temp_v15 = 0x4270000042480000;
  temp_v5 = 0.0f;
  temp_v20 = param_1;
  temp_v21 = param_2;
  temp_v22 = param_3;
  do {
    temp_v12 = CONCAT44((int)((unsigned long long)temp_v12 >> 0x20),temp_v6);
    temp_v1 = DAT_0058021c;
    temp_v3 = DAT_00580208;
LAB_0025f158:
    temp_v2 = 0;
    if (0 < (int)temp_v3) {
      do {
        if (*(char *)(temp_v1 + 8) != '\0') {
          temp_v9 = ((float)((unsigned long long)temp_v12 >> 0x20) * *(float *)(temp_v1 + 0xc) +
                    (float)((unsigned long long)temp_v14 >> 0x20) * *(float *)(temp_v1 + 0x10) +
                   (float)temp_v14 * *(float *)(temp_v1 + 0x14)) - *(float *)(temp_v1 + 0x18);
          temp_v8 = romwright_fabs_4(temp_v9);
          if ((temp_v8 < (float)temp_v12) &&
             (FUN_002c28dc(&temp_v17,(int)*(char *)(temp_v1 + 4),(int)*(char *)(temp_v1 + 5),temp_v1),
             temp_v5 <= temp_v17)) {
            temp_v10 = (float)temp_v14 - *(float *)(temp_v1 + 0x14) * temp_v9;
            temp_v13 = (float)((unsigned long long)temp_v12 >> 0x20) - *(float *)(temp_v1 + 0xc) * temp_v9;
            temp_v7 = (float)((unsigned long long)temp_v14 >> 0x20) - *(float *)(temp_v1 + 0x10) * temp_v9;
            temp_v11 = (float)temp_v12;
            if (*(char *)(temp_v1 + 4) != '\x01') {
              if (temp_v0 == 2) {
                (&DAT_005ed294)[temp_v2] = 1;
              }
              else if (temp_v0 == 3) {
                (&DAT_005ed334)[temp_v2] = 1;
              }
              if (temp_v5 <= temp_v9) {
                if (temp_v17 < temp_v8) {
                  temp_v17 = temp_v8;
                }
                temp_v12 = CONCAT44(temp_v13 + *(float *)(temp_v1 + 0xc) * temp_v17,temp_v11);
                temp_v14 = CONCAT44(temp_v7 + *(float *)(temp_v1 + 0x10) * temp_v17,
                                  temp_v10 + *(float *)(temp_v1 + 0x14) * temp_v17);
              }
            }
            else {
              DAT_005f1c4c = temp_v0;
              DAT_005f1c50 = temp_v2;
              if (temp_v0 == 0) {
                puVar1 = &DAT_005ecf14;
                puVar1[temp_v2] = 1;
              }
              else if (temp_v0 == 1) {
                puVar1 = &DAT_005ed114;
                puVar1[temp_v2] = 1;
              }
              if ((-1 < temp_v4) && (temp_v17 < temp_v8)) {
                temp_v17 = temp_v8;
              }
              temp_v18 = 1;
              temp_v12 = CONCAT44(temp_v13 + *(float *)(temp_v1 + 0xc) * temp_v17,temp_v11);
              temp_v14 = CONCAT44(temp_v7 + *(float *)(temp_v1 + 0x10) * temp_v17,
                                temp_v10 + *(float *)(temp_v1 + 0x14) * temp_v17);
              if (temp_v17 == temp_v11) {
                temp_v4 = temp_v2;
              }
            }
          }
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = temp_v1 + 0xa8;
      } while (temp_v2 < (int)temp_v3);
    }
    temp_v0 = temp_v0 + 1;
    temp_v9 = (float)((unsigned long long)temp_v12 >> 0x20);
    if (temp_v0 >= 4) {
      *temp_v20 = temp_v9;
      temp_v20[1] = (float)((unsigned long long)temp_v14 >> 0x20) - temp_v6;
      temp_v20[2] = (float)temp_v14;
      *temp_v21 = temp_v19;
      temp_v21[1] = (float)((unsigned long long)temp_v16 >> 0x20);
      temp_v21[2] = (float)temp_v16;
      return temp_v18;
    }
  } while (temp_v0 == 0);
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      temp_v1 = DAT_00580228;
      temp_v3 = DAT_00580214;
      if (temp_v22 != 0) {
        temp_v12 = CONCAT44(temp_v9,(int)temp_v15);
      }
      else {
        temp_v12 = CONCAT44(temp_v9,(int)((unsigned long long)temp_v15 >> 0x20));
      }
    }
    else {
      temp_v1 = DAT_00580224;
      temp_v3 = DAT_00580210;
      if (temp_v22 != 0) {
        temp_v12 = CONCAT44(temp_v9,(int)temp_v15);
      }
      else {
        temp_v12 = CONCAT44(temp_v9,(int)((unsigned long long)temp_v15 >> 0x20));
      }
    }
  }
  else {
    temp_v12 = CONCAT44(temp_v9,temp_v6);
    temp_v1 = DAT_00580220;
    temp_v3 = DAT_0058020c;
  }
  goto LAB_0025f158;
}
