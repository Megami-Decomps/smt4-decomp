/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f328` (_code @ 0x23f328, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fb43c(int, int, int, int, int, int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int saveSlotFindSelected(void);
extern int gameGetPlayerData(void);
extern int FUN_00187168(void);
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
extern int btlMainGetUnk14(void);
extern int btlScriptUnitHasFlags(unsigned int);
extern int uiEntryGetState(unsigned int, int);
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: FUN_004fb43c. */


void FUN_0023f328(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v5 = param_1 + param_2 * 4;
  temp_v4 = param_1 + param_2 * 2;
  temp_v6 = temp_v5 + 0x4000;
  temp_v1 = 0xffff;
  *(unsigned short *)(temp_v4 + 0x41f2) = 0xffff;
  *(unsigned short *)(temp_v4 + 0x41fc) = 0xffff;
  *(unsigned short *)(temp_v4 + 0x4206) = 0xffff;
  if (param_3 != 0) {
    temp_v1 = 0xfffc;
  }
  *(unsigned int *)(temp_v5 + 0x421c) = 0;
  if (param_3 != 0) {
    *(unsigned short *)(temp_v4 + 0x4210) = temp_v1;
  }
  if (param_2 != 0) {
    if (param_2 == 4) {
      temp_v4 = saveSlotFindSelected();
      temp_v5 = FUN_00187168();
      if (temp_v5 == 0) {
        return;
      }
      *(unsigned short *)(param_1 + 0x41fa) = *(unsigned short *)(temp_v4 + 0x2a);
      *(unsigned short *)(param_1 + 0x4218) = 0xfffd;
      *(unsigned int *)(param_1 + 0x422c) = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
      return;
    }
  }
  else {
    temp_v7 = param_1 + 0x4000;
    if (*(int *)(param_1 + 0x4bac) != 0) {
      if (*(int *)(param_1 + 0x4bac) == 1) {
        temp_v4 = btlMainGetUnk14();
        if (temp_v4 == 0) {
          *(unsigned char *)(temp_v7 + 0x1ed) = 1;
          return;
        }
        if (param_3 != 0) {
          *(unsigned short *)(param_1 + 0x4210) = 0xfffe;
        }
        *(unsigned short *)(param_1 + 0x41f2) = *(unsigned short *)(temp_v4 + 0x2a);
        *(unsigned short *)(param_1 + 0x41fc) = *(unsigned short *)(temp_v4 + 0x2c);
        *(unsigned short *)(param_1 + 0x4206) = *(unsigned short *)(temp_v4 + 100);
        *(unsigned int *)(param_1 + 0x421c) = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
        temp_v4 = bitsAt60Test(temp_v4,1);
        if (temp_v4 == 0) {
          temp_v0 = 0;
          *(unsigned char *)(param_1 + 0x41ed) = temp_v0;
          return;
        }
        temp_v0 = 1;
        *(unsigned char *)(param_1 + 0x41ed) = temp_v0;
        return;
      }
    }
    else {
      temp_v4 = gameGetPlayerData();
      *(unsigned short *)(param_1 + 0x41f2) = *(unsigned short *)(temp_v4 + 0x2a);
      *(unsigned short *)(param_1 + 0x41fc) = *(unsigned short *)(temp_v4 + 0x2c);
      *(unsigned short *)(param_1 + 0x4206) = *(unsigned short *)(temp_v4 + 0x62);
      *(unsigned short *)(param_1 + 0x4210) = 0xffff;
      *(unsigned int *)(param_1 + 0x421c) = 0xffffffff;
      if ((*(unsigned short *)(temp_v4 + 0x5e) & 2) == 0) {
        temp_v0 = 0;
        *(unsigned char *)(param_1 + 0x41ed) = temp_v0;
        return;
      }
      temp_v0 = 1;
      *(unsigned char *)(param_1 + 0x41ed) = temp_v0;
      return;
    }
  }
  temp_v2 = gameGetSlotTable();
  if (0 < *(int *)(temp_v5 + 0x4bb0)) {
    if (param_3 != 0) {
      *(short *)(temp_v4 + 0x4210) = (short)*(char *)(temp_v2 + param_2 + 0x1c9f);
    }
    temp_v5 = param_1 + param_2;
    temp_v7 = temp_v5 + 0x4000;
    if (*(short *)(temp_v4 + 0x4210) >= 0) {
      temp_v3 = gameGetSlotRecord((int)*(short *)(temp_v4 + 0x4210));
      if ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) != 0) {
        *(unsigned char *)(temp_v2 + param_2 + 0x1c9f) = 0xff;
        *(unsigned char *)(temp_v5 + 0x41ed) = 1;
        temp_v4 = btlScriptUnitHasFlags(*(unsigned int *)(param_1 + 0x3874));
        if (temp_v4 == 0) {
          FUN_004fb43c(0,0,0x1000295,0,1,0,0);
        }
      }
      else {
        *(unsigned short *)(temp_v4 + 0x41f2) = *(unsigned short *)(temp_v3 + 0x2a);
        *(unsigned short *)(temp_v4 + 0x41fc) = *(unsigned short *)(temp_v3 + 0x2c);
        *(unsigned short *)(temp_v4 + 0x4206) = *(unsigned short *)(temp_v3 + 100);
        *(unsigned int *)(temp_v6 + 0x21c) = (unsigned int)*(unsigned short *)(temp_v3 + 0x62);
        *(unsigned char *)(temp_v5 + 0x41ed) = 0;
        temp_v4 = bitsAt60Test(temp_v3,1);
        if ((temp_v4 != 0) &&
           (temp_v4 = uiEntryGetState(*(unsigned int *)(param_1 + 0x3874),param_2), temp_v4 == 0)) {
          *(unsigned char *)(temp_v7 + 0x1ed) = 1;
          return;
        }
      }
    }
    else if (*(char *)(temp_v5 + 0x40d8) == '\0') {
      if (*(char *)(temp_v5 + 0x41e8) != '\0') {
        return;
      }
      *(unsigned char *)(temp_v7 + 0x1ed) = 1;
      return;
    }
  }
  return;
}

} /* extern "C" */
