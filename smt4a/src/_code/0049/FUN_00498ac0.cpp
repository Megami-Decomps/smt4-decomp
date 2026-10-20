/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498ac0` (_code @ 0x498ac0, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int FUN_00167458(int, int);
int sysPlaySe(int);
int FUN_00184528(int, int);
int FUN_00224880(unsigned int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int panelSetMode3(unsigned int, int);
int screenShowMessage(int);
int obj04Finish(void);
int panelSetTarget(unsigned int, int);
int FUN_004935b0(int, unsigned int, unsigned int);
int FUN_004963f8(int);
int FUN_004cf8dc(int, int);
int sub10OwnerStart(int);
int sendEvent100020E(void);
int releaseEntriesA(...);
int FUN_004d0738(int);
int releaseEntriesB(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_00498dc0; /* 0x498dc0 */
extern unsigned char LAB_00498dd0; /* 0x498dd0 */

/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_00224880. */
extern int FUN_0026272c(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: panelSetMode3. */
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: obj04Finish. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
extern int panelStateIs0(void);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_004935b0. */
/* Supplied declaration required: FUN_004963f8. */
/* Supplied declaration required: FUN_004cf8dc. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: sub10OwnerStart. */
/* Supplied declaration required: sendEvent100020E. */
extern int FUN_004d0584(void);
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: FUN_004d0738. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_00498ac0(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    temp_v2 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_00498dc0);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v2);
    FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x16038) = 0;
    *(unsigned int *)(param_1 + 0x1603c) = 0;
    *(unsigned int *)(param_1 + 0x16040) = 0;
    *(unsigned char *)(param_1 + 0x16044) = 0;
    *(unsigned char *)(param_1 + 0x16045) = 0;
    *(unsigned int *)(param_1 + 0x16048) = 0xffffffff;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  case 1:
    FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    temp_v1 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v1;
    if ((temp_v1 >= 10) &&
       ((temp_v1 = FUN_004d0584(), temp_v1 != 0 ||
        (temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x18c)), temp_v1 == 2)))) {
      sendEvent100020E();
      obj04Finish();
      temp_v2 = 2;
      puVar4 = (unsigned int *)(param_1 + 8);
      *puVar4 = temp_v2;
      puVar4[1] = 0;
      return;
    }
    break;
  case 2:
    temp_v1 = FUN_0026272c();
    if (temp_v1 != 0) {
      temp_v2 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_00498dd0);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v2);
      FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
      FUN_00184528(param_1 + 0x3cc,0);
      sysPlaySe(0x79);
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 8) = temp_v2;
      return;
    }
    break;
  case 3:
    temp_v1 = param_1 + 0x3ec;
    FUN_00167458(temp_v1,0);
    temp_v2 = vec2GetYInt(temp_v1);
    temp_v0 = vec2GetXInt(temp_v1);
    FUN_004935b0(param_1 + 0x3a4,temp_v0,temp_v2);
    FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    if (*(char *)(param_1 + 0x476) != '\0') {
      panelSetTarget(*(unsigned int *)(param_1 + 0x16000),0);
      temp_v2 = 4;
      *(unsigned int *)(param_1 + 8) = temp_v2;
      return;
    }
    break;
  case 4:
    FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    temp_v1 = param_1 + 0x9f88;
    FUN_004d0738(param_1 + 0xb08);
    (**(romwright_code **)(**(int **)(param_1 + 0xb3c) + 0xc))(*(int **)(param_1 + 0xb3c),temp_v1);
    sub10OwnerStart(temp_v1);
    FUN_004cf8dc(param_1 + 0x3cc,2);
    FUN_004cf8dc(param_1 + 0x3cc,0xc);
    temp_v1 = FUN_004cfe4c(temp_v1);
    screenShowMessage(*(unsigned short *)(param_1 + temp_v1 * 6 + 0x9ffe));
    temp_v1 = FUN_004d0584();
    if (temp_v1 != 0) {
      sendEvent100020E();
      obj04Finish();
      *(unsigned int *)(param_1 + 8) = 5;
      *(unsigned int *)(param_1 + 0xc) = 0;
      panelSetMode3(*(unsigned int *)(param_1 + 0x16000),0);
      return;
    }
    break;
  case 5:
    temp_v1 = FUN_0026272c();
    if ((temp_v1 != 0) && (temp_v1 = panelStateIs0(), temp_v1 == 1)) {
      FUN_004963f8(param_1);
      releaseEntriesB(*(unsigned int *)(param_1 + 0xb3c));
      releaseEntriesA(param_1 + 0xb08);
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x16030)) {
        do {
          ifTouchRegionRemove();
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x16030));
      }
      temp_v2 = 5;
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
      puVar4 = (unsigned int *)(param_1 + 4);
      *puVar4 = temp_v2;
      puVar4[1] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
