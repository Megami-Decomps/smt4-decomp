/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025363c` (_code @ 0x25363c, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int collisionTestProjectedSpherePlanes(float [12], int, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern int DAT_00446fec; /* 0x446fec */
extern int DAT_00446ff0; /* 0x446ff0 */
extern int DAT_00446ff4; /* 0x446ff4 */
extern int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: collisionTestProjectedSpherePlanes. */


unsigned int FUN_0025363c(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17 [12];
  unsigned int *puStack_30;
  unsigned int *temp_v18;
  int iStack_28;
  
  temp_v5 = 0;
  temp_v4 = -1;
  temp_v3 = 0;
  temp_v15 = 25.0f;
  temp_v16 = 0x42700000;
  temp_v10 = (unsigned long long)(unsigned int)((float)param_1[1] + 15.0f);
  temp_v14 = 0.0f;
  temp_v9 = romwright_piece_4_4(param_1[2],*param_1);
  puStack_30 = param_1;
  temp_v18 = param_2;
  iStack_28 = param_3;
  do {
    temp_v10 = CONCAT44(temp_v15,(int)temp_v10);
    temp_v0 = DAT_00447000;
    temp_v2 = DAT_00446fec;
LAB_002536a8:
    temp_v1 = 0;
    if (0 < temp_v2) {
      do {
        if (*(char *)(temp_v0 + 8) != '\0') {
          temp_v12 = ((float)temp_v9 * *(float *)(temp_v0 + 0xc) +
                    (float)temp_v10 * *(float *)(temp_v0 + 0x10) +
                   (float)((unsigned long long)temp_v9 >> 0x20) * *(float *)(temp_v0 + 0x14)) -
                   *(float *)(temp_v0 + 0x18);
          temp_v13 = romwright_fabs_4(temp_v12);
          if ((temp_v13 < (float)(temp_v10 >> 0x20)) &&
             (collisionTestProjectedSpherePlanes(temp_v17,(int)*(char *)(temp_v0 + 4),(int)*(char *)(temp_v0 + 5),temp_v0),
             temp_v14 <= temp_v17[0])) {
            temp_v6 = (float)temp_v9 - *(float *)(temp_v0 + 0xc) * temp_v12;
            temp_v7 = (float)temp_v10 - *(float *)(temp_v0 + 0x10) * temp_v12;
            temp_v8 = (float)((unsigned long long)temp_v9 >> 0x20) - *(float *)(temp_v0 + 0x14) * temp_v12;
            temp_v11 = (float)(temp_v10 >> 0x20);
            if (*(char *)(temp_v0 + 4) != '\x01') {
              if (temp_v14 <= temp_v12) {
                if (temp_v17[0] < temp_v13) {
                  temp_v17[0] = temp_v13;
                }
                temp_v10 = CONCAT44(temp_v11,temp_v7 + *(float *)(temp_v0 + 0x10) * temp_v17[0]);
                temp_v9 = CONCAT44(temp_v8 + *(float *)(temp_v0 + 0x14) * temp_v17[0],
                                  temp_v6 + *(float *)(temp_v0 + 0xc) * temp_v17[0]);
                if (param_3 == 0) {
                  temp_v5 = 1;
                }
              }
            }
            else {
              if ((-1 < temp_v4) && (temp_v17[0] < temp_v13)) {
                temp_v17[0] = temp_v13;
              }
              temp_v10 = CONCAT44(temp_v11,temp_v7 + *(float *)(temp_v0 + 0x10) * temp_v17[0]);
              temp_v9 = CONCAT44(temp_v8 + *(float *)(temp_v0 + 0x14) * temp_v17[0],
                                temp_v6 + *(float *)(temp_v0 + 0xc) * temp_v17[0]);
              if (temp_v17[0] == temp_v11) {
                temp_v4 = temp_v1;
              }
              if (param_3 != 0) {
                temp_v5 = 1;
              }
            }
          }
        }
        temp_v1 = temp_v1 + 1;
        temp_v0 = temp_v0 + 0xa8;
      } while (temp_v1 < temp_v2);
    }
    temp_v3 = temp_v3 + 1;
    temp_v12 = (float)temp_v10;
    if (temp_v3 >= 4) {
      *temp_v18 = (int)temp_v9;
      temp_v18[2] = (int)((unsigned long long)temp_v9 >> 0x20);
      temp_v18[1] = temp_v12 - temp_v15;
      return temp_v5;
    }
  } while (temp_v3 == 0);
  if (temp_v3 != 1) {
    temp_v10 = CONCAT44((int)temp_v16,temp_v12);
    temp_v0 = DAT_00447008;
    temp_v2 = DAT_00446ff4;
    if (temp_v3 != 2) {
      temp_v0 = DAT_0044700c;
      temp_v2 = DAT_00446ff8;
    }
  }
  else {
    temp_v10 = CONCAT44(temp_v15,temp_v12);
    temp_v0 = DAT_00447004;
    temp_v2 = DAT_00446ff0;
  }
  goto LAB_002536a8;
}

} /* extern "C" */
