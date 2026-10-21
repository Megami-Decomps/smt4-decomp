/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049bd20` (_code @ 0x49bd20, 0x694 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f0384(...);
int FUN_0038b57c(...);
int FUN_004964e0(...);
int sendEvent1000210(void);

int ifTouchRegionRemove(void);
int FUN_00184528(int, int);
int FUN_0019de98(...);
int FUN_00224880(unsigned int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int panelSetTarget(int);
int FUN_0037e0b8(...);
int FUN_0038b010(int);
int FUN_003fd7b4(unsigned int);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);
int FUN_004954e8(int);
int FUN_0049706c(...);
int FUN_00498494(int, int);
int FUN_00498994(int);
int FUN_004989f0(...);
int FUN_00498de0(...);
int FUN_0049af90(int);
int sendEvent100020F(void);
int sendEvent100020E(void);
int releaseEntriesA(int);
int releaseEntriesB(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0049c3b4; /* 0x49c3b4 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_00184528. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002f0384. */
extern int objBStateAllowsAction(void);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037e0b8. */
/* Supplied declaration required: FUN_0038b010. */
/* Supplied declaration required: FUN_0038b57c. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_004954e8. */
/* Supplied declaration required: FUN_004964e0. */
/* Supplied declaration required: FUN_0049706c. */
/* Supplied declaration required: FUN_00498494. */
/* Supplied declaration required: FUN_00498994. */
/* Supplied declaration required: FUN_004989f0. */
/* Supplied declaration required: FUN_00498de0. */
/* Supplied declaration required: FUN_0049af90. */
extern unsigned int FUN_0049cad0(unsigned short *);
extern int btlRollClamped(unsigned short, unsigned int);
extern int FUN_004cfe4c(int);
/* Supplied declaration required: sendEvent100020F. */
/* Supplied declaration required: sendEvent100020E. */
/* Supplied declaration required: sendEvent1000210. */
extern int inputIsQuestRepeatRight(void);
extern int FUN_004d0494(void);
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_0049bd20(int param_1)

{
/* irregular: 1 goto(s); 26 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned short *puVar7;
  
  panelSetTarget(0);
  temp_v1 = objBStateAllowsAction();
  if (temp_v1 == 0) {
    FUN_004954e8(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x16028) != 0) {
    temp_v1 = FUN_0040ab8c();
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x16028) + 4) == 0) {
      FUN_0040aad4(*(int *)(param_1 + 0x16028),0);
      temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x16028) + 4);
      FUN_0040ace8(g_handleRegistry,temp_v2);
      FUN_003fd7b4(temp_v2);
    }
  }
  piVar6 = (int *)(param_1 + 0xb40);
  if (*(int *)(param_1 + 0xb40) != 3) {
    if (*(int *)(param_1 + 0xb40) == 5) {
      temp_v2 = 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_0037e0b8(temp_v2);
  }
  else {
    FUN_0037e0b8(1);
  }
  temp_v1 = FUN_004954e8(param_1);
  FUN_00498994(param_1);
  if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb68)) &&
     (temp_v3 = FUN_004d0584(), temp_v3 != 0)) {
    temp_v1 = 1;
  }
  temp_v3 = *(int *)(param_1 + 0xb40);
  temp_v4 = FUN_004cfe4c(param_1 + temp_v3 * 0x74 + 0xb60);
  puVar7 = (unsigned short *)(param_1 + temp_v3 * 0x1002 + 0xf74 + temp_v4 * 4);
  if (*(int *)(param_1 + 0xb40) != 8) {
    temp_v2 = FUN_0049cad0(puVar7);
    temp_v3 = btlRollClamped(*puVar7,temp_v2);
    if (temp_v3 != 0) goto LAB_0049be70;
  }
  else {
LAB_0049be70:
    if (temp_v1 != 0) {
      sendEvent100020E();
      FUN_00498494(param_1,0xb);
      FUN_00498de0(param_1);
      return;
    }
  }
  temp_v1 = inputIsQuestRepeatRight();
  if ((temp_v1 == 0) && (temp_v1 = FUN_00284140((int)*(short *)(param_1 + 0x1602c)), temp_v1 != 6)) {
    temp_v1 = FUN_004d0494();
    if ((temp_v1 == 0) && (temp_v1 = FUN_00284140((int)*(short *)(param_1 + 0x1602e)), temp_v1 != 6)) {
      temp_v1 = inputIsQuestMenuPressed();
      temp_v0 = '\0';
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(param_1 + 0x22);
      }
      if (!(temp_v1 == 0 || temp_v0 == '\0')) {
        FUN_0038b010(0);
        FUN_00184528(param_1 + 0x3cc,1);
        sendEvent100020F();
        FUN_0049af90(param_1);
        releaseEntriesB(*(unsigned int *)(param_1 + 0xb3c));
        releaseEntriesA(param_1 + 0xb08);
        temp_v1 = 0;
        if (temp_v1 < *(short *)(param_1 + 0x16030)) {
          do {
            ifTouchRegionRemove();
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < *(short *)(param_1 + 0x16030));
        }
        *(unsigned short *)(param_1 + 0x16030) = 0;
        *(unsigned short *)(param_1 + 0x1602c) = 0xffff;
        *(unsigned short *)(param_1 + 0x1602e) = 0xffff;
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 5;
        *(unsigned int *)(param_1 + 8) = 0;
        temp_v1 = *(int *)(param_1 + 0xb40);
        switch(temp_v1) {
        case 0:
        case 1:
        case 2:
          *(unsigned int *)(param_1 + 0x16040) = 0;
          *(unsigned int *)(param_1 + 0x1603c) = 0;
          if (temp_v1 == 1) {
            *(unsigned int *)(param_1 + 0x1603c) = 1;
          }
          else if (temp_v1 == 2) {
            *(unsigned int *)(param_1 + 0x1603c) = 2;
          }
          *(unsigned char *)(param_1 + 0x16045) = 1;
          if (*(int *)(param_1 + 0x1601c) >= 2) {
            temp_v2 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_0049c3b4);
            scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v2);
            FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
            FUN_004989f0(param_1,1);
            *(unsigned int *)(param_1 + 8) = 3;
            FUN_0019de98(0,0xf4f4f4ff);
          }
          *(unsigned char *)(param_1 + 0x16045) = 0;
          break;
        case 3:
        case 4:
        case 5:
        case 6:
          *(unsigned int *)(param_1 + 0x16038) = 0;
          *(unsigned int *)(param_1 + 0x16040) = 1;
          if (temp_v1 == 4) {
            *(unsigned int *)(param_1 + 0x16038) = 1;
          }
          else if (temp_v1 == 5) {
            *(unsigned int *)(param_1 + 0x16038) = 2;
          }
          else if (temp_v1 == 6) {
            *(unsigned int *)(param_1 + 0x16038) = 3;
          }
          *(unsigned char *)(param_1 + 0x16044) = 1;
          if (*(int *)(param_1 + 0x1601c) >= 2) {
            temp_v2 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_0049c3b4);
            scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v2);
            FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
            FUN_004989f0(param_1,2);
            *(unsigned int *)(param_1 + 8) = 4;
            FUN_0019de98(0,0xf4f4f4ff);
          }
          *(unsigned char *)(param_1 + 0x16044) = 0;
        }
      }
      else {
        temp_v1 = inputIsQuestCancelPressed();
        if (temp_v1 != 0) {
          sendEvent100020E();
          FUN_0049706c(param_1);
        }
      }
      FUN_00498de0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      if (*(int *)(param_1 + 0x14) == 1) {
        temp_v1 = *(int *)(param_1 + 0xb40);
        if (temp_v1 == 7) {
          return;
        }
      }
    }
    else {
      temp_v1 = *(int *)(param_1 + 0xb40);
      if (temp_v1 == 7) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xb40) == 0) &&
       (((*(char *)(param_1 + 0x18) != '\0' || (temp_v1 = gameFlagIsSet(0x410), temp_v1 == 0)) &&
        (*(int *)(param_1 + 0x14) != 1)))) {
      return;
    }
    temp_v1 = *(int *)(param_1 + 0xb40);
    if (temp_v1 != 3) {
      if (temp_v1 != 4) {
        if (temp_v1 != 5) {
          temp_v1 = *(int *)(temp_v1 * 8 + 0x588ef0);
          if ((temp_v1 == 3 || temp_v1 == 4) || temp_v1 == 5) {
            FUN_002f0384(0);
            *(unsigned char *)(param_1 + 0x22) = 0;
          }
        }
        else {
          FUN_0038b57c(2);
          FUN_002f0384(0);
          *(unsigned char *)(param_1 + 0x22) = 0;
        }
      }
      else {
        FUN_0038b57c(1);
        if (*(int *)(param_1 + 0xb40) == 5) {
          FUN_0038b57c(2);
        }
        FUN_002f0384(0);
        *(unsigned char *)(param_1 + 0x22) = 0;
      }
    }
    else {
      FUN_0038b57c(0);
      if (*(int *)(param_1 + 0xb40) == 4) {
        FUN_0038b57c(1);
      }
      if (*(int *)(param_1 + 0xb40) == 5) {
        FUN_0038b57c(2);
      }
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x22) = 0;
    }
    if ((*(int *)(param_1 + 0xb40) == 0) &&
       ((*(char *)(param_1 + 0x18) != '\0' || (temp_v1 = gameFlagIsSet(0x410), temp_v1 == 0)))) {
      FUN_00498de0(param_1);
      return;
    }
    *piVar6 = *(int *)(*(int *)(param_1 + 0xb40) * 8 + 0x588ef4);
    sendEvent1000210();
    FUN_004964e0(param_1,1);
    if (*piVar6 == 3) {
      temp_v2 = 1;
      FUN_0037e0b8(temp_v2);
      FUN_00498de0(param_1);
      return;
    }
    if (*piVar6 == 5) {
      temp_v2 = 2;
      FUN_0037e0b8(temp_v2);
      FUN_00498de0(param_1);
      return;
    }
    temp_v2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14) != 0) {
      if (*(int *)(param_1 + 0x14) == 1) {
        temp_v1 = *(int *)(param_1 + 0xb40);
        if (temp_v1 == 7) {
          return;
        }
      }
    }
    else {
      temp_v1 = *(int *)(param_1 + 0xb40);
      if (temp_v1 == 7) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xb40) == 0) &&
       (((*(char *)(param_1 + 0x18) != '\0' || (temp_v1 = gameFlagIsSet(0x410), temp_v1 == 0)) &&
        (*(int *)(param_1 + 0x14) != 1)))) {
      return;
    }
    temp_v1 = *(int *)(param_1 + 0xb40);
    if (temp_v1 != 3) {
      if (temp_v1 != 4) {
        if (temp_v1 != 5) {
          temp_v1 = *(int *)(temp_v1 * 8 + 0x588ef0);
          if ((temp_v1 == 3 || temp_v1 == 4) || temp_v1 == 5) {
            FUN_002f0384(0);
            *(unsigned char *)(param_1 + 0x22) = 0;
            *(unsigned char *)(param_1 + 0x23) = 0;
          }
        }
        else {
          FUN_0038b57c(2);
          FUN_002f0384(0);
          *(unsigned char *)(param_1 + 0x22) = 0;
          *(unsigned char *)(param_1 + 0x23) = 0;
        }
      }
      else {
        FUN_0038b57c(1);
        if (*(int *)(param_1 + 0xb40) == 5) {
          FUN_0038b57c(2);
        }
        FUN_002f0384(0);
        *(unsigned char *)(param_1 + 0x22) = 0;
        *(unsigned char *)(param_1 + 0x23) = 0;
      }
    }
    else {
      FUN_0038b57c(0);
      if (*(int *)(param_1 + 0xb40) == 4) {
        FUN_0038b57c(1);
      }
      if (*(int *)(param_1 + 0xb40) == 5) {
        FUN_0038b57c(2);
      }
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x22) = 0;
      *(unsigned char *)(param_1 + 0x23) = 0;
    }
    if ((*(int *)(param_1 + 0xb40) == 0) &&
       ((*(char *)(param_1 + 0x18) != '\0' || (temp_v1 = gameFlagIsSet(0x410), temp_v1 == 0)))) {
      FUN_00498de0(param_1);
      return;
    }
    *piVar6 = *(int *)(*(int *)(param_1 + 0xb40) * 8 + 0x588ef0);
    sendEvent1000210();
    FUN_004964e0(param_1,1);
    if (*piVar6 != 3) {
      if (*piVar6 != 5) {
        temp_v2 = 0;
        FUN_0037e0b8(temp_v2);
        FUN_00498de0(param_1);
        return;
      }
      temp_v2 = 2;
    }
    else {
      temp_v2 = 1;
    }
  }
  FUN_0037e0b8(temp_v2);
  FUN_00498de0(param_1);
  return;
}

} /* extern "C" */
