/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf140` (_code @ 0x4cf140, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int slotSetRequest(int, int, int);
int ifTouchRegionAdd(int, int, int, int);
int FUN_0037ed38(void);
int ref208SetPair1C(int);
int commonBgReleaseOwnedJob(void);
int soundChannelRequestIfEnabled(int, int, int);
int soundChannelStopAll(int);
int FUN_003d54f8(int, int);

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_001643a0(void);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: slotSetRequest. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: ifTouchRegionAdd. */
/* Supplied declaration required: FUN_0037ed38. */
/* Supplied declaration required: ref208SetPair1C. */
extern int ref208HasObj(void);
/* Supplied declaration required: commonBgReleaseOwnedJob. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_004cf140(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(unsigned char *)(param_1 + 0x25) = 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x34) = 300;
    temp_v0 = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    ifTouchRegionAdd(0,0,0x140,0xf0);
    *(unsigned int *)(param_1 + 0x2c) = temp_v0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    temp_v1 = ref208HasObj();
    if (temp_v1 == 0) {
      FUN_0037ed38();
      *(unsigned char *)(param_1 + 0x24) = 1;
    }
    ref208SetPair1C(1);
    temp_v1 = bgmGetStateById(0x100003c);
    if (temp_v1 != 1) {
      soundChannelRequestIfEnabled(0x100003c,0,0x3c);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  temp_v1 = FUN_0013def0(0);
  if ((temp_v1 == 0) &&
     ((temp_v1 = FUN_001643a0(), temp_v1 == 6 || (temp_v1 = padButtonIsPressed(0), temp_v1 != 0)))) {
    *(unsigned int *)(param_1 + 0x28) = 2;
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  else {
    temp_v1 = *(int *)(param_1 + 0x28);
    if (temp_v1 == 1) {
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 == 3) {
        FUN_003d54f8(0,0x1e);
      }
      temp_v1 = FUN_0013def0(1);
      if (temp_v1 == 3) {
        FUN_003d54f8(1,0x1e);
      }
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 == 2) {
        return 1;
      }
      if ((int)*(float *)(param_1 + 0x30) < 0x3f800000) {
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 0.033333335f;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x34) = 300;
      return 1;
    }
    if (temp_v1 != 2) {
      if (temp_v1 != 3) {
        return 1;
      }
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 != 3) {
        return 1;
      }
      *(unsigned char *)(param_1 + 0x25) = 0;
      ref208SetPair1C(0);
      if (*(char *)(param_1 + 0x24) != '\0') {
        commonBgReleaseOwnedJob();
      }
      ifTouchRegionRemove();
      soundChannelStopAll(0xf);
      return 0;
    }
  }
  temp_v1 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x34) = temp_v1;
  if (temp_v1 < 0) {
    *(unsigned int *)(param_1 + 0x28) = 3;
    *(unsigned int *)(param_1 + 0x34) = 300;
    slotSetRequest(0,0x2d,0xff);
    slotSetRequest(1,0x2d,0xff);
  }
  return 1;
}

} /* extern "C" */
