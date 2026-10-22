/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8e58` (_code @ 0x3b8e58, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "shard/W6_W6Match6_ContentTransition.h"

extern "C" {

int FUN_0022afc4(...);
int objBlockInitAndMark(int);
int buttonHelpSelectByProgress(int);
int modelSetVisible(unsigned int, int);
int FUN_0022b6c4(...);
void nodeOwnerSetEnabled(NodeEnableOwner* owner, int enabled);
int FUN_0023d344(unsigned int);
int FUN_002636d0(...);
int dialogOpen(...);
int infoWinSetMessage(...);
int infoWinStartTimer(int);
int scrScriptProcessStartEntry(...);
int FUN_0029ee6c(int, int);
int messageStatesSetFirst(...);
int buttonHelpSetPreset(int);
int textFormatBuffer(unsigned char [36], unsigned char *, int);
int modelLoadBamAndEnable(unsigned int, unsigned char *);
void contentTransitionApplyCommand(ContentTransition *transition, const void *command);

extern unsigned char LAB_003b9218; /* 0x3b9218 */
extern unsigned char LAB_003b9220; /* 0x3b9220 */
extern int DAT_0044cfb8; /* 0x44cfb8 */

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022afc4. */
/* Supplied declaration required: objBlockInitAndMark. */
/* Supplied declaration required: buttonHelpSelectByProgress. */
extern int FUN_0022b14c(int);
extern int FUN_0022b238(int, int);
/* Supplied declaration required: modelSetVisible. */
/* Supplied declaration required: FUN_0022b6c4. */
/* Supplied declaration required: nodeOwnerSetEnabled. */
/* Supplied declaration required: FUN_0023d344. */
/* Supplied declaration required: FUN_002636d0. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: infoWinSetMessage. */
extern int FUN_002903f0(void);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: infoWinStartTimer. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: messageStatesSetFirst. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: modelLoadBamAndEnable. */


void FUN_003b8e58(int param_1)

{
/* irregular: 18 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3 [36];
  
  temp_v1 = *(int *)(param_1 + 0x2c);
  if (temp_v1 == 0x15) {
    temp_v1 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = temp_v1;
    if (temp_v1 >= 0xf) {
      *(unsigned int *)(param_1 + 0x2c) = 99;
    }
    return;
  }
  if (temp_v1 < 0x16) {
    if (temp_v1 != 10) {
      if (temp_v1 >= 10) {
        if (temp_v1 != 0xb) {
          if (temp_v1 == 0x14) {
            if (DAT_0044cfb8 != 0) {
              messageStatesSetFirst(1);
              buttonHelpSelectByProgress(param_1);
              objBlockInitAndMark(param_1 + 0x9c);
              FUN_0022b6c4(param_1 + 0x9c);
              *(unsigned char *)(param_1 + 0x6cc) = 0;
              temp_v1 = 0x28;
              DAT_0044cfb8 = 0;
            }
            else {
              messageStatesSetFirst(1);
              if ((*(char *)(*(int *)(param_1 + 0xd60) + 0x7c) != '\0') &&
                 (temp_v1 = FUN_002903f0(), temp_v1 != 0)) {
                scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd9c),0x34);
                if (*(char *)(param_1 + 0x6cc) == '\0') {
                  *(unsigned char *)(param_1 + 0x6cc) = 1;
                }
                buttonHelpSetPreset(0x90);
                FUN_0029ee6c(0,0x323232ff);
                temp_v1 = 0x1e;
              }
              else {
                if (*(char *)(param_1 + 0xe58) != '\0') {
                  temp_v1 = FUN_0022b238(param_1 + 0x9c,(int)*(short *)(param_1 + 0x4c));
                  puVar4 = (unsigned int *)(param_1 + 0xe5c);
                  if (!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
                    FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28),
                                 (int)*(char *)(temp_v1 + 0x2a));
                  }
                  else {
                    temp_v0 = *(char *)(temp_v1 + 0x2a);
                    if (!(temp_v0 == '\0' || temp_v0 == '\x06')) {
                      FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28));
                      modelSetVisible(*puVar4,0);
                      temp_v2 = *puVar4;
                    }
                    else {
                      FUN_0023d344(*(unsigned int *)(param_1 + 0xe5c));
                      FUN_0022afc4(*puVar4,(int)*(short *)(temp_v1 + 0x28),
                                   (int)*(char *)(temp_v1 + 0x2a));
                      modelLoadBamAndEnable(*puVar4,&LAB_003b9220);
                      modelSetVisible(*puVar4,1);
                      temp_v2 = *puVar4;
                    }
                    nodeOwnerSetEnabled((NodeEnableOwner*)temp_v2,temp_v0 != '\0' && temp_v0 != '\x06');
                  }
                }
                *(unsigned int *)(param_1 + 0x38) = 0;
                temp_v1 = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            *(int *)(param_1 + 0x2c) = temp_v1;
            return;
          }
        }
        else {
          temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd74));
          if (temp_v1 == 2) {
            *(unsigned int *)(param_1 + 0x2c) = 0x14;
            return;
          }
        }
        return;
      }
      if (temp_v1 == 0) {
        temp_v1 = 1;
      }
      else {
        if (temp_v1 != 1) {
          return;
        }
        DAT_0044cfb8 = 0;
        infoWinStartTimer(0);
        temp_v1 = 10;
      }
      *(int *)(param_1 + 0x2c) = temp_v1;
      return;
    }
    else if (DAT_0044cfb8 == 0) {
      if (*(char *)(*(int *)(param_1 + 0xd60) + 0x6c) == '0') {
        *(unsigned int *)(param_1 + 0x2c) = 0x14;
        return;
      }
      textFormatBuffer(temp_v3,&LAB_003b9218,*(int *)(param_1 + 0xd60) + 0x6c);
      temp_v2 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0xd6c),temp_v3);
      messageStatesSetFirst(0);
      buttonHelpSetPreset(0x90);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd74),temp_v2);
      *(unsigned char *)(param_1 + 0x6cc) = 1;
      temp_v1 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v1;
      return;
    }
  }
  else {
    if (temp_v1 == 0x1e) {
      messageStatesSetFirst(0);
      temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd9c));
      if (temp_v1 != 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x1f;
      buttonHelpSelectByProgress(param_1);
      objBlockInitAndMark(param_1 + 0x9c);
      FUN_0022b6c4(param_1 + 0x9c);
      *(unsigned char *)(param_1 + 0x6cc) = 0;
      DAT_0044cfb8 = 0;
      FUN_002636d0(1);
      dialogOpen(0);
      infoWinSetMessage(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      return;
    }
    if (temp_v1 == 0x1f) {
      temp_v1 = FUN_0022b14c(param_1 + 0x9c);
      if (temp_v1 == 0) {
        return;
      }
      messageStatesSetFirst(1);
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      DAT_0044cfb8 = 0;
      *(unsigned char *)(param_1 + 0x6ce) = 0;
      return;
    }
    if (temp_v1 != 0x28) {
      if (temp_v1 != 99) {
        return;
      }
      contentTransitionApplyCommand((ContentTransition *)param_1,(const void *)*(unsigned int *)(param_1 + 0xd60));
      return;
    }
    temp_v1 = FUN_0022b14c(param_1 + 0x9c);
    if (temp_v1 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x28) = 5;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  dialogOpen(0);
  infoWinSetMessage(*(unsigned int *)(param_1 + 0xd80),*(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
  DAT_0044cfb8 = 0;
  *(unsigned char *)(param_1 + 0x6ce) = 0;
  return;
}

} /* extern "C" */
