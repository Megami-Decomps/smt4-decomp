/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359dc4` (_code @ 0x359dc4, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_00182054(void);
int FUN_00275bc8(int, unsigned int);
int linkHolderApplyFlag(...);
int FUN_002e1c94(int, int, unsigned int);
int FUN_002e207c(void);
int FUN_002e2114(void);
int FUN_002e2184(unsigned int, unsigned int);
int overlayGetStatusScene(void);
int overlayIsNotBusy(void);
int controllerApplyPreset(unsigned int, int);
int screenStartOrClear(unsigned int, int);
int characterInfoPanelPopulate(unsigned int, unsigned int, unsigned int);
int FUN_003a7a88(int, int);
int FUN_003e5810(unsigned int, int);
int FUN_003e5c68(unsigned int, int);

/* Supplied declaration required: sysPlaySe. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00182054. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: linkHolderApplyFlag. */
/* Supplied declaration required: FUN_002e1c94. */
/* Supplied declaration required: FUN_002e207c. */
/* Supplied declaration required: FUN_002e2114. */
/* Supplied declaration required: FUN_002e2184. */
/* Supplied declaration required: overlayGetStatusScene. */
extern int FUN_0032cfc8(void);
extern unsigned int overlayGetBuffer1(void);
/* Supplied declaration required: overlayIsNotBusy. */
/* Supplied declaration required: controllerApplyPreset. */
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: characterInfoPanelPopulate. */
/* Supplied declaration required: FUN_003a7a88. */
/* Supplied declaration required: FUN_003e5810. */
/* Supplied declaration required: FUN_003e5c68. */


void FUN_00359dc4(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if ((*(char *)(param_1 + 0x10e) == '\0') &&
     ((temp_v0 = (int)*(short *)(*(int *)(param_1 + 0xc) + 0x90), temp_v0 == 0 ||
      (FUN_003a7a88(temp_v0,1), temp_v0 != 0)))) {
    if (*(char *)(param_1 + 0x194) == '\0') {
      temp_v0 = overlayGetStatusScene();
      FUN_003e5810(*(unsigned int *)(temp_v0 + 0x1c),0);
      temp_v0 = overlayGetStatusScene();
      FUN_003e5810(*(unsigned int *)(temp_v0 + 0x1c),1);
      temp_v0 = overlayGetStatusScene();
      FUN_003e5810(*(unsigned int *)(temp_v0 + 0x1c),2);
      temp_v1 = gameGetPlayerData();
      temp_v2 = overlayGetStatusScene();
      FUN_002e2184(temp_v2,temp_v1);
      overlayGetStatusScene();
      FUN_002e207c();
      *(unsigned char *)(param_1 + 0x194) = 1;
    }
    temp_v3 = *(int *)(param_1 + 4);
    FUN_002e2114();
    temp_v0 = 0;
    if (temp_v3 != 0) {
      temp_v0 = *(int *)(param_1 + 0x50);
    }
    if (temp_v3 != 0 && temp_v0 != 0) {
      temp_v5 = *(int *)(param_1 + 0x54) != 0;
      temp_v0 = 0;
      if (temp_v5) {
        temp_v0 = *(int *)(param_1 + 0x58);
      }
      if (temp_v5 && temp_v0 != 0) {
        temp_v4 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x22);
        FUN_00182054();
        if ((temp_v4 != 0) &&
           ((temp_v0 = (int)*(short *)(*(int *)(param_1 + 0xc) + 0x90), temp_v0 == 0 ||
            (FUN_003a7a88(temp_v0,1), temp_v0 != 0)))) {
          temp_v0 = *(int *)(param_1 + 0x50);
          FUN_00275bc8(temp_v0,*(unsigned int *)(param_1 + 0x54));
          *(int *)(param_1 + 0x4c) = temp_v0;
          *(unsigned int *)(temp_v0 + 0x108) = 2;
          *(unsigned char *)(param_1 + 0x10e) = 1;
          linkHolderApplyFlag(*(unsigned int *)(param_1 + 4),1);
          controllerApplyPreset(*(unsigned int *)(param_1 + 4),*(unsigned char *)(*(int *)(param_1 + 8) + 0x42));
          characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                       *(unsigned int *)(param_1 + 0x58));
          temp_v0 = FUN_0032cfc8();
          if (temp_v0 == 0) {
            temp_v1 = overlayGetBuffer1();
            screenStartOrClear(temp_v1,0xf);
          }
          if (*(char *)(param_1 + 0x113) != '\0') {
            sysPlaySe(0xe4);
            *(unsigned int *)(param_1 + 0xf8) = 2;
          }
          else {
            *(unsigned int *)(param_1 + 0xf8) = 5;
            *(unsigned int *)(param_1 + 0xfc) = 1;
            FUN_003e5c68(*(unsigned int *)(*(int *)(param_1 + 4) + 0x1c),*(int *)(param_1 + 4) + 0xc);
          }
          temp_v0 = 0;
          do {
            temp_v3 = param_1 + temp_v0 * 0x14;
            FUN_002e1c94(temp_v3 + 0x10,4,*(unsigned int *)(temp_v3 + 0x1c));
            temp_v0 = temp_v0 + 1;
            *(int *)(temp_v3 + 0x1c) = *(int *)(temp_v3 + 0x1c) + 1;
          } while (temp_v0 < 2);
          overlayIsNotBusy();
          return;
        }
      }
    }
    linkHolderApplyFlag(*(unsigned int *)(param_1 + 4),0);
  }
  return;
}

} /* extern "C" */
