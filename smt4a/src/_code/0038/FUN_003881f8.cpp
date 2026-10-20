/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003881f8` (_code @ 0x3881f8, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002c2a58(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_00580210; /* 0x580210 */
extern int DAT_00580214; /* 0x580214 */
extern unsigned int *DAT_00580224; /* 0x580224 */
extern unsigned int *DAT_00580228; /* 0x580228 */

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
/* Supplied declaration required: FUN_002c2a58. */


int FUN_003881f8(float *param_1,float *param_2,float *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  temp_v3 = -1;
  temp_v15 = 0.0f;
  temp_v8 = *(unsigned long long *)param_1;
  temp_v10 = romwright_piece_4_4(*param_2,param_1[2]);
  temp_v11 = *(unsigned long long *)(param_2 + 1);
  do {
    temp_v2 = 1;
    while (temp_v2 != 0) {
      puVar1 = DAT_00580228;
      temp_v1 = DAT_00580214;
      if ((temp_v2 == 1) && (puVar1 = DAT_00580224, temp_v1 = DAT_00580210, temp_v3 == -1)) {
        temp_v5 = *param_1 - *param_2;
        temp_v4 = param_1[1] - param_2[1];
        temp_v11 = *(unsigned long long *)(param_2 + 1);
        temp_v6 = param_1[2] - (float)((unsigned long long)temp_v11 >> 0x20);
        temp_v7 = 1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v4 * temp_v4 + temp_v6 * temp_v6);
        temp_v8 = CONCAT44(param_1[1] + temp_v4 * temp_v7 * 8.0f,*param_1 + temp_v5 * temp_v7 * 8.0f);
        temp_v10 = CONCAT44(*param_2,param_1[2] + temp_v6 * temp_v7 * 8.0f);
      }
      temp_v0 = 0;
      if (temp_v0 < temp_v1) {
        do {
          if (((char)puVar1[2] != '\0') && ((*puVar1 & 1) != 0)) {
            temp_v12 = (float)((unsigned long long)temp_v10 >> 0x20);
            temp_v5 = (float)temp_v8;
            temp_v14 = (float)((unsigned long long)temp_v11 >> 0x20);
            temp_v7 = (float)((unsigned long long)temp_v8 >> 0x20);
            temp_v9 = (float)temp_v10;
            temp_v6 = (temp_v5 * (float)puVar1[3] + temp_v7 * (float)puVar1[4] + temp_v9 * (float)puVar1[5]
                    ) - (float)puVar1[6];
            temp_v4 = (temp_v12 * (float)puVar1[3] + (float)temp_v11 * (float)puVar1[4] +
                    temp_v14 * (float)puVar1[5]) - (float)puVar1[6];
            if (((temp_v6 < temp_v15) && (temp_v15 <= temp_v4)) || ((temp_v4 < temp_v15 && (temp_v15 <= temp_v6))))
            {
              temp_v6 = romwright_fabs_4(temp_v6);
              temp_v12 = temp_v12 - temp_v5;
              temp_v13 = (float)temp_v11 - temp_v7;
              temp_v14 = temp_v14 - temp_v9;
              temp_v16 = temp_v6 + romwright_fabs_4(temp_v4);
              temp_v4 = temp_v5 + temp_v12 * (temp_v6 / temp_v16);
              FUN_002c2a58((int)(char)puVar1[1],(int)*(char *)((int)puVar1 + 5));
              if (temp_v15 <= temp_v4) {
                temp_v16 = (temp_v6 + temp_v4) / temp_v16;
                temp_v8 = CONCAT44(temp_v7 + temp_v13 * temp_v16,temp_v5 + temp_v12 * temp_v16);
                temp_v10 = CONCAT44((int)((unsigned long long)temp_v10 >> 0x20),temp_v9 + temp_v14 * temp_v16);
                temp_v3 = temp_v0;
              }
            }
          }
          temp_v0 = temp_v0 + 1;
          puVar1 = puVar1 + 0x2a;
        } while (temp_v0 < temp_v1);
      }
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 3) {
        if (temp_v3 == -1) {
          temp_v15 = param_1[1];
          temp_v4 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = temp_v15;
          param_3[2] = temp_v4;
        }
        else {
          *param_3 = (float)temp_v8;
          param_3[1] = (float)((unsigned long long)temp_v8 >> 0x20);
          param_3[2] = (float)temp_v10;
        }
        return temp_v3;
      }
    }
  } while( 1 );
}

} /* extern "C" */
