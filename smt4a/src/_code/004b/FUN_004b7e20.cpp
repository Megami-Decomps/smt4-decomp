/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7e20` (_code @ 0x4b7e20, 0x3dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {

int FUN_004b726c(...);

int textFormatBuffer(unsigned char [32], unsigned char *, int);
int sysPlaySe(...);
int buttonHelpSetText(int, unsigned int);
int messageSetMode(...);
int dialogOpen(...);
int dialogClose(int);
int scrScriptProcessStartEntry(...);
int FUN_002bf4f4(...);
int moveCameraCtrlCreateEntry(unsigned int, unsigned char *, int);
int linkSlotSetFlag1C(unsigned int, int);
void FUN_0040738c(unsigned int owner, float frame);
int linkSlotSetFlag20(unsigned int, int);
int listSelectItem(unsigned int, int);
int FUN_00407a80(unsigned int);
int FUN_004080bc(...);
int FUN_004b7d88(...);
int menu4CReset(...);
int menu4CStartBlock74(...);
int VectorSignedToFloat(int, int);

extern unsigned char LAB_004b8200; /* 0x4b8200 */
extern unsigned char LAB_004b820c; /* 0x4b820c */
extern int DAT_0058800c; /* 0x58800c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: buttonHelpSetText. */
/* Supplied declaration required: messageSetMode. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: dialogClose. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: infoWinSetText. */
/* Supplied declaration required: FUN_002bf4f4. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: moveCameraCtrlCreateEntry. */
/* Supplied declaration required: linkSlotSetFlag1C. */
/* Supplied declaration required: FUN_0040738c. */
/* Supplied declaration required: linkSlotSetFlag20. */
/* Supplied declaration required: listSelectItem. */
/* Supplied declaration required: FUN_00407a80. */
/* Supplied declaration required: FUN_004080bc. */
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_004b726c. */
/* Supplied declaration required: FUN_004b7d88. */
extern int menu4CGetEntry(int, int);
extern int FUN_004ba698(int);
/* Supplied declaration required: menu4CReset. */
/* Supplied declaration required: menu4CStartBlock74. */


void FUN_004b7e20(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [32];
  
  temp_v2 = *(int *)(param_1 + 0x2c);
  if (temp_v2 == 0x15) {
    temp_v2 = *(int *)(param_1 + 0x38);
    temp_v3 = temp_v2 + 1;
    if (temp_v3 >= 0xf) {
      temp_v2 = 99;
    }
    *(int *)(param_1 + 0x38) = temp_v3;
    if (temp_v3 >= 0xf) {
      *(int *)(param_1 + 0x2c) = temp_v2;
    }
    FUN_0040738c(*(unsigned int *)(param_1 + 0x1218), (float)temp_v3);
    return;
  }
  if (temp_v2 < 0x16) {
    if (temp_v2 != 10) {
      if (temp_v2 >= 10) {
        if (temp_v2 != 0xb) {
          if (temp_v2 == 0x14) {
            if (DAT_0058800c != 0) {
              messageSetMode(1);
              FUN_004b7d88(param_1);
              menu4CStartBlock74(param_1 + 0x9c);
              menu4CReset(param_1 + 0x9c);
              *(unsigned char *)(param_1 + 0xa88) = 0;
              temp_v2 = 0x28;
              DAT_0058800c = 0;
            }
            else {
              messageSetMode(1);
              if ((*(char *)(*(int *)(param_1 + 0x111c) + 0x7c) != '\0') &&
                 (temp_v2 = FUN_004186e0(), temp_v2 != 0)) {
                scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1158),0x3b);
                if (*(char *)(param_1 + 0xa88) == '\0') {
                  *(unsigned char *)(param_1 + 0xa88) = 1;
                }
                sysPlaySe(0x92);
                buttonHelpSetText(0,0xf4f4f4ff);
                temp_v2 = 0x1e;
              }
              else {
                if (*(char *)(param_1 + 0x1214) != '\0') {
                  temp_v2 = menu4CGetEntry(param_1 + 0x9c,(int)*(short *)(param_1 + 0x4c));
                  if (!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
                    FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28),
                                 (int)*(char *)(temp_v2 + 0x2a));
                  }
                  else {
                    temp_v0 = *(char *)(temp_v2 + 0x2a);
                    if (!(temp_v0 == '\0' || temp_v0 == '\x06')) {
                      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28));
                      linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),0);
                      temp_v1 = *(unsigned int *)(param_1 + 0x1218);
                    }
                    else {
                      FUN_00407a80(*(unsigned int *)(param_1 + 0x1218));
                      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28),
                                   (int)*(char *)(temp_v2 + 0x2a));
                      moveCameraCtrlCreateEntry(*(unsigned int *)(param_1 + 0x1218),&LAB_004b820c,0);
                      listSelectItem(*(unsigned int *)(param_1 + 0x1218),0);
                      linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),1);
                      temp_v1 = *(unsigned int *)(param_1 + 0x1218);
                    }
                    linkSlotSetFlag1C(temp_v1,temp_v0 != '\0' && temp_v0 != '\x06');
                  }
                }
                *(unsigned int *)(param_1 + 0x38) = 0;
                temp_v2 = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            *(int *)(param_1 + 0x2c) = temp_v2;
            return;
          }
        }
        else {
          temp_v2 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1130));
          if (temp_v2 == 2) {
            *(unsigned int *)(param_1 + 0x2c) = 0x14;
            return;
          }
        }
        return;
      }
      if (temp_v2 == 0) {
        temp_v2 = 1;
      }
      else {
        if (temp_v2 != 1) {
          return;
        }
        DAT_0058800c = 0;
        dialogClose(0);
        temp_v2 = 10;
      }
      *(int *)(param_1 + 0x2c) = temp_v2;
      return;
    }
    else if (DAT_0058800c == 0) {
      if (*(char *)(*(int *)(param_1 + 0x111c) + 0x6c) == '0') {
        *(unsigned int *)(param_1 + 0x2c) = 0x14;
        return;
      }
      textFormatBuffer(temp_v4,&LAB_004b8200,*(int *)(param_1 + 0x111c) + 0x6c);
      temp_v1 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x1128),temp_v4);
      messageSetMode(0);
      sysPlaySe(0x92);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1130),temp_v1);
      *(unsigned char *)(param_1 + 0xa88) = 1;
      temp_v2 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v2;
      return;
    }
  }
  else {
    if (temp_v2 == 0x1e) {
      messageSetMode(0);
      temp_v2 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1158));
      if (temp_v2 != 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x1f;
      FUN_004b7d88(param_1);
      menu4CStartBlock74(param_1 + 0x9c);
      menu4CReset(param_1 + 0x9c);
      *(unsigned char *)(param_1 + 0xa88) = 0;
      DAT_0058800c = 0;
      FUN_002bf4f4(1);
      dialogOpen(0);
      infoWinSetText(reinterpret_cast<const char *>(*(unsigned int *)(param_1 + 0x113c)), *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
      return;
    }
    if (temp_v2 == 0x1f) {
      temp_v2 = FUN_004ba698(param_1 + 0x9c);
      if (temp_v2 == 0) {
        return;
      }
      messageSetMode(1);
      *(unsigned int *)(param_1 + 0x2c) = 0;
      *(unsigned int *)(param_1 + 0x28) = 5;
      DAT_0058800c = 0;
      *(unsigned char *)(param_1 + 0xa8a) = 0;
      return;
    }
    if (temp_v2 != 0x28) {
      if (temp_v2 != 99) {
        return;
      }
      FUN_004b726c(param_1,*(unsigned int *)(param_1 + 0x111c));
      return;
    }
    temp_v2 = FUN_004ba698(param_1 + 0x9c);
    if (temp_v2 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 5;
  dialogOpen(0);
  infoWinSetText(reinterpret_cast<const char *>(*(unsigned int *)(param_1 + 0x113c)), *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f))
  ;
  DAT_0058800c = 0;
  *(unsigned char *)(param_1 + 0xa8a) = 0;
  return;
}

} /* extern "C" */
