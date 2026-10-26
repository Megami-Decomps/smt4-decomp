/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN7AocMenu19runConnectedProcessEv` (_code @ 0x47b78c, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "classes/AocMenu.h"
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int jobStop(...);
int eventQueueAddUniqueIfValid(...);
int uiSpriteBankApplyPreset(...);
int scrScriptProcessStartEntry(...);
int asdFsIsSdCardDetected(...);
int windowCreateStatusOperation(...);
int FUN_00476e58(...);
int FUN_00477d10(...);
int jobFlagsWorkStop(...);
int FUN_0047bc90(...);
int FUN_0047bcdc(...);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int FUN_0047a1e0(...); /* 0x47a1e0 */
extern unsigned char FUN_0047a298; /* 0x47a298 */
extern unsigned char LAB_0047bc80; /* 0x47bc80 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: uiSpriteBankApplyPreset. */
extern int byteIsAtLeast100(unsigned int *);
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int recordGetModeForId(int);
extern int messageGetChoiceResult(void);
extern int FUN_002e1a18(unsigned int);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: asdFsIsSdCardDetected. */
/* Supplied declaration required: windowCreateStatusOperation. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: jobFlagsWorkStop. */
/* Supplied declaration required: FUN_0047bc90. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int isEmptyString(unsigned int *);


void AocMenu::runConnectedProcess()

{
    unsigned int * param_1 = reinterpret_cast<unsigned int *>(this);
/* irregular: 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  RequestParameters record;
  unsigned int temp_v4;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int temp_v5;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v0 = param_1[2];
  puVar7 = param_1 + 0x5e9;
  puVar8 = param_1 + 0x5e8;
  puVar2 = param_1 + 0x5eb;
  if (temp_v0 != 3) {
    if ((int)temp_v0 < 3) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            param_1[0x5ea] = 0;
            if ((*param_1 & 0x1000) == 0) {
              *puVar2 = 0xffffffff;
              *puVar7 = 0;
              *param_1 = *param_1 | 0x1000;
              uiSpriteBankApplyPreset(param_1 + 0x5ec,0);
              uiSpriteBankApplyPreset(param_1 + 0x5ec,1);
              pcVar5 = "Aoc guide CALC";
              asdProcessCreateSimple("Aoc guide CALC",4,0,0,FUN_0047a1e0,0,param_1);
              *puVar8 = (unsigned int)pcVar5;
              taskCreateDraw("Aoc guide DOWN",0xec,1,0,&FUN_0047a298,0,param_1,pcVar5);
            }
            param_1[2] = 3;
            *param_1 = *param_1 | 0x10;
            *(unsigned char *)(g_aocMain + 0xd50) = 3;
            return;
          }
        }
        else if ((*param_1 & 0x200) != 0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v4);
          record.word(0) = temp_v4;
          record.word(1) = uStack_48;
          record.word(2) = uStack_44;
          record.word(3) = uStack_40;
          record.word(4) = uStack_3c;
          temp_v1 = isEmptyString(&record.word(0));
          if (temp_v1 != 0) {
            *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) | 0x100;
            FUN_00477d10(param_1,1);
            param_1[2] = 2;
            jobFlagsWorkStop(param_1);
            return;
          }
          temp_v1 = byteIsAtLeast100(&record.word(0));
          if (temp_v1 != 0) {
            jobFlagsWorkStop(param_1);
            if ((record.word(0) & 0xff) == 0x66) {
              temp_v5 = record.word(0);
              uStack_34 = record.word(1);
              uStack_30 = record.word(2);
              uStack_2c = record.word(3);
              uStack_28 = record.word(4);
              FUN_0047bc90(param_1,&temp_v5);
              return;
            }
            if ((record.word(0) & 0xff) != 0x67) {
              param_1[2] = 9999;
              param_1[0x84] = record.word(0);
              param_1[0x85] = record.word(1);
              param_1[0x86] = record.word(2);
              param_1[0x87] = record.word(3);
              param_1[0x88] = record.word(4);
              return;
            }
            piVar4 = (int *)param_1[0x82];
            param_1[1] = 3;
            param_1[2] = 0;
            if (piVar4 == (int *)0x0) {
              return;
            }
            (**(romwright_code **)(*piVar4 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
      else {
        asdFsIsSdCardDetected();
        if (temp_v0 != 0) {
          puVar2 = param_1 + 0x83;
          windowCreateStatusOperation(puVar2,0);
          param_1[2] = 1;
          param_1[0x82] = (unsigned int)puVar2;
          FUN_0047bcdc(param_1,0);
          return;
        }
        *(unsigned char *)(param_1 + 0x84) = 0x6a;
        param_1[0x88] = 100;
        piVar4 = (int *)param_1[0x82];
        param_1[1] = 0x11;
        param_1[2] = 0;
        if (piVar4 != (int *)0x0) {
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if (temp_v0 != 4) {
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00476e58(param_1,3);
        }
      }
      else {
        temp_v1 = scrRunOpcodesStub(param_1[0xd6]);
        if (temp_v1 == 2) {
          temp_v1 = messageGetChoiceResult();
          if (temp_v1 != 0) {
            if (temp_v1 == 1) {
              param_1[2] = 2;
            }
            return;
          }
          piVar4 = (int *)param_1[0x82];
          param_1[1] = 0xf;
          param_1[2] = 0;
          if (piVar4 == (int *)0x0) {
            return;
          }
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if ((*param_1 & 0x1000) == 0) {
      temp_v1 = jobIsValid(*puVar8);
      if (temp_v1 != 0) {
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
        *param_1 = *param_1 & 0xffffcfff;
        jobStop(*puVar8,0);
      }
      if ((*param_1 & 2) != 0) {
        param_1[2] = 5;
        temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_0047bc80);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
      }
      else {
        param_1[1] = 5;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
      }
      temp_v0 = *param_1 & 0xfffffffd;
      *param_1 = temp_v0;
      return;
    }
  }
  else if ((*param_1 & 0x2000) != 0) {
    temp_v1 = FUN_002e1a18(0x10);
    if ((temp_v1 != 0) ||
       ((((*param_1 & 0x2000) != 0 && (*puVar2 != 0xffffffff)) &&
        (temp_v1 = recordGetModeForId((int)(short)*puVar2), temp_v1 == 6)))) {
      eventQueueAddUniqueIfValid(0x100020e);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
      }
      param_1[2] = 4;
      return;
    }
    temp_v1 = FUN_002e1a18(0xb);
    if (temp_v1 != 0) {
      eventQueueAddUniqueIfValid(0x100020e);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          ifTouchRegionRemove();
        }
      }
      param_1[2] = 4;
      temp_v0 = *param_1 | 2;
      *param_1 = temp_v0;
      return;
    }
  }
  return;
}

} /* extern "C" */
