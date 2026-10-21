/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f9ce0` (_code @ 0x1f9ce0, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mapInterfaceForwardResource(void);
int FUN_002aa18c(...);

extern int g_mapEnemy; /* 0x447600 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: mapInterfaceForwardResource. */
/* Supplied declaration required: FUN_002aa18c. */


void FUN_001f9ce0(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
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
  
  temp_v1 = g_mapEnemy;
  if (((g_mapEnemy != 0) && (*(int *)(g_mapEnemy + 4) == 8)) && ((*(signed char *)((unsigned char *)&g_gameState + 0x20)) == '\0')) {
    temp_v13 = 90.0f;
    temp_v14 = 1.9888889f;
    temp_v11 = 198.0f;
    temp_v16 = 0x400ccccd;
    temp_v12 = 358.0f;
    temp_v6 = 0;
    do {
      temp_v7 = temp_v1 + temp_v6 * 0x180;
      if (*(char *)(temp_v7 + 0x34) != '\0') {
        *(unsigned char *)(temp_v7 + 400) = 0;
        temp_v2 = temp_v7 + 0x134;
        temp_v8 = *(char *)(temp_v7 + 0x172) != '\0';
        temp_v0 = '\0';
        if (temp_v8) {
          temp_v0 = *(char *)(temp_v7 + 0x1b0);
        }
        if (temp_v8 && temp_v0 != '\0') {
          temp_v2 = (unsigned int)*(unsigned char *)(temp_v7 + 0x178);
        }
        if ((temp_v8 && temp_v0 != '\0') && temp_v2 != 0) {
          mapInterfaceForwardResource();
          temp_v3 = *(int *)(temp_v7 + 0x17c);
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
            *(unsigned char *)(temp_v7 + 400) = 1;
            *(float *)(temp_v7 + 0x194) = temp_v17 + 12.0f;
            *(float *)(temp_v7 + 0x198) = temp_v10 + 12.0f;
            FUN_002aa18c(temp_v4,temp_v5,temp_v4,temp_v5);
            FUN_002aa18c(0xff,0xff,0xff);
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
  }
  return;
}

} /* extern "C" */
