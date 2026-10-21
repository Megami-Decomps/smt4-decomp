/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331c60` (_code @ 0x331c60, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetPlayerData(void);
int gameGetSlotRecord(...);
int FUN_0034a290(void);
int FUN_003e503c(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char g_engineCleanupOwner; /* 0x588c40 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
extern int FUN_0022fd80(int, int);
/* Supplied declaration required: FUN_0034a290. */
extern int playerHasFlagBit(unsigned int);
extern int FUN_003e4940(void);
extern int FUN_003e4cb4(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
extern int bitsAt60Test(int, unsigned int);
extern int dataTable9Type3GetClamped(unsigned short, int);


void FUN_00331c60(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  
  temp_v0 = (*(int *)((unsigned char *)&g_engineCleanupOwner + 0x4));
  temp_v1 = gameGetSlotTable();
  gameGetPlayerData();
  temp_v8 = *param_1;
  temp_v9 = param_1[1];
  temp_v2 = playerHasFlagBit(1);
  if ((temp_v2 == 0) && (temp_v2 = playerHasFlagBit(10), temp_v2 == 0)) {
    temp_v2 = FUN_0022fd80(temp_v8,temp_v9);
    *(int *)(temp_v0 + 0x7870) = temp_v2 + *(int *)(temp_v0 + 0x7870);
  }
  temp_v12 = 1.0f;
  temp_v13 = 0x42c800003c23d70a;
  temp_v2 = 0;
  do {
    if (-1 < *(char *)(temp_v1 + temp_v2 + 0x1c88)) {
      temp_v3 = gameGetSlotRecord();
      temp_v4 = bitsAt60Test(temp_v3,1);
      if (((temp_v4 == 0) && (temp_v4 = bitsAt60Test(temp_v3,10), temp_v4 == 0)) &&
         (temp_v4 = bitsAt60Test(temp_v3,2), temp_v4 == 0)) {
        temp_v4 = gameGetSlotRecord((int)*(char *)(temp_v1 + temp_v2 + 0x1c88));
        temp_v7 = 0;
        temp_v11 = temp_v12;
        do {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x34 + temp_v7 * 2);
          if (temp_v5 != 0) {
            FUN_0034a290();
            temp_v6 = 0;
            if (temp_v5 != 0) {
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v5 + 0x2f);
            }
            if (temp_v5 != 0 && temp_v6 != 0) {
              temp_v10 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = temp_v10 * (float)temp_v13 * temp_v11;
            }
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 8);
        temp_v5 = (unsigned int)(temp_v8 * (int)(temp_v11 * (float)((unsigned long long)temp_v13 >> 0x20))) / 100;
        temp_v4 = dataTable9Type3GetClamped(*(unsigned short *)(temp_v4 + 100),temp_v9);
        temp_v6 = (temp_v5 * temp_v4) / 100;
        if ((temp_v6 == 0) && (temp_v5 != 0)) {
          temp_v6 = 1;
        }
        if ((temp_v6 == 0) && (temp_v8 != 0)) {
          temp_v6 = 1;
        }
        piVar8 = (int *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v3 + 0x66) * 0x28 + 0x7898);
        *piVar8 = temp_v6 + *piVar8;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  temp_v13 = 0x3f4ccccd;
  temp_v5 = 0;
  do {
    temp_v6 = temp_v5 & 0xffff;
    FUN_003e503c();
    temp_v1 = FUN_003e4940();
    if (temp_v1 != 0) {
      temp_v1 = FUN_003e4cb4(temp_v6);
      temp_v2 = dataTable9Type3GetClamped(*(unsigned short *)(temp_v6 + 100),temp_v9);
      temp_v6 = (unsigned int)(temp_v8 * temp_v2) / 100;
      if ((temp_v6 == 0) && (temp_v8 != 0)) {
        temp_v6 = 1;
      }
      temp_v12 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v1 == 0) {
        temp_v6 = VectorFloatToUnsigned(temp_v12 * (float)temp_v13,3);
      }
      if (((int)temp_v6 < 1) && (temp_v8 != 0)) {
        temp_v6 = 1;
      }
      temp_v1 = temp_v5 + 0x19;
      if (temp_v1 >= 0x25) {
        temp_v1 = 0x24;
      }
      piVar8 = (int *)(temp_v0 + temp_v1 * 0x28 + 0x7870);
      *piVar8 = temp_v6 + *piVar8;
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 0xc);
  return;
}

} /* extern "C" */
