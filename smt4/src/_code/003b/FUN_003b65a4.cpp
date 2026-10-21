/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b65a4` (_code @ 0x3b65a4, 0x4ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetUnitRecord(...);
int FUN_002b0750(...);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002bf288(...);
int efctSetSpeed(void);
int FUN_003b6da4(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_10: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_10_stack;

extern unsigned char LAB_003b6a54; /* 0x3b6a54 */
extern int DAT_0044dc38; /* 0x44dc38 */
extern int DAT_0044dc3c; /* 0x44dc3c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: gameGetUnitRecord. */
extern int categoryGetColor(int);
/* Supplied declaration required: FUN_002b0750. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bf288. */
extern unsigned long long FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_003b6da4. */


void FUN_003b65a4(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,
                 unsigned int param_7,int param_8,int param_9,unsigned int param_10)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned long long temp_v8;
  
  temp_v1 = gameGetUnitRecord(param_3);
  temp_v8 = FUN_002bf4f8(0x28,param_4 + 0x68);
  temp_v4 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
  temp_v2 = (int)temp_v8;
  switch(param_2) {
  case 0:
    FUN_002bf288(2,0x28,0x56,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
    break;
  case 1:
    temp_v7 = param_9 == 0;
    temp_v6 = param_9;
    if (param_9 < 1) {
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v1 + 0x48);
      temp_v6 = temp_v4 - param_10;
      temp_v7 = temp_v4 == param_10;
    }
    temp_v1 = *(short *)(temp_v2 + 10) + param_6;
    temp_v5 = *(short *)(temp_v2 + 8) + param_5;
    if (!(temp_v7 || temp_v6 < 0 != (param_9 < 1 && SBORROW4(temp_v4,param_10)))) {
      FUN_002bf288(2,0x28,0x58,temp_v5,temp_v1,0x6a);
      FUN_002bf288(2,0x28,0x5a,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f
                  );
    }
    else {
      FUN_002bf288(2,0x28,0x57,temp_v5,temp_v1,0x6a);
      FUN_002bf288(2,0x28,0x59,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f
                  );
    }
    break;
  case 2:
    temp_v6 = -1;
    temp_v5 = *(int *)(param_1 + param_3 * 4 + 0xd5e0);
    if (param_3 < 0) {
      temp_v3 = gameGetPlayerData();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x72);
    }
    else {
      temp_v3 = gameGetUnitRecord();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x44);
    }
    temp_v4 = 1;
    temp_v3 = 0;
    do {
      if (((unsigned int)temp_v0 & (1 << (temp_v4 & 0xff))) != 0) {
        if (temp_v3 == temp_v5) {
          temp_v6 = categoryGetColor((int)(short)temp_v4);
          break;
        }
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0xb);
    if (DAT_0044dc3c != temp_v6) {
      drawSetColorFromRGBA8(temp_v6);
      DAT_0044dc3c = temp_v6;
    }
    uiDrawDemonIcon((int)*(short *)(temp_v1 + 0x46),
                 (int)*(short *)(temp_v2 + 8) + (int)*(short *)(DAT_0044dc38 + 8) + param_5,
                 (int)*(short *)(DAT_0044dc38 + 10) + (int)*(short *)(temp_v2 + 10) + param_6,0x6a,0);
    break;
  case 3:
    FUN_002bf288(2,0x28,0x5b,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f);
    FUN_002bf288(2,0x28,0x5c,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6f);
    FUN_002bf288(2,0x28,0x5d,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x74);
    FUN_002bf288(2,0x28,0x5e,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x79);
    break;
  case 4:
    temp_v7 = param_9 == 0;
    temp_v6 = param_9;
    if (param_9 < 1) {
      param_2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x48);
      temp_v6 = param_2 - param_10;
      temp_v7 = param_2 == param_10;
    }
    if (temp_v7 || temp_v6 < 0 != (param_9 < 1 && SBORROW4(param_2,param_10))) {
      temp_v6 = -1;
    }
    else {
      temp_v6 = 0xff;
    }
    if (DAT_0044dc3c != temp_v6) {
      drawSetColorFromRGBA8(temp_v6);
      DAT_0044dc3c = temp_v6;
    }
    FUN_002bdf94(6,(int)*(short *)(DAT_0044dc38 + 8) + (int)*(short *)(temp_v2 + 8) + param_5,
                 (int)*(short *)(DAT_0044dc38 + 10) + (int)*(short *)(temp_v2 + 10) + param_6,1,2,0x7e
                 ,&LAB_003b6a54,(unsigned int)*(unsigned char *)(temp_v1 + 0x48) + param_9);
    break;
  case 5:
    FUN_003b6da4(param_1,param_3,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6);
    return;
  case 6:
    if (param_8 != 0) {
      FUN_002bf288(2,0x28,0x60,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x83
                  );
    }
    else {
      FUN_002b0750(2,0x28,0x5f,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                   param_7,(int)*(short *)(*(int *)(DAT_0044dc38 + 0xc) + 2),0x83);
    }
    break;
  case 7:
    if (param_8 != 0) {
      if (param_9 < 8) {
        VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
        efctSetSpeed();
      }
      FUN_002bf288(2,0x28,0x61,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x88
                  );
      FUN_002bf288(2,0x28,0x61,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x89
                  );
    }
  }
  return;
}

} /* extern "C" */
