/* NON_MATCHING: recovered touch-query results and four-argument help update; owner-field addressing and remaining typed layout still differ. */
#include "romwright_types.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "status/StatusCamera.h"

extern "C" {

int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00233240(...);
int uiOwnerUpdateAnimationChannels(int);
int FUN_00233818(int);
int ifTouchRegionClearAll(unsigned int);
int beginStatusPanelClose(void);
void FUN_0029da34(RelativeDirectory *directory, u32 entry, u16 devilId, u32 context);
int useCounterStart(void);
int FUN_0029e328(int);
int sortMenuCreate(int, int);
int FUN_0029ee6c(int, int);
int FUN_003a8aa0(int);
int FUN_003c2e1c(int, int, int, int);
int FUN_003c2e30(int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: uiOwnerUpdateAnimationChannels. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
extern int inputIsQuestCancelPressed(void);
extern int gameGetNavigationState(void);
extern int inputIsQuestMenuPressed(void);
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: FUN_0029da34. */
extern int gameGetFlagByte12e8(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
extern int FUN_002bf4f0(int, int);
/* Supplied declaration required: FUN_003a8aa0. */
/* Supplied declaration required: FUN_003c2e1c. */
/* Supplied declaration required: FUN_003c2e30. */


void FUN_003a98b8(int param_1)

{
/* irregular: 16 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v1 = (s16)*(u16 *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
  uiOwnerUpdateAnimationChannels(param_1);
  temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v0 = (s16)*(u16 *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
  if (temp_v0 != temp_v1) {
    FUN_0029da34(NULL, 1, (u16)temp_v0, 0);
  }
  temp_v2 = inputIsQuestMenuPressed();
  temp_v9 = 0;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v9 = inputIsQuestCancelPressed();
  }
  if ((0 < *(short *)(param_1 + 0xa6ba)) && (*(char *)(param_1 + 0x5a4) == '\x01')) {
    temp_v5 = 0;
    do {
      temp_v3 = FUN_002bf4f0(param_1 + 200,temp_v5 + 0x1023);
      temp_v6 = (int)*(short *)(temp_v3 + 8);
      temp_v1 = *(short *)(temp_v3 + 10);
      temp_v7 = (int)**(short **)(temp_v3 + 0xc);
      temp_v8 = (int)(*(short **)(temp_v3 + 0xc))[1];
      temp_v3 = FUN_003c2e1c(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v3 != 0) {
        *(char *)(param_1 + 0xa6be) = (char)temp_v5;
      }
      temp_v3 = FUN_003c2e30(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v3 != 0) {
        *(char *)(param_1 + 0xa6be) = (char)temp_v5;
        if (temp_v5 != 0) {
          temp_v1 = *(short *)(param_1 + 0xa6bc) + 1;
          *(short *)(param_1 + 0xa6bc) = temp_v1;
          if (*(short *)(param_1 + 0xa6ba) <= temp_v1) {
            temp_v1 = 0;
            *(short *)(param_1 + 0xa6bc) = temp_v1;
          }
        }
        else {
          temp_v1 = *(short *)(param_1 + 0xa6bc) - 1;
          *(short *)(param_1 + 0xa6bc) = temp_v1;
          if (temp_v1 < 0) {
            temp_v1 = *(short *)(param_1 + 0xa6ba) - 1;
            *(short *)(param_1 + 0xa6bc) = temp_v1;
          }
        }
        temp_v5 = (int)*(short *)(param_1 + *(short *)(param_1 + 0xa6bc) * 2 + 0xa5ba);
        if (*(int *)(param_1 + 0xa5b4) != temp_v5) {
          *(int *)(param_1 + 0xa5b4) = temp_v5;
          FUN_003a8aa0(param_1);
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
  }
  temp_v5 = gameGetNavigationState();
  if (temp_v5 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v2 = gameGetFlagByte12e8();
    if (temp_v2 == 1) {
      temp_v4 = 1;
    }
    else {
      temp_v4 = 5;
    }
    *(unsigned short *)(param_1 + 0xa5b2) = temp_v4;
    FUN_00233240(param_1 + 0xdc,(s16)temp_v4);
    ifTouchRegionClearAll(*(unsigned int *)(param_1 + 0x590));
    FUN_00233818(param_1 + 0x55c);
    return;
  }
  if (temp_v2 == 0) {
    if (temp_v9 == 0) {
      return;
    }
    sortMenuCreate(0xc,0);
    FUN_0029e328(1);
    FUN_0029e328(2);
    FUN_0029e328(4);
    FUN_0029e328(5);
    FUN_0029e328(3);
    useCounterStart();
    FUN_002a0cc8(1);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029ee6c(0,0x323232ff);
    FUN_002328b4();
    return;
  }
  beginStatusPanelClose();
  FUN_0029ee6c(0,0x323232ff);
  FUN_00233240(param_1 + 0xdc,1);
  FUN_002a0cc8(1);
  *(unsigned int *)(param_1 + 0x14) = 6;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_00232848();
  return;
}

} /* extern "C" */
