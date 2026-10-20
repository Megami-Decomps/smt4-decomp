/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e65a4` (_code @ 0x3e65a4, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(unsigned int, int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_003180c4(int, unsigned int);
int FUN_003c1060(void);
int FUN_003c3e14(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0015f858. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
extern int panelIsMissingOrFlagClear(void);
extern int tableGroupFindEntryIndex(unsigned int, char *);
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */


void FUN_003e65a4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
        if (temp_v0 != 2) {
          return;
        }
        temp_v0 = panelIsMissingOrFlagClear();
        if (temp_v0 == 0) {
          return;
        }
        temp_v0 = FUN_002a4b74();
        if (!(temp_v0 == -1 || temp_v0 == 3)) {
          *(int *)(param_1 + 0x4c) = temp_v0;
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18),*(unsigned short *)(param_1 + temp_v0 * 0xc + 0x2c)
                      );
          *(unsigned int *)(param_1 + 8) = 3;
        }
        else {
          temp_v1 = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 3;
          *(unsigned int *)(param_1 + 8) = 0;
          *(unsigned int *)(param_1 + 0xc) = temp_v1;
        }
        FUN_003c3e14();
        return;
      }
      if (temp_v0 != 3) {
        return;
      }
      temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
      if (temp_v0 != 2) {
        return;
      }
      temp_v1 = 1;
      *(unsigned int *)(param_1 + 8) = temp_v1;
      return;
    }
  }
  else {
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x26);
    if (temp_v2 != 0) {
      FUN_0015f858(temp_v2,0);
      FUN_003180c4(0,temp_v2);
    }
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x32);
    if (temp_v2 != 0) {
      FUN_0015f858(temp_v2,0);
      FUN_003180c4(1,temp_v2);
    }
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x3e);
    if (temp_v2 != 0) {
      FUN_0015f858(temp_v2,0);
      FUN_003180c4(2,temp_v2);
    }
  }
  FUN_003c1060();
  temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),"npcShop_ItemDes_select");
  if (-1 < temp_v0) {
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18),temp_v0);
  }
  temp_v1 = 2;
  *(unsigned int *)(param_1 + 8) = temp_v1;
  return;
}

} /* extern "C" */
