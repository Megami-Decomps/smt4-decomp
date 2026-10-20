/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027f48c` (_code @ 0x27f48c, 0x390 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0026ec2c(float *, int, int, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern unsigned int DAT_00446fec; /* 0x446fec */
extern unsigned int DAT_00446ff0; /* 0x446ff0 */
extern unsigned int DAT_00446ff4; /* 0x446ff4 */
extern unsigned int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */
extern unsigned char DAT_0049e45c; /* 0x49e45c */
extern unsigned char DAT_0049e65c; /* 0x49e65c */
extern unsigned char DAT_0049e7dc; /* 0x49e7dc */
extern unsigned char DAT_0049e87c; /* 0x49e87c */
extern int DAT_0049fcec; /* 0x49fcec */
extern int DAT_0049fcf0; /* 0x49fcf0 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
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
/* Supplied declaration required: FUN_0026ec2c. */


unsigned int FUN_0027f48c(float *param_1,float *param_2)

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
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  float *temp_v18;
  float *temp_v19;
  float temp_v20;
  
  temp_v4 = -1;
  temp_v17 = 0;
  temp_v6 = *param_2;
  temp_v7 = param_2[1];
  temp_v9 = param_2[2];
  temp_v10 = *param_1;
  temp_v5 = param_1[1];
  temp_v15 = *(unsigned long long *)param_1;
  temp_v20 = param_1[2];
  temp_v11 = CONCAT44(temp_v20,temp_v10);
  DAT_0049fcec = -1;
  DAT_0049fcf0 = -1;
  if (0 < (int)DAT_00446fec) {
    puVar1 = (unsigned char *)0x49e45b;
    if ((DAT_00446fec & 1) != 0) {
      DAT_0049e45c = 0;
      puVar1 = &DAT_0049e45c;
    }
    for (temp_v0 = (int)DAT_00446fec >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_00446ff0) {
    puVar1 = (unsigned char *)0x49e65b;
    if ((DAT_00446ff0 & 1) != 0) {
      DAT_0049e65c = 0;
      puVar1 = &DAT_0049e65c;
    }
    for (temp_v0 = (int)DAT_00446ff0 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_00446ff4) {
    puVar1 = (unsigned char *)0x49e7db;
    if ((DAT_00446ff4 & 1) != 0) {
      DAT_0049e7dc = 0;
      puVar1 = &DAT_0049e7dc;
    }
    for (temp_v0 = (int)DAT_00446ff4 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  if (0 < (int)DAT_00446ff8) {
    puVar1 = (unsigned char *)0x49e87b;
    if ((DAT_00446ff8 & 1) != 0) {
      DAT_0049e87c = 0;
      puVar1 = &DAT_0049e87c;
    }
    for (temp_v0 = (int)DAT_00446ff8 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  temp_v10 = temp_v10 - temp_v6;
  temp_v7 = temp_v5 - temp_v7;
  if ((int)romwright_sqrt_4(temp_v10 * temp_v10 + temp_v7 * temp_v7 + (temp_v20 - temp_v9) * (temp_v20 - temp_v9)) <
      0x3c23d70a) {
    return 1;
  }
  temp_v0 = 0;
  temp_v6 = 25.0f;
  temp_v14 = CONCAT44(temp_v20,0x42700000);
  temp_v12 = (unsigned long long)(unsigned int)(temp_v5 + 15.0f);
  temp_v5 = 0.0f;
  temp_v18 = param_1;
  temp_v19 = param_2;
  do {
    temp_v12 = CONCAT44(temp_v6,(int)temp_v12);
    temp_v1 = DAT_00447000;
    temp_v3 = DAT_00446fec;
LAB_0027f630:
    temp_v2 = 0;
    if (0 < (int)temp_v3) {
      do {
        if (*(char *)(temp_v1 + 8) != '\0') {
          temp_v7 = ((float)temp_v11 * *(float *)(temp_v1 + 0xc) +
                   (float)temp_v12 * *(float *)(temp_v1 + 0x10) +
                  (float)((unsigned long long)temp_v11 >> 0x20) * *(float *)(temp_v1 + 0x14)) -
                  *(float *)(temp_v1 + 0x18);
          temp_v9 = romwright_fabs_4(temp_v7);
          if ((temp_v9 < (float)(temp_v12 >> 0x20)) &&
             (FUN_0026ec2c(&temp_v16,(int)*(char *)(temp_v1 + 4),(int)*(char *)(temp_v1 + 5),temp_v1),
             temp_v5 <= temp_v16)) {
            temp_v10 = (float)temp_v11 - *(float *)(temp_v1 + 0xc) * temp_v7;
            temp_v20 = (float)temp_v12 - *(float *)(temp_v1 + 0x10) * temp_v7;
            temp_v8 = (float)((unsigned long long)temp_v11 >> 0x20) - *(float *)(temp_v1 + 0x14) * temp_v7;
            temp_v13 = (float)(temp_v12 >> 0x20);
            if (*(char *)(temp_v1 + 4) != '\x01') {
              if (temp_v0 == 2) {
                (&DAT_0049e7dc)[temp_v2] = 1;
              }
              else if (temp_v0 == 3) {
                (&DAT_0049e87c)[temp_v2] = 1;
              }
              if (temp_v5 <= temp_v7) {
                if (temp_v16 < temp_v9) {
                  temp_v16 = temp_v9;
                }
                temp_v12 = CONCAT44(temp_v13,temp_v20 + *(float *)(temp_v1 + 0x10) * temp_v16);
                temp_v11 = CONCAT44(temp_v8 + *(float *)(temp_v1 + 0x14) * temp_v16,
                                  temp_v10 + *(float *)(temp_v1 + 0xc) * temp_v16);
              }
            }
            else {
              DAT_0049fcec = temp_v0;
              DAT_0049fcf0 = temp_v2;
              if (temp_v0 == 0) {
                puVar1 = &DAT_0049e45c;
                puVar1[temp_v2] = 1;
              }
              else if (temp_v0 == 1) {
                puVar1 = &DAT_0049e65c;
                puVar1[temp_v2] = 1;
              }
              if ((-1 < temp_v4) && (temp_v16 < temp_v9)) {
                temp_v16 = temp_v9;
              }
              temp_v17 = 1;
              temp_v12 = CONCAT44(temp_v13,temp_v20 + *(float *)(temp_v1 + 0x10) * temp_v16);
              temp_v11 = CONCAT44(temp_v8 + *(float *)(temp_v1 + 0x14) * temp_v16,
                                temp_v10 + *(float *)(temp_v1 + 0xc) * temp_v16);
              if (temp_v16 == temp_v13) {
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
    temp_v7 = (float)temp_v12;
    if (temp_v0 >= 4) {
      *temp_v18 = (float)temp_v11;
      temp_v18[1] = temp_v7 - temp_v6;
      temp_v18[2] = (float)((unsigned long long)temp_v11 >> 0x20);
      temp_v19[2] = (float)((unsigned long long)temp_v14 >> 0x20);
      *temp_v19 = (float)temp_v15;
      temp_v19[1] = (float)((unsigned long long)temp_v15 >> 0x20);
      return temp_v17;
    }
  } while (temp_v0 == 0);
  if (temp_v0 != 1) {
    temp_v12 = CONCAT44((int)temp_v14,temp_v7);
    temp_v1 = DAT_00447008;
    temp_v3 = DAT_00446ff4;
    if (temp_v0 != 2) {
      temp_v1 = DAT_0044700c;
      temp_v3 = DAT_00446ff8;
    }
  }
  else {
    temp_v12 = CONCAT44(temp_v6,temp_v7);
    temp_v1 = DAT_00447004;
    temp_v3 = DAT_00446ff0;
  }
  goto LAB_0027f630;
}

} /* extern "C" */
