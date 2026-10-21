/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020b490` (_code @ 0x20b490, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int sysPlaySe(...);
int FUN_00168980(int);
int FUN_0019de98(int, unsigned int);
int FUN_0023b45c(int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_002c7ce8(int);
int FUN_002c8538(int);
int FUN_002c85b0(int);
int FUN_00333f6c(void);
int FUN_0033449c(int);
int FUN_00371f18(void);
int FUN_00387ac4(int);
int FUN_003a7b2c(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_0019de98. */
extern unsigned int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
extern unsigned int gameDataBlocksGetWord(void);
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00371f18. */
/* Supplied declaration required: FUN_00387ac4. */
extern int aocDataBlockHasEntries(void);
/* Supplied declaration required: FUN_003a7b2c. */


void FUN_0020b490(int param_1,unsigned int param_2)

{
/* irregular: 3 goto(s); 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x4364);
  *(unsigned int *)(param_1 + 0x4364) = param_2;
  *(unsigned int *)(param_1 + 0x4368) = temp_v1;
  *(unsigned int *)(param_1 + 0x436c) = 0;
  *(unsigned int *)(param_1 + 0x4374) = 0;
  *(unsigned int *)(param_1 + 0x437c) = 0;
  temp_v2 = 0;
  if (temp_v2 < *(short *)(param_1 + 0x43b4)) {
    do {
      ifTouchRegionRemove();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x43b4));
  }
  *(unsigned short *)(param_1 + 0x43b4) = 0;
  temp_v2 = *(int *)(param_1 + 0x4364);
  if (temp_v2 == 0x10) {
    temp_v1 = 0x6a;
  }
  else if (temp_v2 < 0x11) {
    if (temp_v2 != 0xc) {
      if (temp_v2 < 0xd) {
        if (temp_v2 == 1) {
          temp_v1 = 100;
        }
        else {
          if (temp_v2 != 0xb) goto LAB_0020b584;
          temp_v1 = 0xa0;
        }
      }
      else if (temp_v2 == 0xe) {
        temp_v1 = 0x68;
      }
      else {
        if (temp_v2 != 0xf) goto LAB_0020b584;
        temp_v1 = 0xe1;
      }
    }
    else {
      temp_v1 = 0x67;
    }
  }
  else if (temp_v2 == 0x11) {
    temp_v1 = 0x6c;
  }
  else if (temp_v2 == 0x12) {
    temp_v1 = 0xe3;
  }
  else if (temp_v2 == 0x13) {
    temp_v1 = 0x66;
  }
  else {
    if (temp_v2 != 0x14) goto LAB_0020b584;
    temp_v1 = 0x67;
  }
  FUN_0019de98(0,0xf4f4f4ff);
  sysPlaySe(temp_v1);
LAB_0020b584:
  if (*(int *)(param_1 + 0x4364) == 0x17) {
    temp_v2 = aocDataBlockHasEntries();
    if (temp_v2 != 0) {
      FUN_00371f18();
      FUN_003a7b2c();
      FUN_002c85b0(0);
      FUN_002c7ce8(0);
      FUN_0023b45c(0);
      FUN_002c8538(0);
      FUN_0033449c(0);
      FUN_00333f6c();
      temp_v0 = gameDataBlocksGetWord();
      if ((temp_v0 != 0) && (puVar2 = (unsigned int *)gameGetSlotTable(), temp_v0 <= *puVar2)) {
        *(unsigned int *)(param_1 + 0x4364) = 0x16;
        sysPlaySe(0x92);
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x43a0),5);
        return;
      }
      FUN_00387ac4(0);
      FUN_00168980(3);
      return;
    }
    *(unsigned int *)(param_1 + 0x4364) = 0x18;
  }
  return;
}

} /* extern "C" */
