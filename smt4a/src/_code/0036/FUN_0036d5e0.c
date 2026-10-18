/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d5e0` (_code @ 0x36d5e0, 0x378 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned int DAT_00580208; /* 0x580208 */
extern unsigned int DAT_0058020c; /* 0x58020c */
extern unsigned int DAT_00580210; /* 0x580210 */
extern unsigned int DAT_00580214; /* 0x580214 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */
extern unsigned char DAT_005ecf14; /* 0x5ecf14 */
extern unsigned char DAT_005ed114; /* 0x5ed114 */
extern unsigned char DAT_005ed294; /* 0x5ed294 */
extern unsigned char DAT_005ed334; /* 0x5ed334 */
extern int DAT_005f1c4c; /* 0x5f1c4c */
extern int DAT_005f1c50; /* 0x5f1c50 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002c28dc. */


unsigned int FUN_0036d5e0(float *param_1,float *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19 [11];
  float *temp_v20;
  float *temp_v21;
  
  temp_v4 = -1;
  temp_v5 = 0;
  temp_v7 = *param_2;
  temp_v9 = param_2[1];
  temp_v11 = param_2[2];
  temp_v13 = *param_1;
  temp_v6 = param_1[1];
  temp_v14 = param_1[2];
  DAT_005f1c4c = -1;
  DAT_005f1c50 = -1;
  if (0 < (int)DAT_00580208) {
    puVar2 = (unsigned char *)0x5ecf13;
    if ((DAT_00580208 & 1) != 0) {
      DAT_005ecf14 = 0;
      puVar2 = &DAT_005ecf14;
    }
    for (temp_v1 = (int)DAT_00580208 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  if (0 < (int)DAT_0058020c) {
    puVar2 = (unsigned char *)0x5ed113;
    if ((DAT_0058020c & 1) != 0) {
      DAT_005ed114 = 0;
      puVar2 = &DAT_005ed114;
    }
    for (temp_v1 = (int)DAT_0058020c >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  if (0 < (int)DAT_00580210) {
    puVar2 = (unsigned char *)0x5ed293;
    if ((DAT_00580210 & 1) != 0) {
      DAT_005ed294 = 0;
      puVar2 = &DAT_005ed294;
    }
    for (temp_v1 = (int)DAT_00580210 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  if (0 < (int)DAT_00580214) {
    puVar2 = (unsigned char *)0x5ed333;
    if ((DAT_00580214 & 1) != 0) {
      DAT_005ed334 = 0;
      puVar2 = &DAT_005ed334;
    }
    for (temp_v1 = (int)DAT_00580214 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  if ((int)romwright_sqrt_4((temp_v13 - temp_v7) * (temp_v13 - temp_v7) + (temp_v6 - temp_v9) * (temp_v6 - temp_v9) +
                (temp_v14 - temp_v11) * (temp_v14 - temp_v11)) < 0x3c23d70a) {
    temp_v5 = 1;
  }
  else {
    temp_v1 = 0;
    temp_v16 = 250.0f;
    temp_v11 = temp_v6 + 15.0f;
    temp_v18 = 0.0f;
    temp_v7 = temp_v13;
    temp_v9 = temp_v14;
    temp_v20 = param_1;
    temp_v21 = param_2;
    while (temp_v1 = temp_v1 + 1, temp_v1 < 4) {
      while( 1 ) {
        while (temp_v1 == 0) {
          temp_v1 = 1;
        }
        if (temp_v1 != 1) break;
        temp_v1 = 2;
      }
      temp_v3 = 0;
      temp_v2 = DAT_00580224;
      temp_v0 = DAT_00580210;
      if (temp_v1 != 2) {
        temp_v2 = DAT_00580228;
        temp_v0 = DAT_00580214;
      }
      if (0 < (int)temp_v0) {
        do {
          if (*(char *)(temp_v2 + 8) != '\0') {
            temp_v15 = (temp_v13 * *(float *)(temp_v2 + 0xc) + temp_v11 * *(float *)(temp_v2 + 0x10) +
                     temp_v14 * *(float *)(temp_v2 + 0x14)) - *(float *)(temp_v2 + 0x18);
            temp_v17 = romwright_fabs_4(temp_v15);
            if ((temp_v17 < temp_v16) &&
               (FUN_002c28dc(temp_v19,(int)*(char *)(temp_v2 + 4),(int)*(char *)(temp_v2 + 5),temp_v2),
               temp_v18 <= temp_v19[0])) {
              temp_v8 = temp_v13 - *(float *)(temp_v2 + 0xc) * temp_v15;
              temp_v10 = temp_v11 - *(float *)(temp_v2 + 0x10) * temp_v15;
              temp_v12 = temp_v14 - *(float *)(temp_v2 + 0x14) * temp_v15;
              if (*(char *)(temp_v2 + 4) != '\x01') {
                if (temp_v1 == 2) {
                  (&DAT_005ed294)[temp_v3] = 1;
                }
                else if (temp_v1 == 3) {
                  (&DAT_005ed334)[temp_v3] = 1;
                }
                if (temp_v18 <= temp_v15) {
                  if (temp_v19[0] < temp_v17) {
                    temp_v19[0] = temp_v17;
                  }
                  temp_v13 = temp_v8 + *(float *)(temp_v2 + 0xc) * temp_v19[0];
                  temp_v11 = temp_v10 + *(float *)(temp_v2 + 0x10) * temp_v19[0];
                  temp_v14 = temp_v12 + *(float *)(temp_v2 + 0x14) * temp_v19[0];
                }
              }
              else {
                DAT_005f1c4c = temp_v1;
                DAT_005f1c50 = temp_v3;
                if (temp_v1 == 0) {
                  puVar2 = &DAT_005ecf14;
                  puVar2[temp_v3] = 1;
                }
                else if (temp_v1 == 1) {
                  puVar2 = &DAT_005ed114;
                  puVar2[temp_v3] = 1;
                }
                if ((-1 < temp_v4) && (temp_v19[0] < temp_v17)) {
                  temp_v19[0] = temp_v17;
                }
                temp_v5 = 1;
                temp_v13 = temp_v8 + *(float *)(temp_v2 + 0xc) * temp_v19[0];
                temp_v11 = temp_v10 + *(float *)(temp_v2 + 0x10) * temp_v19[0];
                temp_v14 = temp_v12 + *(float *)(temp_v2 + 0x14) * temp_v19[0];
                if (temp_v19[0] == temp_v16) {
                  temp_v4 = temp_v3;
                }
              }
            }
          }
          temp_v3 = temp_v3 + 1;
          temp_v2 = temp_v2 + 0xa8;
        } while (temp_v3 < (int)temp_v0);
      }
    }
    *temp_v20 = temp_v13;
    temp_v20[1] = temp_v11 - 25.0f;
    temp_v20[2] = temp_v14;
    *temp_v21 = temp_v7;
    temp_v21[1] = temp_v6;
    temp_v21[2] = temp_v9;
  }
  return temp_v5;
}
