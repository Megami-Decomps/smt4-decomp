/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00482c04` (_code @ 0x482c04, 0x2f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_00376fa4(unsigned int);
int sequenceRequestDefer(int, unsigned int);
int FUN_003d4ed8(int);
int SBORROW4(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_00482f14; /* 0x482f14 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f1776; /* 0x5f1776 */
extern unsigned int DAT_005f1778; /* 0x5f1778 */
extern unsigned char DAT_005f177c; /* 0x5f177c */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */
extern int DAT_005f17e8; /* 0x5f17e8 */
extern unsigned int DAT_005f17ec; /* 0x5f17ec */
extern unsigned int DAT_005f18e8; /* 0x5f18e8 */
extern int DAT_005f1a58; /* 0x5f1a58 */
extern int DAT_005f1be8; /* 0x5f1be8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagsGetBlock(void);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00376fa4. */
/* Supplied declaration required: sequenceRequestDefer. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int gameDataFlagTestBit(unsigned int);


unsigned int FUN_00482c04(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  int temp_v15;
  
  temp_v7 = 0xffffffff;
  temp_v2 = gameFlagsGetBlock();
  temp_v3 = gameGetPlayerData();
  temp_v8 = 999999;
  temp_v14 = 0x40a0000000000000;
  temp_v4 = 0;
  do {
    temp_v5 = param_1 + temp_v4 * 4;
    temp_v6 = *(int *)(temp_v5 + 0x18);
    if ((((temp_v6 != 0) && (temp_v0 = *(unsigned char *)(temp_v6 + 0xc), (temp_v0 & 1) != 0)) && ((temp_v0 & 4) == 0))
       && ((temp_v0 & 0x10) != 0)) {
      temp_v13 = *(float *)(temp_v6 + 0x2c) - *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(temp_v6 + 0x30) - *(float *)(g_lmapScene + 0x20);
      temp_v10 = *(float *)(temp_v6 + 0x34) - *(float *)(g_lmapScene + 0x24);
      if (*(float *)(g_lmapScene + 0x20) <=
          *(float *)(temp_v6 + 0x30) + (float)((unsigned long long)temp_v14 >> 0x20)) {
        temp_v11 = (int)romwright_sqrt_4(temp_v13 * temp_v13 + temp_v12 * temp_v12 + temp_v10 * temp_v10);
        temp_v9 = SBORROW4(temp_v11,0x96);
        temp_v6 = temp_v11 - 0x96;
        if (temp_v11 < 0x96) {
          temp_v9 = SBORROW4(temp_v11,temp_v8);
          temp_v6 = temp_v11 - temp_v8;
        }
        if (temp_v6 < 0 != temp_v9) {
          DAT_005f17c9 = 0;
          temp_v8 = *(int *)(temp_v5 + 0x18);
          if (*(int *)(temp_v8 + 8) != 0) {
            if (*(int *)(temp_v8 + 8) == 1) {
              DAT_005f17e8 = 0;
              DAT_005f17ec = 0;
              temp_v8 = *(int *)(temp_v5 + 0x18);
              if (*(char *)(temp_v8 + 0x95) != '\0') {
                temp_v6 = 0;
                if (DAT_005f1be8 != 0) {
                  temp_v6 = *(int *)(temp_v8 + 0x98);
                }
                if ((DAT_005f1be8 != 0 && temp_v6 != 0) && -1 < temp_v6) {
                  *(short *)(temp_v2 + 0x22) = (short)temp_v6;
                }
                if (0 < *(int *)(temp_v8 + 0xa8)) {
                  if (*(int *)(temp_v8 + 0xa4) != 0) {
                    DAT_005f1776 = 1;
                    DAT_005f1778 = *(unsigned int *)(temp_v8 + 0xa8);
                    textFormatBuffer(&DAT_005f177c,&LAB_00482f14,*(unsigned int *)(temp_v8 + 0xa8),
                                 *(unsigned int *)(temp_v8 + 0xac));
                  }
                  else {
                    sequenceRequestDefer(*(int *)(temp_v8 + 0xa8),*(unsigned int *)(temp_v8 + 0xac));
                  }
                }
                FUN_00376fa4(*(unsigned int *)(temp_v8 + 0x20));
                temp_v7 = *(unsigned int *)(temp_v8 + 0x20);
                if (0 < *(int *)(temp_v8 + 0x9c)) {
                  DAT_005f17ec = *(unsigned int *)(temp_v8 + 0xa0);
                  DAT_005f17e8 = *(int *)(temp_v8 + 0x9c);
                }
              }
            }
          }
          else {
            temp_v7 = *(unsigned int *)(temp_v8 + 0x20);
            if (*(int *)(temp_v2 + 0xdf4) != 0) {
              temp_v15 = 0;
              temp_v8 = *(int *)(temp_v8 + 0x68);
              temp_v6 = gameDataFlagTestBit(0x8b);
              if (temp_v6 != 0) {
                temp_v15 = 9;
              }
              if (temp_v8 < (int)((unsigned int)*(unsigned short *)(temp_v3 + 0x62) + temp_v15)) {
                DAT_005f17c9 = 1;
                FUN_003d4ed8(0x1000225);
              }
              else {
                DAT_005f17c9 = 0;
                DAT_005f1a58 = 0;
                DAT_005f18e8 = temp_v7;
                if (*(char *)(*(int *)(temp_v5 + 0x18) + 0x8b) == '\x03') {
                  temp_v1 = *(short *)(*(int *)(temp_v5 + 0x18) + 0x8c);
                  DAT_005f17c9 = 0;
                  DAT_005f18e8 = temp_v7;
                  DAT_005f1a58 = 0;
                  if (temp_v1 != 0) {
                    DAT_005f17c9 = 0;
                    DAT_005f1a58 = (int)temp_v1;
                  }
                }
              }
            }
            else {
              DAT_005f1a58 = 0;
              DAT_005f18e8 = temp_v7;
              if (*(char *)(*(int *)(temp_v5 + 0x18) + 0x8b) == '\x03') {
                temp_v1 = *(short *)(*(int *)(temp_v5 + 0x18) + 0x8c);
                DAT_005f17c9 = 0;
                DAT_005f18e8 = temp_v7;
                DAT_005f1a58 = 0;
                if (temp_v1 != 0) {
                  DAT_005f17c9 = 0;
                  DAT_005f1a58 = (int)temp_v1;
                }
              }
            }
          }
          piVar5 = *(int **)(temp_v5 + 0x18);
          temp_v8 = temp_v11;
          if (piVar5 != (int *)0x0) {
            temp_v6 = piVar5[2];
            (**(romwright_code **)(*piVar5 + 4))();
            *(unsigned int *)(temp_v5 + 0x18) = 0;
            if (temp_v6 == 0) {
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - 1;
            }
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1;
          }
        }
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x20) {
      return temp_v7;
    }
  } while( 1 );
}

} /* extern "C" */
