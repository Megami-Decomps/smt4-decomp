/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330108` (_code @ 0x330108, 0x2d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int collisionTestProjectedSpherePlanes(float [18], int);
int FUN_002c2a58(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

extern int DAT_00580210; /* 0x580210 */
extern int DAT_00580214; /* 0x580214 */
extern int DAT_00580218; /* 0x580218 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */

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
/* Supplied declaration required: collisionTestProjectedSpherePlanes. */
/* Supplied declaration required: FUN_002c2a58. */


int FUN_00330108(float *param_1,float *param_2,float *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  float temp_v19 [18];
  float *pfStack_30;
  float *pfStack_2c;
  float *temp_v20;
  
  temp_v3 = 0;
  temp_v4 = -1;
  temp_v16 = 0;
  temp_v14 = *param_2;
  temp_v9 = *(unsigned long long *)param_1;
  temp_v11 = param_1[2];
  temp_v12 = param_2[1];
  temp_v13 = param_2[2];
  pfStack_30 = param_1;
  pfStack_2c = param_2;
  temp_v20 = param_3;
  do {
    temp_v0 = 0x5e2714;
    temp_v2 = DAT_00580218;
    if (temp_v4 == -1) {
      temp_v7 = (float)temp_v9 - temp_v14;
      temp_v10 = (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v5 = temp_v10 - temp_v12;
      temp_v6 = temp_v11 - temp_v13;
      temp_v8 = 1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v5 * temp_v5 + temp_v6 * temp_v6);
      temp_v9 = CONCAT44(temp_v10 + temp_v5 * temp_v8 * 28.0f,(float)temp_v9 + temp_v7 * temp_v8 * 28.0f);
      temp_v11 = temp_v11 + temp_v6 * temp_v8 * 28.0f;
    }
    while( 1 ) {
      temp_v1 = 0;
      if (temp_v1 < temp_v2) {
        do {
          if (*(char *)(temp_v0 + 8) != '\0') {
            temp_v6 = (float)temp_v9;
            temp_v8 = (float)((unsigned long long)temp_v9 >> 0x20);
            temp_v7 = (temp_v6 * *(float *)(temp_v0 + 0xc) + temp_v8 * *(float *)(temp_v0 + 0x10) +
                    temp_v11 * *(float *)(temp_v0 + 0x14)) - *(float *)(temp_v0 + 0x18);
            temp_v10 = (float)temp_v16;
            temp_v5 = (temp_v14 * *(float *)(temp_v0 + 0xc) + temp_v12 * *(float *)(temp_v0 + 0x10) +
                    temp_v13 * *(float *)(temp_v0 + 0x14)) - *(float *)(temp_v0 + 0x18);
            if (((temp_v7 < temp_v10) && (temp_v10 <= temp_v5)) || ((temp_v5 < temp_v10 && (temp_v10 <= temp_v7))))
            {
              temp_v7 = romwright_fabs_4(temp_v7);
              temp_v17 = CONCAT44(temp_v7 + romwright_fabs_4(temp_v5),temp_v7);
              temp_v15 = CONCAT44(temp_v14 - temp_v6,temp_v12 - temp_v8);
              temp_v16 = CONCAT44(temp_v13 - temp_v11,temp_v10);
              temp_v6 = temp_v6 + (temp_v14 - temp_v6) * (temp_v7 / (temp_v7 + romwright_fabs_4(temp_v5)));
              temp_v18 = temp_v9;
              temp_v5 = temp_v11;
              if (temp_v3 != 0) {
                FUN_002c2a58((int)*(char *)(temp_v0 + 4),(int)*(char *)(temp_v0 + 5));
                temp_v19[0] = temp_v6;
              }
              else {
                collisionTestProjectedSpherePlanes(temp_v19,(int)*(char *)(temp_v0 + 4));
              }
              if ((float)temp_v16 <= temp_v19[0]) {
                temp_v11 = ((float)temp_v17 + temp_v19[0]) / (float)((unsigned long long)temp_v17 >> 0x20);
                temp_v7 = (float)((unsigned long long)temp_v16 >> 0x20);
                temp_v6 = (float)((unsigned long long)temp_v15 >> 0x20);
                temp_v4 = temp_v1;
                if ((int)temp_v11 < 0x3f800000) {
                  temp_v9 = CONCAT44((float)((unsigned long long)temp_v18 >> 0x20) + (float)temp_v15 * temp_v11,
                                    (float)temp_v18 + temp_v6 * temp_v11);
                  temp_v11 = temp_v5 + temp_v7 * temp_v11;
                }
                else {
                  temp_v9 = CONCAT44(temp_v12 + (float)temp_v15 * -24.0f,temp_v14 + temp_v6 * -24.0f);
                  temp_v11 = temp_v13 + temp_v7 * -24.0f;
                }
              }
            }
          }
          temp_v1 = temp_v1 + 1;
          temp_v0 = temp_v0 + 0xa8;
        } while (temp_v1 < temp_v2);
      }
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 3) {
        if (temp_v4 == -1) {
          temp_v11 = param_1[1];
          temp_v12 = param_1[2];
          *temp_v20 = *param_1;
          temp_v20[1] = temp_v11;
          temp_v20[2] = temp_v12;
        }
        else {
          *temp_v20 = (float)temp_v9;
          temp_v20[1] = (float)((unsigned long long)temp_v9 >> 0x20);
          temp_v20[2] = temp_v11;
        }
        return temp_v4;
      }
      if (temp_v3 == 0) break;
      temp_v0 = DAT_00580228;
      temp_v2 = DAT_00580214;
      if ((temp_v3 == 1) && (temp_v0 = DAT_00580224, temp_v2 = DAT_00580210, temp_v4 == -1)) {
        temp_v14 = *param_2;
        temp_v12 = param_2[1];
        temp_v6 = *param_1 - temp_v14;
        temp_v5 = param_1[1] - temp_v12;
        temp_v13 = param_2[2];
        temp_v11 = param_1[2] - temp_v13;
        temp_v7 = 1.0f / romwright_sqrt_4(temp_v6 * temp_v6 + temp_v5 * temp_v5 + temp_v11 * temp_v11);
        temp_v9 = CONCAT44(param_1[1] + temp_v5 * temp_v7 * 8.0f,*param_1 + temp_v6 * temp_v7 * 8.0f);
        temp_v11 = param_1[2] + temp_v11 * temp_v7 * 8.0f;
      }
    }
  } while( 1 );
}

} /* extern "C" */
