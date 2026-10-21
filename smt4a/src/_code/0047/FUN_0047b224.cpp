/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047b224` (_code @ 0x47b224, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(void);
int eventQueueAddUniqueIfValid(int);
int ifTouchRegionRemove(void);
int FUN_00169548(int);
int FUN_0016ccb4(int);
int FUN_001b57a8(unsigned int *, int);
int FUN_001d0fcc(unsigned char [4], unsigned int);
int FUN_0021c118(int, int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int msgWindowReset(void);
int FUN_0034913c(void);
int messageClearActiveFlags(void);
int FUN_00477d10(...);
int releaseEntriesA(unsigned int *);
int releaseEntriesB(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0047b49c; /* 0x47b49c */
extern int g_aocMain; /* 0x570260 */
extern int g_aocDisplay; /* 0x57027c */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_00169548. */
/* Supplied declaration required: FUN_0016ccb4. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned char *);
/* Supplied declaration required: FUN_001d0fcc. */
/* Supplied declaration required: FUN_0021c118. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: msgWindowReset. */
extern int FUN_002a4b74(void);
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_0034913c. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
extern int obj04StateIs4(void);
/* Supplied declaration required: messageClearActiveFlags. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_0047b224(unsigned int *param_1)

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
    FUN_00169548(0);
    FUN_001d0fcc(temp_v6,g_aocSystem);
    *param_1 = *param_1 & 0xffffffef;
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffffeff;
    *(unsigned char *)(g_aocDisplay + 0x450c) = 0;
    releaseEntriesB(param_1 + 0xba);
    releaseEntriesA(param_1 + 0xad);
    *(unsigned char *)(g_aocMain + 0xd50) = 2;
    temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_0047b49c);
    scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
    FUN_00477d10(param_1,0,1);
    param_1[2] = 1;
    return;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return;
    }
    temp_v1 = FUN_002e19f8();
    if (temp_v1 == 0) {
      return;
    }
    piVar3 = (int *)param_1[0x82];
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    temp_v1 = FUN_00224880(param_1[0xd6]);
    if (temp_v1 == 2) {
      temp_v1 = FUN_002a4b74();
      if (temp_v1 == 0) {
        param_1[2] = 2;
        FUN_0016ccb4(g_aocMain + 0x80);
        temp_v6[0] = 0;
        puVar5 = (unsigned int *)FUN_001b5acc(temp_v7);
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar6 = temp_v8;
        FUN_001b57a8(puVar6,0);
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
        FUN_00477d10(param_1,0xffffffff,0);
        FUN_0021c118(0x1000001,10);
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
    temp_v1 = obj04StateIs4();
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = 1;
    FUN_001517b4();
    if (temp_v1 == 0) {
      return;
    }
    eventQueueAddUniqueIfValid(0x100020e);
    msgWindowReset();
    FUN_0034913c();
    messageClearActiveFlags();
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
