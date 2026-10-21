/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00391e48` (_code @ 0x391e48, 0x26c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126fb8(int);
int FUN_00233818(unsigned int *);
int ifTouchRegionClearAll(unsigned int *);
int FUN_0023392c(...);
int messageBannerBeginClose(void);
int bgmStopNoForce(int, int);
int msgWindowReset(void);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_002a126c(unsigned char [4], unsigned int);
int FUN_002b8244(int);
int ifTouchRegionRemove(void);
int resultPairInitialize(unsigned int *, int);
int eventQueueAddUniqueIfValid(int);
int FUN_002c1658(void);
int messageClearObjectFlags(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_003920c0; /* 0x3920c0 */
extern int g_aocMain; /* 0x432fc8 */
extern int g_aocDisplay; /* 0x433130 */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00126fb8. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: messageBannerBeginClose. */
/* Supplied declaration required: bgmStopNoForce. */
extern int FUN_0026b564(void);
/* Supplied declaration required: msgWindowReset. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_002a126c. */
/* Supplied declaration required: FUN_002b8244. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: resultPairInitialize. */
extern unsigned int *FUN_002bad5c(unsigned char *);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_002c1658. */
extern int sys43e188GetStateB(void);
/* Supplied declaration required: messageClearObjectFlags. */


void FUN_00391e48(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [20];
  unsigned int temp_v8 [3];
  
  temp_v0 = param_1[2];
  if (temp_v0 == 0) {
    FUN_002b8244(0);
    FUN_002a126c(temp_v6,g_aocSystem);
    *param_1 = *param_1 & 0xffffffef;
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffffeff;
    *(unsigned char *)(g_aocDisplay + 0x450c) = 0;
    ifTouchRegionClearAll(param_1 + 0xba);
    FUN_00233818(param_1 + 0xad);
    *(unsigned char *)(g_aocMain + 0xd50) = 2;
    temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_003920c0);
    scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
    FUN_0023392c(param_1,0,1);
    param_1[2] = 1;
    return;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return;
    }
    temp_v1 = FUN_0026b564();
    if (temp_v1 == 0) {
      return;
    }
    piVar3 = (int *)param_1[0x82];
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    temp_v1 = scrRunOpcodesStub(param_1[0xd6]);
    if (temp_v1 == 2) {
      temp_v1 = FUN_002973d8();
      if (temp_v1 == 0) {
        param_1[2] = 2;
        FUN_00126fb8(g_aocMain + 0x80);
        temp_v6[0] = 0;
        puVar5 = (unsigned int *)FUN_002bad5c(temp_v7);
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar6 = temp_v8;
        resultPairInitialize(puVar6,0);
        temp_v3 = *puVar6;
        temp_v0 = puVar6[1];
        puVar5[1] = temp_v0;
        *puVar5 = temp_v3;
        temp_v4 = puVar5[2];
        temp_v5 = puVar5[3];
        param_1[0x84] = puVar5[-1];
        param_1[0x85] = temp_v3;
        param_1[0x86] = temp_v0;
        param_1[0x87] = temp_v4;
        param_1[0x88] = temp_v5;
        FUN_0023392c(param_1,0xffffffff,0);
        bgmStopNoForce(0x1000001,10);
        return;
      }
      if (temp_v1 != 1) {
        return;
      }
      piVar3 = (int *)param_1[0x82];
      param_1[1] = 0xf;
      param_1[2] = 0;
      if (piVar3 == (int *)0x0) {
        return;
      }
      (**(romwright_code **)(*piVar3 + 4))();
      param_1[0x82] = 0;
      return;
    }
    temp_v1 = sys43e188GetStateB();
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = 1;
    FUN_002c1658();
    if (temp_v1 == 0) {
      return;
    }
    eventQueueAddUniqueIfValid(0x100016d);
    msgWindowReset();
    messageBannerBeginClose();
    messageClearObjectFlags();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    piVar3 = (int *)param_1[0x82];
    param_1[1] = 0xf;
    param_1[2] = 0;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  (**(romwright_code **)(*piVar3 + 4))();
  param_1[0x82] = 0;
  return;
}

} /* extern "C" */
