/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e618c` (_code @ 0x3e618c, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(unsigned int, int);
int FUN_001ba3d4(...);
int scrScriptProcessStartEntry(...);
int FUN_003180c4(...);
int FUN_00359974(...);
int screenStartOrClear(unsigned int, int);
int FUN_003c1060(void);
int FUN_003c3e14(void);
int flagValueAdd(unsigned int, int);
int flagValueSub(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_003e6428; /* 0x3e6428 */
extern unsigned char LAB_003e6438; /* 0x3e6438 */
extern unsigned char LAB_003e644c; /* 0x3e644c */
extern unsigned char LAB_003e645c; /* 0x3e645c */

/* Supplied declaration required: FUN_0015f858. */
extern int FUN_001774d8(unsigned int);
/* Supplied declaration required: FUN_001ba3d4. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
extern int panelIsMissingOrFlagClear(void);
extern int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: flagValueSub. */


void FUN_003e618c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 2) {
    temp_v0 = param_1 + *(int *)(param_1 + 0x4c) * 0xc;
    temp_v6 = *(unsigned int *)(temp_v0 + 0x28);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x24) >> 0x10;
    temp_v0 = FUN_001ba3d4(temp_v1);
    temp_v2 = FUN_001774d8(temp_v1);
    if (temp_v0 >= temp_v2) {
      temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),&LAB_003e644c);
    }
    else {
      temp_v0 = FUN_001ba3d4(temp_v6 & 0xffff);
      if ((int)(temp_v6 >> 0x10) <= temp_v0) {
        temp_v0 = param_1 + *(int *)(param_1 + 0x4c) * 0xc;
        temp_v6 = *(unsigned int *)(temp_v0 + 0x24);
        temp_v1 = *(unsigned int *)(temp_v0 + 0x28);
        flagValueSub(temp_v1 & 0xffff,temp_v1 >> 0x10);
        temp_v3 = FUN_001ba3d4(0x7c4);
        temp_v4 = FUN_001ba3d4(0x7c5);
        temp_v5 = FUN_001ba3d4(0x7c6);
        FUN_00359974(0x18,temp_v3,0xffffffff,0);
        FUN_00359974(0x19,temp_v4,0xffffffff,0);
        FUN_00359974(0x1a,temp_v5,0xffffffff,0);
        screenStartOrClear(*(unsigned int *)(param_1 + 0x10),0x15);
        flagValueAdd(temp_v6 >> 0x10,1);
        *(unsigned int *)(param_1 + 8) = 99;
        return;
      }
      temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),&LAB_003e645c);
    }
    if (-1 < temp_v0) {
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18));
    }
    *(unsigned int *)(param_1 + 8) = 3;
    return;
  }
  if (temp_v0 < 3) {
    if (temp_v0 == 0) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + *(int *)(param_1 + 0x4c) * 0xc + 0x26);
      if (temp_v1 != 0) {
        FUN_0015f858(temp_v1,0);
        FUN_003180c4(0,temp_v1);
      }
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + *(int *)(param_1 + 0x4c) * 0xc + 0x28);
      if (temp_v1 != 0) {
        FUN_0015f858(temp_v1,0);
        FUN_003180c4(1,temp_v1);
      }
      FUN_00359974(0x18,*(unsigned short *)(param_1 + *(int *)(param_1 + 0x4c) * 0xc + 0x2a),0xffffffff,
                   0);
      FUN_003c1060();
      temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),&LAB_003e6438);
      if (-1 < temp_v0) {
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18));
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    if (((temp_v0 == 1) && (temp_v0 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x18)), temp_v0 == 2)) &&
       (temp_v0 = panelIsMissingOrFlagClear(), temp_v0 != 0)) {
      temp_v0 = FUN_002a4b74();
      if (temp_v0 == 0) {
        *(unsigned int *)(param_1 + 8) = 2;
      }
      else {
        *(unsigned int *)(param_1 + 8) = 99;
      }
      FUN_003c3e14();
      return;
    }
  }
  else {
    if (temp_v0 == 3) {
      temp_v0 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x18));
      if (temp_v0 == 2) {
        *(unsigned int *)(param_1 + 8) = 99;
      }
      return;
    }
    if (temp_v0 == 99) {
      temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),&LAB_003e6428);
      if (-1 < temp_v0) {
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18));
      }
      *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  return;
}

} /* extern "C" */
