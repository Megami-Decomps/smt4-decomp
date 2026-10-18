/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002826dc` (_code @ 0x2826dc, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern int DAT_00580208; /* 0x580208 */
extern int DAT_0058020c; /* 0x58020c */
extern int DAT_00580210; /* 0x580210 */
extern int DAT_00580214; /* 0x580214 */
extern int DAT_0058021c; /* 0x58021c */
extern int DAT_00580220; /* 0x580220 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002c28dc. */


unsigned int FUN_002826dc(unsigned int *param_1,unsigned int *param_2,int param_3,int param_4)

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
  float temp_v9;
  long long temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18 [11];
  unsigned int *puStack_34;
  unsigned int *temp_v19;
  int iStack_2c;
  int temp_v20;
  
  temp_v4 = -1;
  temp_v5 = 0;
  temp_v3 = 0;
  temp_v16 = 25.0f;
  temp_v17 = 0x4270000042480000;
  temp_v15 = 0.0f;
  temp_v10 = (unsigned long long)*param_1 << 0x20;
  temp_v12 = CONCAT44((float)param_1[1] + 15.0f,param_1[2]);
  puStack_34 = param_1;
  temp_v19 = param_2;
  iStack_2c = param_3;
  temp_v20 = param_4;
  do {
    temp_v10 = CONCAT44((int)((unsigned long long)temp_v10 >> 0x20),temp_v16);
    temp_v0 = DAT_0058021c;
    temp_v2 = DAT_00580208;
LAB_0028278c:
    temp_v1 = 0;
    if (0 < temp_v2) {
      do {
        if (*(char *)(temp_v0 + 8) != '\0') {
          temp_v13 = ((float)((unsigned long long)temp_v10 >> 0x20) * *(float *)(temp_v0 + 0xc) +
                    (float)((unsigned long long)temp_v12 >> 0x20) * *(float *)(temp_v0 + 0x10) +
                   (float)temp_v12 * *(float *)(temp_v0 + 0x14)) - *(float *)(temp_v0 + 0x18);
          temp_v14 = romwright_fabs_4(temp_v13);
          if ((temp_v14 < (float)temp_v10) &&
             (FUN_002c28dc(temp_v18,(int)*(char *)(temp_v0 + 4),(int)*(char *)(temp_v0 + 5),temp_v0),
             temp_v15 <= temp_v18[0])) {
            temp_v6 = (float)((unsigned long long)temp_v10 >> 0x20) - *(float *)(temp_v0 + 0xc) * temp_v13;
            temp_v7 = (float)((unsigned long long)temp_v12 >> 0x20) - *(float *)(temp_v0 + 0x10) * temp_v13;
            temp_v8 = (float)temp_v12 - *(float *)(temp_v0 + 0x14) * temp_v13;
            temp_v9 = (float)temp_v10;
            if (*(char *)(temp_v0 + 4) != '\x01') {
              if (temp_v15 <= temp_v13) {
                if (temp_v18[0] < temp_v14) {
                  temp_v18[0] = temp_v14;
                }
                temp_v10 = CONCAT44(temp_v6 + *(float *)(temp_v0 + 0xc) * temp_v18[0],temp_v9);
                temp_v12 = CONCAT44(temp_v7 + *(float *)(temp_v0 + 0x10) * temp_v18[0],
                                  temp_v8 + *(float *)(temp_v0 + 0x14) * temp_v18[0]);
                if (param_3 == 0) {
                  temp_v5 = 1;
                }
              }
            }
            else {
              if ((-1 < temp_v4) && (temp_v18[0] < temp_v14)) {
                temp_v18[0] = temp_v14;
              }
              temp_v10 = CONCAT44(temp_v6 + *(float *)(temp_v0 + 0xc) * temp_v18[0],temp_v9);
              temp_v12 = CONCAT44(temp_v7 + *(float *)(temp_v0 + 0x10) * temp_v18[0],
                                temp_v8 + *(float *)(temp_v0 + 0x14) * temp_v18[0]);
              if (temp_v18[0] == temp_v9) {
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
    temp_v11 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
    if (temp_v3 >= 4) {
      *temp_v19 = temp_v11;
      temp_v19[2] = (int)temp_v12;
      temp_v19[1] = (float)((unsigned long long)temp_v12 >> 0x20) - temp_v16;
      return temp_v5;
    }
  } while (temp_v3 == 0);
  if (temp_v3 != 1) {
    temp_v0 = DAT_00580224;
    temp_v2 = DAT_00580210;
    if (temp_v3 != 2) {
      temp_v0 = DAT_00580228;
      temp_v2 = DAT_00580214;
    }
    if (temp_v20 != 0) {
      temp_v10 = romwright_piece_4_4(temp_v11,(int)temp_v17);
    }
    else {
      temp_v10 = romwright_piece_4_4(temp_v11,(int)((unsigned long long)temp_v17 >> 0x20));
    }
  }
  else {
    temp_v10 = CONCAT44(temp_v11,temp_v16);
    temp_v0 = DAT_00580220;
    temp_v2 = DAT_0058020c;
  }
  goto LAB_0028278c;
}
