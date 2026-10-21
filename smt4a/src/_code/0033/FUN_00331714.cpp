/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331714` (_code @ 0x331714, 0x524 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetPlayerData(void);
int FUN_00192608(void);
int FUN_0020b490(int, int);
int FUN_00249a08(void);
int bgmReleaseStopped(void);
int FUN_002c8778(int);
int FUN_002f0c18(void);
int FUN_0034a290(void);
int soundChannelRequestIfEnabled(int, int, int);
int soundChannelStopAll(int);
void FUN_003de02c(unsigned int frames);
int FUN_003e503c(unsigned int);
int FUN_00408184(int, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_00588c44; /* 0x588c44 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: gameGetPlayerData. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00192608. */
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int FUN_001bd100(unsigned short);
/* Supplied declaration required: FUN_0020b490. */
/* Supplied declaration required: FUN_00249a08. */
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: FUN_002c8778. */
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
extern int FUN_003ddfd8(void);
extern int playerHasFlagBit(unsigned int);
extern int actorIsActive(void);
extern int FUN_003e4cb4(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_00408184. */
extern int bitsAt60Test(int, unsigned int);
extern int mapMainIsBusy(void);


/* WARNING: Removing unreachable block (ram,0x00331818) */
/* WARNING: Removing unreachable block (ram,0x00331824) */
/* WARNING: Removing unreachable block (ram,0x00331828) */

void FUN_00331714(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned short *puVar9;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  
  temp_v3 = DAT_00588c44;
  temp_v4 = gameGetSlotTable();
  gameGetPlayerData();
  FUN_0020b490(temp_v3,0);
  FUN_002f0c18();
  FUN_002c8778(*(unsigned short *)(param_1 + 0x38));
  temp_v5 = mapMainIsBusy();
  if ((temp_v5 != 0) || (temp_v5 = lmapMainIsRunning(), temp_v5 != 0)) {
    bgmReleaseStopped();
    soundChannelStopAll(0xf);
    FUN_00249a08();
  }
  else {
    temp_v5 = FUN_003ddfd8();
    if (temp_v5 == 0) {
      FUN_003de02c(0x1e);
    }
  }
  temp_v0 = *(short *)(param_1 + 0x38);
  if (((temp_v0 != 2 && temp_v0 != 8) && ((temp_v0 != 10 && temp_v0 != 0x10) && temp_v0 != 0x11)) &&
     ((temp_v0 != 0x18 || (temp_v5 = gameFlagIsSet(0x4c9), temp_v5 == 0)))) {
    soundChannelRequestIfEnabled(0x100002d,0,0x3c);
  }
  temp_v5 = *(int *)(param_1 + 0x30);
  temp_v12 = 0;
  temp_v15 = 0;
  *(int *)(temp_v3 + 0x4428) = *(int *)(temp_v3 + 0x4428) + temp_v5;
  do {
    temp_v9 = *(int *)(param_1 + temp_v15 * 4);
    if (temp_v9 != 0) {
      temp_v14 = param_1 + temp_v15 * 4;
      temp_v13 = *(int *)(temp_v14 + 0x18);
      if (temp_v13 != 0) {
        temp_v6 = 0;
        do {
          temp_v10 = temp_v3 + temp_v6 * 4;
          temp_v11 = *(int *)(temp_v10 + 0x43f0);
          if (temp_v11 == temp_v9) {
            piVar8 = (int *)(temp_v3 + temp_v6 * 4 + 0x4408);
            *piVar8 = *piVar8 + temp_v13;
            break;
          }
          if (temp_v11 == 0) {
            *(int *)(temp_v3 + temp_v6 * 4 + 0x43f0) = temp_v9;
            *(int *)(temp_v10 + 0x4408) = temp_v13;
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 6);
        temp_v12 = temp_v12 + *(int *)(temp_v14 + 0x18);
      }
    }
    temp_v15 = temp_v15 + 1;
    if (temp_v15 >= 6) {
      temp_v15 = FUN_001bd100(*(unsigned short *)(param_1 + 0x38));
      if (temp_v15 == 0) {
        FUN_00408184(0x22,1);
        FUN_00408184(0x23,temp_v5);
        FUN_00408184(0x24,temp_v12);
      }
      temp_v12 = *(int *)(param_1 + 0x34);
      temp_v5 = playerHasFlagBit(1);
      temp_v18 = 1.0f;
      temp_v19 = 0x42c800003c23d70a;
      if ((temp_v5 == 0) && (temp_v5 = playerHasFlagBit(10), temp_v5 == 0)) {
        temp_v17 = temp_v18;
        puVar9 = (unsigned short *)gameGetPlayerData();
        temp_v5 = 0;
        do {
          temp_v7 = 0;
          switch(temp_v5) {
          case 0:
            temp_v7 = (unsigned int)*puVar9;
            break;
          case 1:
            temp_v7 = (unsigned int)puVar9[1];
            break;
          case 2:
            temp_v7 = (unsigned int)puVar9[2];
            break;
          case 3:
            temp_v7 = (unsigned int)puVar9[3];
            break;
          case 4:
            temp_v7 = (unsigned int)puVar9[4];
            break;
          case 5:
            temp_v7 = (unsigned int)puVar9[5];
            break;
          case 6:
            temp_v7 = (unsigned int)puVar9[6];
          }
          FUN_00192608();
          temp_v8 = 0;
          if (temp_v7 != 0) {
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x3a);
          }
          if (temp_v7 != 0 && temp_v8 != 0) {
            FUN_0034a290();
            temp_v7 = 0;
            if (temp_v8 != 0) {
              temp_v7 = (unsigned int)*(unsigned char *)(temp_v8 + 0x2f);
            }
            if (temp_v8 != 0 && temp_v7 != 0) {
              temp_v16 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = temp_v16 * (float)temp_v19 * temp_v17;
            }
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 7);
        *(int *)(temp_v3 + 0x7870) =
             (temp_v12 * (int)(temp_v17 * (float)((unsigned long long)temp_v19 >> 0x20))) / 100 +
             *(int *)(temp_v3 + 0x7870);
      }
      temp_v20 = 0x3e99999a;
      temp_v5 = 0;
      do {
        if (-1 < *(char *)(temp_v4 + temp_v5 + 0x1c88)) {
          temp_v15 = gameGetSlotRecord();
          temp_v9 = bitsAt60Test(temp_v15,1);
          if ((temp_v9 == 0) && (temp_v9 = bitsAt60Test(temp_v15,10), temp_v9 == 0)) {
            temp_v2 = 0;
            temp_v1 = *(char *)(temp_v4 + temp_v5 + 0x1c88);
            if ((*(char *)(temp_v4 + 0x1ca0) == temp_v1) ||
               ((*(char *)(temp_v4 + 0x1ca1) == temp_v1 || (*(char *)(temp_v4 + 0x1ca2) == temp_v1)))) {
              temp_v2 = 1;
            }
            temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = temp_v12;
            if (((!temp_v2) && (temp_v9 = (int)(temp_v17 * (float)temp_v20), temp_v12 != 0)) && (temp_v9 < 1))
            {
              temp_v9 = 1;
            }
            temp_v13 = 0;
            temp_v17 = temp_v18;
            do {
              temp_v7 = (unsigned int)*(unsigned short *)(temp_v15 + 0x34 + temp_v13 * 2);
              if (temp_v7 != 0) {
                FUN_0034a290();
                temp_v8 = 0;
                if (temp_v7 != 0) {
                  temp_v8 = (unsigned int)*(unsigned char *)(temp_v7 + 0x2f);
                }
                if (temp_v7 != 0 && temp_v8 != 0) {
                  temp_v16 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = temp_v16 * (float)temp_v19 * temp_v17;
                }
              }
              temp_v13 = temp_v13 + 1;
            } while (temp_v13 < 8);
            piVar8 = (int *)(temp_v3 + (unsigned int)*(unsigned char *)(temp_v15 + 0x66) * 0x28 + 0x7898);
            *piVar8 = (temp_v9 * (int)(temp_v17 * (float)((unsigned long long)temp_v19 >> 0x20))) / 100 + *piVar8;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x18);
      temp_v7 = 0;
      temp_v19 = 0x3f4ccccd;
      do {
        temp_v8 = temp_v7 & 0xffff;
        FUN_003e503c(temp_v8);
        temp_v4 = actorIsActive();
        if (temp_v4 != 0) {
          temp_v5 = FUN_003e4cb4(temp_v8);
          temp_v18 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = temp_v12;
          if (((temp_v5 == 0) && (temp_v4 = (int)(temp_v18 * (float)temp_v19), temp_v12 != 0)) && (temp_v4 < 1))
          {
            temp_v4 = 1;
          }
          temp_v5 = temp_v7 + 0x19;
          if (temp_v5 >= 0x25) {
            temp_v5 = 0x24;
          }
          piVar8 = (int *)(temp_v3 + temp_v5 * 0x28 + 0x7870);
          *piVar8 = temp_v4 + *piVar8;
        }
        temp_v7 = temp_v7 + 1;
      } while ((int)temp_v7 < 0xc);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
