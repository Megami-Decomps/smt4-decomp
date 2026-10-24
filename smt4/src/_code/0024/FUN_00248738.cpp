/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248738` (_code @ 0x248738, 0x360 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gauntletAppSortMenuEntries(void);
int appCheckPurchaseRequirements(void);
int FUN_00295eb0(int, int, int);
int FUN_0029f848(int, unsigned int, int, int, int, int);
int FUN_002ae584(void);
int ifTouchRegionRemove(void);
int timerStart(...);
int spriteStartAnimationByIndex(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: gauntletAppSortMenuEntries. */
/* Supplied declaration required: FUN_00248738. */
/* Supplied declaration required: appCheckPurchaseRequirements. */
extern int flagBitIsSet(unsigned int);
/* Supplied declaration required: FUN_00295eb0. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002ae584. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: spriteStartAnimationByIndex. */


unsigned int FUN_00248738(int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  switch(param_2) {
  case 0:
    timerStart(param_1 + 0x2d8,0);
    *(unsigned int *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      *(unsigned int *)(param_1 + 0x74) = 0x2e;
      *(unsigned int *)(param_1 + 0x2a8) = 1;
    }
    else if (*(char *)(param_1 + 0x2b5) != '\0') {
      *(unsigned int *)(param_1 + 0x74) = 0x18;
      *(unsigned int *)(param_1 + 0x2a8) = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2b7) != '\0') {
        *(unsigned int *)(param_1 + 0x74) = 0x76;
        *(unsigned int *)(param_1 + 0x2a8) = 1;
        FUN_0029f848(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
        gauntletAppSortMenuEntries();
        break;
      }
      temp_v2 = 1;
      do {
        temp_v0 = temp_v2;
        FUN_002ae584();
        if ((temp_v0 != 0) &&
           ((temp_v3 = flagBitIsSet(temp_v2), temp_v3 != 0 || (temp_v0 = temp_v2, appCheckPurchaseRequirements(), temp_v0 != 2))
           )) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v2;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x8d);
    }
    FUN_0029f848(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
    gauntletAppSortMenuEntries();
    break;
  case 1:
    temp_v2 = 1;
    *(unsigned int *)(param_1 + 0x2a8) = 0;
    do {
      temp_v3 = flagBitIsSet(temp_v2);
      if (temp_v3 != 0) {
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v2;
        *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x8d);
    FUN_0029f848(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
    break;
  case 2:
    *(unsigned int *)(param_1 + 0x2a8) = 0;
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      temp_v1 = 0x2e;
      temp_v3 = flagBitIsSet(0x2e);
      if (temp_v3 == 0) {
        temp_v3 = 0x2e;
        appCheckPurchaseRequirements();
        if (temp_v3 == 0) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v1;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
      }
    }
    else if (*(char *)(param_1 + 0x2b5) == '\0') {
      temp_v2 = 1;
      do {
        temp_v3 = flagBitIsSet(temp_v2);
        if ((temp_v3 == 0) && (temp_v0 = temp_v2, appCheckPurchaseRequirements(), temp_v0 == 0)) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v2;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x8d);
    }
    else {
      temp_v1 = 0x18;
      temp_v3 = flagBitIsSet(0x18);
      if (temp_v3 == 0) {
        temp_v3 = 0x18;
        appCheckPurchaseRequirements();
        if (temp_v3 == 0) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2a8) * 4 + 0x74) = temp_v1;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
        }
      }
    }
    FUN_0029f848(param_1 + 0x10,*(unsigned int *)(param_1 + 0x2a8),10,1,1,1);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      FUN_00248738(param_1,*(unsigned int *)(param_1 + 8));
      return 0;
    }
    break;
  case 5:
    spriteStartAnimationByIndex(param_1 + 0x47c,1);
    temp_v3 = FUN_0029efa8(param_1 + 0x10);
    FUN_00295eb0(param_1 + 0x47c,0x1d,temp_v3 + 0x40e);
    *(unsigned short *)(param_1 + 0x494) = 0xa0;
    break;
  case 7:
    timerStart(param_1 + 0x2d8,1,0);
    temp_v3 = 0;
    if (*(short *)(param_1 + 0x524) != 0) {
      do {
        ifTouchRegionRemove();
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x524));
    }
    *(unsigned short *)(param_1 + 0x524) = 0;
  }
  *(unsigned int *)(param_1 + 8) = param_2;
  return 1;
}

} /* extern "C" */
