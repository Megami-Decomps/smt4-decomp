/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266e88` (_code @ 0x266e88, 0x2b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_00446ff4; /* 0x446ff4 */
extern int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_00446ffc; /* 0x446ffc */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */

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
/* Supplied declaration required: FUN_0024bd60. */


int FUN_00266e88(float *param_1,float *param_2,float *param_3)

{
/* irregular: 2 native warning(s); review required */
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
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  
  temp_v3 = 0;
  temp_v4 = -1;
  temp_v15 = 0.0f;
  temp_v13 = *param_2;
  temp_v9 = *(unsigned long long *)param_1;
  temp_v10 = param_1[2];
  temp_v11 = param_2[1];
  temp_v12 = param_2[2];
  do {
    temp_v0 = 0x493c5c;
    temp_v2 = DAT_00446ffc;
    if (temp_v4 == -1) {
      temp_v7 = (float)temp_v9 - temp_v13;
      temp_v17 = (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v6 = temp_v17 - temp_v11;
      temp_v5 = temp_v10 - temp_v12;
      temp_v8 = 1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v6 * temp_v6 + temp_v5 * temp_v5);
      temp_v9 = CONCAT44(temp_v17 + temp_v6 * temp_v8 * 28.0f,(float)temp_v9 + temp_v7 * temp_v8 * 28.0f);
      temp_v10 = temp_v10 + temp_v5 * temp_v8 * 28.0f;
    }
    while( 1 ) {
      temp_v1 = 0;
      if (temp_v1 < temp_v2) {
        do {
          if ((*(char *)(temp_v0 + 8) != '\0') && ((temp_v3 != 0 || (*(char *)(temp_v0 + 9) == '\x03'))))
          {
            temp_v6 = (float)temp_v9;
            temp_v8 = (float)((unsigned long long)temp_v9 >> 0x20);
            temp_v7 = (temp_v6 * *(float *)(temp_v0 + 0xc) + temp_v8 * *(float *)(temp_v0 + 0x10) +
                    temp_v10 * *(float *)(temp_v0 + 0x14)) - *(float *)(temp_v0 + 0x18);
            temp_v5 = (temp_v13 * *(float *)(temp_v0 + 0xc) + temp_v11 * *(float *)(temp_v0 + 0x10) +
                    temp_v12 * *(float *)(temp_v0 + 0x14)) - *(float *)(temp_v0 + 0x18);
            if (((temp_v7 < temp_v15) && (temp_v15 <= temp_v5)) || ((temp_v5 < temp_v15 && (temp_v15 <= temp_v7))))
            {
              temp_v7 = romwright_fabs_4(temp_v7);
              temp_v17 = temp_v7 + romwright_fabs_4(temp_v5);
              temp_v14 = temp_v13 - temp_v6;
              temp_v8 = temp_v11 - temp_v8;
              temp_v16 = temp_v12 - temp_v10;
              temp_v6 = temp_v6 + temp_v14 * (temp_v7 / temp_v17);
              temp_v18 = temp_v9;
              temp_v5 = temp_v10;
              FUN_0024bd60((int)*(char *)(temp_v0 + 4),(int)*(char *)(temp_v0 + 5));
              if (temp_v15 <= temp_v6) {
                temp_v17 = (temp_v7 + temp_v6) / temp_v17;
                temp_v4 = temp_v1;
                if ((int)temp_v17 < 0x3f800000) {
                  temp_v9 = CONCAT44((float)((unsigned long long)temp_v18 >> 0x20) + temp_v8 * temp_v17,
                                    (float)temp_v18 + temp_v14 * temp_v17);
                  temp_v10 = temp_v5 + temp_v16 * temp_v17;
                }
                else {
                  temp_v9 = CONCAT44(temp_v11 + temp_v8 * -24.0f,temp_v13 + temp_v14 * -24.0f);
                  temp_v10 = temp_v12 + temp_v16 * -24.0f;
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
          temp_v10 = param_1[1];
          temp_v11 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = temp_v10;
          param_3[2] = temp_v11;
        }
        else {
          *param_3 = (float)temp_v9;
          param_3[1] = (float)((unsigned long long)temp_v9 >> 0x20);
          param_3[2] = temp_v10;
        }
        return temp_v4;
      }
      if (temp_v3 == 0) break;
      temp_v0 = DAT_0044700c;
      temp_v2 = DAT_00446ff8;
      if ((temp_v3 == 1) && (temp_v0 = DAT_00447008, temp_v2 = DAT_00446ff4, temp_v4 == -1)) {
        temp_v13 = *param_2;
        temp_v11 = param_2[1];
        temp_v7 = *param_1 - temp_v13;
        temp_v5 = param_1[1] - temp_v11;
        temp_v12 = param_2[2];
        temp_v10 = param_1[2] - temp_v12;
        temp_v6 = 1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v5 * temp_v5 + temp_v10 * temp_v10);
        temp_v9 = CONCAT44(param_1[1] + temp_v5 * temp_v6 * 8.0f,*param_1 + temp_v7 * temp_v6 * 8.0f);
        temp_v10 = param_1[2] + temp_v10 * temp_v6 * 8.0f;
      }
    }
  } while( 1 );
}
