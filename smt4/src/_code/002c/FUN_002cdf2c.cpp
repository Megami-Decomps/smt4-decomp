/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdf2c` (_code @ 0x2cdf2c, 0x39c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203640(int);
int FUN_00269dc8(void);
int bgmReleaseStopped(void);
int FUN_0027581c(void);
int FUN_00283e48(void);
int FUN_00290ed8(int);
int FUN_00296774(int, int);
int FUN_0029be5c(int, int);
int soundChannelStopAll(int);
int soundChannelRequestIfEnabled(int, int);
int gameGetPlayerData(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int g_result; /* 0x44dc20 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00203640. */
/* Supplied declaration required: FUN_00269dc8. */
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: FUN_0027581c. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: FUN_00290ed8. */
extern int FUN_00295d08(unsigned int);
/* Supplied declaration required: FUN_00296774. */
extern int FUN_00298f88(unsigned short);
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: soundChannelStopAll. */
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: soundChannelRequestIfEnabled. */
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
/* Supplied declaration required: gameGetPlayerData. */
extern int lmapMainIsRunning(void);
extern int FUN_0033361c(void);
extern int mapMainIsBusy(void);


/* WARNING: Removing unreachable block (ram,0x002cdff4) */
/* WARNING: Removing unreachable block (ram,0x002ce000) */
/* WARNING: Removing unreachable block (ram,0x002ce004) */

void FUN_002cdf2c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  
  temp_v2 = g_result;
  temp_v3 = gameGetSlotTable();
  gameGetPlayerData();
  FUN_00296774(temp_v2,0);
  FUN_00269dc8();
  FUN_00203640(*(unsigned short *)(param_1 + 0x38));
  temp_v4 = mapMainIsBusy();
  if ((temp_v4 != 0) || (temp_v4 = lmapMainIsRunning(), temp_v4 != 0)) {
    bgmReleaseStopped();
    soundChannelStopAll(0xf);
    FUN_0027581c();
  }
  else {
    temp_v4 = FUN_0033361c();
    if (temp_v4 == 0) {
      FUN_00290ed8(0x1e);
    }
  }
  soundChannelRequestIfEnabled(0x100003c,0);
  temp_v4 = *(int *)(param_1 + 0x30);
  temp_v11 = 0;
  temp_v14 = 0;
  *(int *)(temp_v2 + 0x3650) = *(int *)(temp_v2 + 0x3650) + temp_v4;
  do {
    temp_v8 = *(int *)(param_1 + temp_v14 * 4);
    if (temp_v8 != 0) {
      temp_v13 = param_1 + temp_v14 * 4;
      temp_v12 = *(int *)(temp_v13 + 0x18);
      if (temp_v12 != 0) {
        temp_v5 = 0;
        do {
          temp_v9 = temp_v2 + temp_v5 * 4;
          temp_v10 = *(int *)(temp_v9 + 0x3618);
          if (temp_v10 == temp_v8) {
            piVar7 = (int *)(temp_v2 + temp_v5 * 4 + 0x3630);
            *piVar7 = *piVar7 + temp_v12;
            break;
          }
          if (temp_v10 == 0) {
            *(int *)(temp_v2 + temp_v5 * 4 + 0x3618) = temp_v8;
            *(int *)(temp_v9 + 0x3630) = temp_v12;
            break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
        temp_v11 = temp_v11 + *(int *)(temp_v13 + 0x18);
      }
    }
    temp_v14 = temp_v14 + 1;
    if (temp_v14 >= 6) {
      temp_v14 = FUN_00298f88(*(unsigned short *)(param_1 + 0x38));
      if (temp_v14 == 0) {
        FUN_0029be5c(0x22,1);
        FUN_0029be5c(0x23,temp_v4);
        FUN_0029be5c(0x24,temp_v11);
      }
      temp_v11 = *(int *)(param_1 + 0x34);
      temp_v4 = FUN_00295d08(1);
      if ((temp_v4 == 0) && (temp_v4 = FUN_00295d08(10), temp_v4 == 0)) {
        *(int *)(temp_v2 + 0x35b4) = *(int *)(temp_v2 + 0x35b4) + temp_v11;
      }
      temp_v19 = 0x3e99999a;
      temp_v17 = 1.0f;
      temp_v18 = 0x42c800003c23d70a;
      temp_v4 = 0;
      do {
        if (-1 < *(char *)(temp_v3 + temp_v4 + 0x90f0)) {
          temp_v14 = gameGetUnitRecord();
          temp_v8 = flagWordTestBit(temp_v14,1);
          if (((temp_v8 == 0) && (temp_v8 = flagWordTestBit(temp_v14,10), temp_v8 == 0)) &&
             (temp_v8 = flagWordTestBit(temp_v14,2), temp_v8 == 0)) {
            temp_v1 = 0;
            temp_v0 = *(char *)(temp_v3 + temp_v4 + 0x90f0);
            if (((*(char *)(temp_v3 + 0x9108) == temp_v0) || (*(char *)(temp_v3 + 0x9109) == temp_v0)) ||
               (*(char *)(temp_v3 + 0x910a) == temp_v0)) {
              temp_v1 = 1;
            }
            temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = temp_v11;
            if (((!temp_v1) && (temp_v8 = (int)(temp_v15 * (float)temp_v19), temp_v11 != 0)) && (temp_v8 < 1))
            {
              temp_v8 = 1;
            }
            temp_v12 = 0;
            temp_v15 = temp_v17;
            do {
              temp_v6 = (unsigned int)*(unsigned short *)(temp_v14 + 0x34 + temp_v12 * 2);
              if (temp_v6 != 0) {
                FUN_00283e48();
                temp_v7 = 0;
                if (temp_v6 != 0) {
                  temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2f);
                }
                if (temp_v6 != 0 && temp_v7 != 0) {
                  temp_v16 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v15 = temp_v16 * (float)temp_v18 * temp_v15;
                }
              }
              temp_v12 = temp_v12 + 1;
            } while (temp_v12 < 8);
            piVar7 = (int *)(temp_v2 + (unsigned int)*(unsigned char *)(temp_v14 + 0x4a) * 4 + 0x35b8);
            *piVar7 = (temp_v8 * (int)(temp_v15 * (float)((unsigned long long)temp_v18 >> 0x20))) / 100 + *piVar7;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
