/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283d74` (_code @ 0x283d74, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0022838c(...);
int FUN_00284fdc(...);
int saveNameBlockReset(...);
int sysMemClear(...);
int gameDataBlocksClearSlots(...);
int FUN_00353b00(...);
int FUN_003df7c4(...);
int FUN_003e45bc(...);
int gameFlagSetValue(...);
int FUN_00417b70(...);
int FUN_00417e08(...);
int flagValueAdd(...);
int FUN_004ccf78(...);
int strncpy(...);

/* stack frame of param_1: 6 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_005311fc; /* 0x5311fc */

/* Supplied declaration required: textFormatBuffer. */
extern short *gameGetPlayerData(void);
extern unsigned int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_0022838c. */
extern unsigned int gameDataGetPlayerName(void);
/* Supplied declaration required: FUN_00284fdc. */
/* Supplied declaration required: saveNameBlockReset. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: gameDataBlocksClearSlots. */
/* Supplied declaration required: FUN_00353b00. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_003e45bc. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417b70. */
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: FUN_004ccf78. */


void FUN_00283d74(int param_1)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  short *psVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  short temp_v3 [8];
  
  FUN_0022838c();
  puVar1 = (unsigned int *)gameGetSlotTable();
  if (param_1 == 0) {
    *puVar1 = 0;
    *(unsigned char *)((int)puVar1 + 0x1ca3) = 8;
    temp_v1 = 0;
    temp_v3[0] = 0x3d;
    temp_v3[1] = 0xba;
    temp_v3[2] = 0x30d;
    temp_v3[3] = 0x1a1;
    temp_v3[4] = 0x219;
    temp_v3[5] = 0x291;
    temp_v3[6] = 0x295;
    temp_v3[7] = -1;
    do {
      if (temp_v3[temp_v1] != 0) {
        flagValueAdd(temp_v3[temp_v1],1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
    psVar2 = (short *)gameGetPlayerData();
    sysMemClear(psVar2,100);
    psVar2[0x31] = 1;
    psVar2[0x30] = 0;
    strncpy(psVar2 + 0x26,&DAT_005311fc,0x12);
    *(unsigned char *)((int)psVar2 + 0x5d) = 0;
    FUN_004ccf78(0);
    *psVar2 = temp_v3[0];
    psVar2[1] = temp_v3[1];
    psVar2[2] = temp_v3[2];
    psVar2[3] = temp_v3[3];
    psVar2[4] = temp_v3[4];
    psVar2[5] = temp_v3[5];
    psVar2[6] = temp_v3[6];
    FUN_003df7c4(0);
    psVar2[0x15] = psVar2[0xe];
    psVar2[0x16] = psVar2[0xf];
    FUN_00284fdc();
    gameDataBlocksClearSlots();
    temp_v0 = gameDataGetPlayerName();
    textFormatBuffer(temp_v0,"沂覂讂膂蒂辂㴀먀ഀꄃᤁ鄂锂＂ÿ");
    flagValueAdd(0x33f,1);
    FUN_00417b70(1);
    FUN_00417e08(1);
    saveNameBlockReset();
    gameFlagSetValue(0x52b,1);
    gameFlagSetValue(0x418,0,1);
    gameFlagSetValue(0x416,1);
    gameFlagSetValue(0x48e,1);
    gameFlagSetValue(0x556,1);
    gameFlagSetValue(0x557,1);
    gameFlagSetValue(0x555,1);
    gameFlagSetValue(0x4ca,1);
    gameFlagSetValue(0x49a,1);
    temp_v2 = 0x400;
    do {
      gameFlagSetValue(temp_v2,1);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x418);
    gameFlagSetValue(0x403,0,1);
    gameFlagSetValue(0x401,0);
    gameFlagSetValue(0x406,0,1);
    gameFlagSetValue(0x40a,0,1);
    gameFlagSetValue(0x40b,0,1);
    gameFlagSetValue(0x40d,0,1);
    gameFlagSetValue(0x40e,0,1);
    gameFlagSetValue(0x40f,0,1);
    gameFlagSetValue(0x408,0,1);
    gameFlagSetValue(0x464,0,1);
    FUN_003e45bc(0x18,1,0);
    FUN_003e45bc(0x2e,1,0);
    FUN_003e45bc(0x76,1,0);
    FUN_00353b00(1);
  }
  return;
}

} /* extern "C" */
