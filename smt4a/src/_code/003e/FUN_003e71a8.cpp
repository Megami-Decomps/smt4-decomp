/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e71a8` (_code @ 0x3e71a8, 0x3b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int ifTouchRegionRemove(void);
int asdTMTexTableNodeIsLoaded(int, int);
int asdTMTexTableReleaseNode(int, int);
int asdTMTexLoadMainHeap(int, int);
int slotSetRequest(int, int, int);
int ifTouchRegionAdd(int, int, int, int);
int asdTMTexTableFreeEntry(...);
int campCommonBgInitializeCrazingSumaho(void);
int ref208SetPair1C(int);
int commonBgReleaseOwnedJob(void);
int soundChannelRequestIfEnabled(int, int, int);
int soundChannelStopAll(...);
int FUN_003d54f8(int, int);
int clearWordHalfByte(unsigned int *);

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_001643a0(void);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: asdTMTexTableNodeIsLoaded. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: slotSetRequest. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: ifTouchRegionAdd. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
extern int textureGetIndexedResource(unsigned int);
/* Supplied declaration required: campCommonBgInitializeCrazingSumaho. */
/* Supplied declaration required: ref208SetPair1C. */
/* Supplied declaration required: commonBgReleaseOwnedJob. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: clearWordHalfByte. */


unsigned int FUN_003e71a8(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned long long temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  
  temp_v7 = 0x42700000;
  temp_v8 = 0x42700000;
  temp_v5 = 0x3f800000;
  if (param_1[8] == 0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = 0x3f800000;
    param_1[0xe] = 0x3fc00000;
    param_1[0xf] = 300;
    param_1[10] = 0x42700000;
    clearWordHalfByte(param_1 + 0x11);
    *(unsigned char *)((int)param_1 + 0x4b) = 0;
    temp_v0 = textureGetIndexedResource(0x22);
    if (temp_v0 == 0) {
      asdTMTexTableLoadTmx(0x22,0);
      *(unsigned char *)((int)param_1 + 0x4b) = 1;
    }
    temp_v0 = 1;
    do {
      temp_v1 = asdTMTexTableNodeIsLoaded(0x22,temp_v0);
      if (temp_v1 == 0) {
        asdTMTexLoadMainHeap(0x22,temp_v0);
        *(unsigned char *)((int)param_1 + temp_v0 + 0x44) = 1;
      }
      temp_v7 = (unsigned int)temp_v8;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    campCommonBgInitializeCrazingSumaho();
    ref208SetPair1C(1);
    temp_v2 = 0;
    param_1[0x10] = 0;
    ifTouchRegionAdd(0,0,0x140,0xf0);
    param_1[0x10] = temp_v2;
    temp_v0 = bgmGetStateById(0x100003c);
    if (temp_v0 != 1) {
      soundChannelRequestIfEnabled(0x100003c,0,0x3c);
    }
    param_1[8] = param_1[8] + 1;
  }
  temp_v0 = FUN_0013def0(0);
  if ((temp_v0 == 0) &&
     ((temp_v0 = FUN_001643a0(), temp_v0 == 6 || (temp_v0 = padButtonIsPressed(0), temp_v0 != 0)))) {
    param_1[8] = 2;
    param_1[0xf] = 0;
  }
  else if (param_1[8] == 0) {
    return 0;
  }
  temp_v3 = (float)param_1[10];
  temp_v4 = (float)temp_v5;
  param_1[10] = temp_v3 - temp_v4;
  temp_v6 = (float)((unsigned long long)temp_v5 >> 0x20);
  if (temp_v3 - temp_v4 <= temp_v6) {
    param_1[10] = temp_v7;
    *(float *)&param_1[0xc] = temp_v4;
    *(float *)&param_1[0xb] = temp_v6;
  }
  temp_v0 = param_1[10];
  if (temp_v0 < 0x41f00001) {
    if ((float)param_1[0xd] <= temp_v6) {
      *(float *)&param_1[0xd] = temp_v6;
      *(float *)&param_1[0xe] = temp_v4;
    }
  }
  temp_v3 = 0.033333335f;
  if (temp_v0 >= 0x41f00001) {
    param_1[0xb] = (float)param_1[0xb] + 0.033333335f;
    param_1[0xc] = (float)param_1[0xc] + 0.016666668f;
    param_1[0xd] = (float)param_1[0xd] - 0.033333335f;
    param_1[0xe] = (float)param_1[0xe] + 0.016666668f;
  }
  if (temp_v0 < 0x41f00000) {
    param_1[0xb] = (float)param_1[0xb] - 0.033333335f;
    param_1[0xc] = (float)param_1[0xc] + 0.016666668f;
    param_1[0xd] = (float)param_1[0xd] + 0.033333335f;
    param_1[0xe] = (float)param_1[0xe] + 0.016666668f;
  }
  if (param_1[8] == 1) {
    temp_v0 = asdTMTexTableNodeIsLoaded(0x22,6);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_0013def0(0);
    if (temp_v0 == 3) {
      FUN_003d54f8(0,0x1e);
    }
    temp_v0 = FUN_0013def0(1);
    if (temp_v0 == 3) {
      FUN_003d54f8(1,0x1e);
    }
    temp_v0 = FUN_0013def0(0);
    if (temp_v0 == 2) {
      return 0;
    }
    if ((int)param_1[9] < 0x3f800000) {
      param_1[9] = (float)param_1[9] + temp_v3;
    }
    else {
      param_1[0xf] = 300;
    }
  }
  if (param_1[8] == 2) {
    temp_v0 = param_1[0xf];
    param_1[0xf] = temp_v0 - 1;
    if (-1 < temp_v0 - 1) {
      return 0;
    }
    param_1[8] = 3;
    param_1[0xf] = 300;
    slotSetRequest(0,0x2d,0xff);
    slotSetRequest(1,0x2d,0xff);
  }
  if ((param_1[8] == 3) && (temp_v0 = FUN_0013def0(0), temp_v0 == 3)) {
    ref208SetPair1C(0);
    commonBgReleaseOwnedJob();
    temp_v0 = 1;
    do {
      if (*(char *)((int)param_1 + temp_v0 + 0x44) != '\0') {
        asdTMTexTableReleaseNode(0x22,temp_v0);
        *(unsigned char *)((int)param_1 + temp_v0 + 0x44) = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    if (*(char *)((int)param_1 + 0x4b) != '\0') {
      asdTMTexTableFreeEntry(0x22);
      *(unsigned char *)((int)param_1 + 0x4b) = 0;
    }
    ifTouchRegionRemove();
    soundChannelStopAll(0xf);
    *param_1 = 10;
  }
  return 0;
}

} /* extern "C" */
