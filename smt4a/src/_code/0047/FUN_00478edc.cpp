/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00478edc` (_code @ 0x478edc, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(int);
int FUN_00169548(int);
int FUN_00224880(unsigned int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int obj04Finish(void);
int FUN_00474734(unsigned int *, int);
int FUN_00476e58(unsigned int *, int, int);
int FUN_00477d10(...);
int jobFlagsWorkStop(unsigned int *);
int FUN_0047bcdc(unsigned int *, int);
int timeInitializeActiveState(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_004791a8; /* 0x4791a8 */
extern unsigned char LAB_004791c4; /* 0x4791c4 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_00169548. */
extern int byteIsAtLeast100(unsigned int *);
/* Supplied declaration required: FUN_00224880. */
extern int FUN_0026272c(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002e19f8(void);
extern int FUN_002e1a18(unsigned int);
extern int panelIsMissingOrFlagClear(void);
/* Supplied declaration required: obj04Finish. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: jobFlagsWorkStop. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int isEmptyString(unsigned int *);
/* Supplied declaration required: timeInitializeActiveState. */
extern int FUN_004cfe4c(unsigned int *);


void FUN_00478edc(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v5;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  timeInitializeActiveState(&temp_v4);
  temp_v1 = g_aocMain;
  temp_v0 = param_1[2];
  if (temp_v0 != 3) {
    if ((int)temp_v0 < 3) {
      if (temp_v0 == 0) {
        *param_1 = *param_1 | 0x10000;
        FUN_0047bcdc(param_1,3);
        temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_004791a8);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
        param_1[2] = 1;
        FUN_00477d10(param_1,0xffffffff,0);
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          FUN_00224880(param_1[0xd6]);
          (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v5);
          temp_v4 = temp_v5;
          uStack_34 = uStack_20;
          uStack_30 = uStack_1c;
          uStack_2c = uStack_18;
          uStack_28 = uStack_14;
          temp_v1 = isEmptyString(&temp_v4);
          if (temp_v1 != 0) {
            jobFlagsWorkStop(param_1);
            obj04Finish();
            param_1[2] = 3;
          }
          else {
            temp_v1 = byteIsAtLeast100(&temp_v4);
            if (temp_v1 != 0) {
              jobFlagsWorkStop(param_1);
              obj04Finish();
              param_1[2] = 9999;
              param_1[0x84] = temp_v4;
              param_1[0x85] = uStack_34;
              param_1[0x86] = uStack_30;
              param_1[0x87] = uStack_2c;
              param_1[0x88] = uStack_28;
              return;
            }
          }
        }
      }
      else {
        temp_v3 = FUN_002e19f8();
        if ((temp_v3 != 0) && ((*param_1 & 0x200) != 0)) {
          FUN_00224880(param_1[0xd6]);
          puVar5 = param_1 + 0x83;
          FUN_00474734(puVar5,3);
          param_1[0x82] = (unsigned int)puVar5;
          temp_v3 = FUN_004cfe4c(param_1 + 0x90);
          puVar5[5] = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x678) + temp_v3 * 0x9c8 + 0x9aa);
          param_1[2] = 2;
          return;
        }
      }
    }
    else if (temp_v0 != 4) {
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00476e58(param_1,5,3);
          return;
        }
      }
      else {
        temp_v1 = FUN_0026272c();
        if ((temp_v1 != 0) && (temp_v1 = panelIsMissingOrFlagClear(), temp_v1 != 0)) {
          param_1[1] = 10;
          param_1[2] = 0;
          if ((int *)param_1[0x82] != (int *)0x0) {
            (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
    }
    else {
      FUN_00224880(param_1[0xd6]);
      temp_v1 = FUN_002e1a18(0x10);
      if (temp_v1 != 0) {
        eventQueueAddUniqueIfValid(0x100020e);
        obj04Finish();
        temp_v0 = 5;
        param_1[2] = temp_v0;
        return;
      }
    }
  }
  else {
    temp_v1 = FUN_0026272c();
    if (temp_v1 != 0) {
      temp_v2 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_004791c4);
      scrScriptProcessStartEntry(param_1[0xd6],temp_v2);
      FUN_00169548(0);
      FUN_00477d10(param_1,3,1);
      temp_v0 = 4;
      param_1[2] = temp_v0;
      return;
    }
  }
  return;
}

} /* extern "C" */
