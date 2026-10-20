/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f5d4` (_code @ 0x38f5d4, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00233818(unsigned int *);
int FUN_00233854(unsigned int *);
int jobStopAndClearFlags(unsigned int *);
int jobOwnerFreeSlotAndStop(unsigned int *);
int scrScriptProcessDestroy(void);
int asdMemFreeSlot(unsigned int);
int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int, int);
int ifTouchRegionRemove(void);
int asdMemFree(void);
int jobStop(unsigned int, int);

typedef int romwright_code(...);
extern int g_aocMain; /* 0x432fc8 */
extern int g_aocDisplay; /* 0x433130 */

/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: FUN_00233854. */
/* Supplied declaration required: jobStopAndClearFlags. */
/* Supplied declaration required: jobOwnerFreeSlotAndStop. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0038f5d4(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_aocMain;
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffffeff;
  *(unsigned char *)(temp_v0 + 0xd50) = 1;
  *(unsigned char *)(temp_v0 + 0xb81) = 1;
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  *(unsigned char *)(g_aocDisplay + 0x450c) = 0;
  FUN_00233854(param_1 + 0xba);
  FUN_00233818(param_1 + 0xad);
  jobOwnerFreeSlotAndStop(param_1 + 0x46c);
  jobStopAndClearFlags(param_1);
  temp_v0 = jobIsValid(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      ifTouchRegionRemove();
    }
    *param_1 = *param_1 & 0xffffcfff;
    jobStop(param_1[0x5e8],0);
  }
  asdMemFreeSlot(param_1[0x70c]);
  param_1[0x70c] = 0;
  if (param_1[0xd6] != 0) {
    scrScriptProcessDestroy();
    param_1[0xd6] = 0;
  }
  if (param_1[0xd4] != 0) {
    asdMemFree();
    param_1[0xd4] = 0;
  }
  temp_v0 = 0;
  do {
    asdTMTexTableReleaseNode(0x3a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  asdTMTexTableFreeEntry(0x3a);
  *param_1 = *param_1 | 1;
  param_1[1] = 0x14;
  param_1[2] = 0;
  if ((int *)param_1[0x82] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x82] = 0;
  }
  return;
}

} /* extern "C" */
