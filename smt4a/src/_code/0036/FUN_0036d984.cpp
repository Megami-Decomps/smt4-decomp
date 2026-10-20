/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d984` (_code @ 0x36d984, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2a58(int, int, int);

extern int DAT_00580210; /* 0x580210 */
extern int DAT_00580214; /* 0x580214 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002c2a58. */


int FUN_0036d984(unsigned long long *param_1,unsigned int *param_2,float *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  unsigned long long temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  
  temp_v12 = 0;
  temp_v5 = *param_1;
  temp_v7 = romwright_piece_4_4(*param_2,*(unsigned int *)(param_1 + 1));
  temp_v8 = *(unsigned long long *)(param_2 + 1);
  do {
    temp_v3 = 1;
    while (temp_v3 != 0) {
      if (temp_v3 == 1) {
        temp_v3 = 2;
      }
      else {
        temp_v1 = DAT_00580224;
        temp_v0 = DAT_00580210;
        if (temp_v3 != 2) {
          temp_v1 = DAT_00580228;
          temp_v0 = DAT_00580214;
        }
        temp_v2 = 0;
        if (temp_v2 < temp_v0) {
          do {
            if (*(char *)(temp_v1 + 8) != '\0') {
              temp_v4 = (float)temp_v5;
              temp_v6 = (float)((unsigned long long)temp_v7 >> 0x20);
              temp_v9 = (temp_v4 * *(float *)(temp_v1 + 0xc) +
                        (float)((unsigned long long)temp_v5 >> 0x20) * *(float *)(temp_v1 + 0x10) +
                       (float)temp_v7 * *(float *)(temp_v1 + 0x14)) - *(float *)(temp_v1 + 0x18);
              temp_v11 = (float)temp_v12;
              temp_v10 = (temp_v6 * *(float *)(temp_v1 + 0xc) + (float)temp_v8 * *(float *)(temp_v1 + 0x10) +
                       (float)((unsigned long long)temp_v8 >> 0x20) * *(float *)(temp_v1 + 0x14)) -
                       *(float *)(temp_v1 + 0x18);
              if (((temp_v9 < temp_v11) && (temp_v11 <= temp_v10)) ||
                 ((temp_v10 < temp_v11 && (temp_v11 <= temp_v9)))) {
                temp_v4 = temp_v4 + (temp_v6 - temp_v4) * (romwright_fabs_4(temp_v9) / (romwright_fabs_4(temp_v9) + romwright_fabs_4(temp_v10)));
                FUN_002c2a58((int)*(char *)(temp_v1 + 4),(int)*(char *)(temp_v1 + 5),temp_v1);
                if ((float)temp_v12 <= temp_v4) {
                  if (param_3 != (float *)0x0) {
                    temp_v6 = (float)((unsigned long long)temp_v5 >> 0x20);
                    temp_v4 = (romwright_fabs_4(temp_v9) + temp_v4) / (romwright_fabs_4(temp_v9) + romwright_fabs_4(temp_v10));
                    param_3[2] = (float)temp_v7 +
                                 ((float)((unsigned long long)temp_v8 >> 0x20) - (float)temp_v7) * temp_v4;
                    *param_3 = (float)temp_v5 +
                               ((float)((unsigned long long)temp_v7 >> 0x20) - (float)temp_v5) * temp_v4;
                    param_3[1] = temp_v6 + ((float)temp_v8 - temp_v6) * temp_v4;
                  }
                  return temp_v2;
                }
              }
            }
            temp_v2 = temp_v2 + 1;
            temp_v1 = temp_v1 + 0xa8;
          } while (temp_v2 < temp_v0);
        }
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 4) {
          return -1;
        }
      }
    }
  } while( 1 );
}

} /* extern "C" */
