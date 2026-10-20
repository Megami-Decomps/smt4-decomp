/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6cb0` (_code @ 0x2b6cb0, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019af70(...);
int FUN_002d8a94(void);

extern int DAT_005806d4; /* 0x5806d4 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f161d; /* 0x5f161d */

/* Supplied declaration required: FUN_0019af70. */
/* Supplied declaration required: FUN_002d8a94. */


void FUN_002b6cb0(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  
  temp_v1 = DAT_005806d4;
  if ((DAT_005806d4 != 0) && (*(int *)(DAT_005806d4 + 4) == 8)) {
    puVar3 = &g_gameState;
    if (DAT_005f161c == '\0') {
      puVar3 = (unsigned int *)(unsigned int)DAT_005f161d;
    }
    if (DAT_005f161c == '\0' && puVar3 == (unsigned int *)0x0) {
      temp_v13 = 90.0f;
      temp_v14 = 1.9888889f;
      temp_v11 = 198.0f;
      temp_v16 = 0x400ccccd;
      temp_v12 = 358.0f;
      temp_v6 = 0;
      do {
        temp_v7 = temp_v1 + temp_v6 * 0x188;
        if (*(char *)(temp_v7 + 0x34) != '\0') {
          *(unsigned char *)(temp_v7 + 0x194) = 0;
          temp_v2 = temp_v7 + 0x134;
          temp_v8 = *(char *)(temp_v7 + 0x175) != '\0';
          temp_v0 = '\0';
          if (temp_v8) {
            temp_v0 = *(char *)(temp_v7 + 0x1b8);
          }
          if (temp_v8 && temp_v0 != '\0') {
            temp_v2 = (unsigned int)*(unsigned char *)(temp_v7 + 0x17c);
          }
          if ((temp_v8 && temp_v0 != '\0') && temp_v2 != 0) {
            FUN_002d8a94();
            temp_v3 = *(int *)(temp_v7 + 0x180);
            if (*(char *)(temp_v7 + 0xb2) == '\0') {
              temp_v9 = *(float *)(temp_v7 + 0xb4);
              temp_v15 = (float)temp_v16;
              temp_v17 = 0.0f;
              temp_v16 = temp_v16 & 0xffffffff;
              temp_v10 = temp_v11;
              if (temp_v9 > 0.0f) {
                if ((int)temp_v9 >= 0x42b40001) {
                  temp_v17 = (temp_v9 - temp_v13) * temp_v14;
                }
                else {
                  temp_v10 = temp_v9 * temp_v15;
                }
              }
              else {
                temp_v9 = -temp_v9;
                temp_v17 = temp_v12;
                if ((int)temp_v9 >= 0x42b40001) {
                  temp_v17 = temp_v12 - (temp_v9 - temp_v13) * temp_v14;
                }
                else {
                  temp_v10 = temp_v9 * temp_v15;
                }
              }
              temp_v4 = 0xef6c3eff;
              temp_v5 = 0xfe0b22ff;
              if (temp_v3 >= 0x43c80000) {
                if (temp_v3 < 0x44480000) {
                  temp_v4 = 0xfbc30dff;
                  temp_v5 = 0xff6c2bff;
                }
                else if (temp_v3 < 0x44960000) {
                  temp_v4 = 0xfff2c0ff;
                  temp_v5 = 0xffd52dff;
                }
                else {
                  temp_v4 = 0xffffffff;
                  temp_v5 = 0x2db5ffff;
                }
              }
              *(unsigned char *)(temp_v7 + 0x194) = 1;
              *(float *)(temp_v7 + 0x198) = temp_v17 + 12.0f;
              *(float *)(temp_v7 + 0x19c) = temp_v10 + 12.0f;
              FUN_0019af70(temp_v4,temp_v5,temp_v4,temp_v5);
              FUN_0019af70(0xff,0xff,0xff);
            }
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x28);
    }
  }
  return;
}

} /* extern "C" */
