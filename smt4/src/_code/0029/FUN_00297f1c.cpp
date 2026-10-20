/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297f1c` (_code @ 0x297f1c, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028cf30(...);
int FUN_0028e9ec(int);
int FUN_00292dd0(void);
int FUN_00292f4c(void);
int btlGetMainState(void);
int FUN_00297b94(...);
int playSceneSetState(...);
int flaggedEntrySetValueB(int, int);
int FUN_0029f848(int, int, int, int, int, int);
int buttonHelpGetMode(void);
int FUN_002b8584(...);
int buttonHelpSetPreset(void);
int ifTouchRegionRemove(void);
int FUN_002bee58(int, int);
int __aeabi_memset4(int, int, unsigned int);
int FUN_002cfed0(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0028cf30. */
/* Supplied declaration required: FUN_0028e9ec. */
/* Supplied declaration required: FUN_00292dd0. */
/* Supplied declaration required: FUN_00292f4c. */
extern int FUN_00293230(void);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00297b94. */
extern unsigned int FUN_00297ca4(int, unsigned int);
/* Supplied declaration required: playSceneSetState. */
/* Supplied declaration required: flaggedEntrySetValueB. */
extern int FUN_0029d644(unsigned int);
extern unsigned int FUN_0029e958(int);
extern int FUN_0029ee54(unsigned int);
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: buttonHelpGetMode. */
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_002b898c(void);
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_002cfed0. */


/* WARNING: Removing unreachable block (ram,0x00298638) */
/* WARNING: Removing unreachable block (ram,0x0029866c) */
/* WARNING: Removing unreachable block (ram,0x00298670) */
/* WARNING: Removing unreachable block (ram,0x00298674) */
/* WARNING: Removing unreachable block (ram,0x00298678) */
/* WARNING: Removing unreachable block (ram,0x00298694) */
/* WARNING: Removing unreachable block (ram,0x00298730) */
/* WARNING: Removing unreachable block (ram,0x002986a8) */
/* WARNING: Removing unreachable block (ram,0x002986d0) */
/* WARNING: Removing unreachable block (ram,0x002986e8) */
/* WARNING: Removing unreachable block (ram,0x002986ec) */
/* WARNING: Removing unreachable block (ram,0x002986f0) */
/* WARNING: Removing unreachable block (ram,0x002986f4) */
/* WARNING: Removing unreachable block (ram,0x00298714) */
/* WARNING: Removing unreachable block (ram,0x002986f8) */
/* WARNING: Removing unreachable block (ram,0x002986b4) */
/* WARNING: Removing unreachable block (ram,0x00298750) */
/* WARNING: Removing unreachable block (ram,0x0029875c) */
/* WARNING: Removing unreachable block (ram,0x0029876c) */
/* WARNING: Removing unreachable block (ram,0x00298374) */
/* WARNING: Removing unreachable block (ram,0x00298290) */
/* WARNING: Removing unreachable block (ram,0x0029829c) */
/* WARNING: Removing unreachable block (ram,0x002982a0) */
/* WARNING: Removing unreachable block (ram,0x002982a4) */
/* WARNING: Removing unreachable block (ram,0x00298284) */
/* WARNING: Removing unreachable block (ram,0x0029828c) */
/* WARNING: Removing unreachable block (ram,0x002982c8) */
/* WARNING: Removing unreachable block (ram,0x002982e8) */
/* WARNING: Removing unreachable block (ram,0x002982ec) */
/* WARNING: Removing unreachable block (ram,0x002982f0) */
/* WARNING: Removing unreachable block (ram,0x00298378) */
/* WARNING: Removing unreachable block (ram,0x002983a0) */
/* WARNING: Removing unreachable block (ram,0x002983b4) */
/* WARNING: Removing unreachable block (ram,0x002983b8) */
/* WARNING: Removing unreachable block (ram,0x002983bc) */
/* WARNING: Removing unreachable block (ram,0x002983c0) */
/* WARNING: Removing unreachable block (ram,0x002983c4) */
/* WARNING: Removing unreachable block (ram,0x002983c8) */
/* WARNING: Removing unreachable block (ram,0x002983cc) */
/* WARNING: Removing unreachable block (ram,0x002983f8) */
/* WARNING: Removing unreachable block (ram,0x00298588) */
/* WARNING: Removing unreachable block (ram,0x002985a0) */
/* WARNING: Removing unreachable block (ram,0x002985a4) */
/* WARNING: Removing unreachable block (ram,0x002985a8) */
/* WARNING: Removing unreachable block (ram,0x002985bc) */
/* WARNING: Removing unreachable block (ram,0x00298794) */

void FUN_00297f1c(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 62 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  if (*(char *)(param_1 + 0x3083) != '\0') {
    *(unsigned int *)(param_1 + 0x305c) = 0;
    FUN_0028e9ec(param_1);
    flaggedEntrySetValueB(param_1 + 0x33a8,0);
    FUN_002bee58(param_1 + 0x20,0);
    temp_v4 = 0;
    do {
      FUN_002bee58(param_1 + temp_v4 * 0x8c + 0x138,0);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    *(unsigned int *)(param_1 + 0x3054) = 0x2d;
    playSceneSetState(param_1,0x10,1);
    return;
  }
  btlGetMainState();
  temp_v4 = FUN_00293230();
  if ((temp_v4 == 0) && (temp_v4 = btlGetMainState(), (*(unsigned int *)(temp_v4 + 0x44a0) & 0x200) == 0)) {
    if (param_3 != -1) {
      if (param_3 == 0xb) {
        playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),1);
        return;
      }
      if (param_3 != 1) {
        if (param_3 != 2) {
          if (param_3 == 7) {
            playSceneSetState(param_1,10,1);
            return;
          }
          if (param_3 == 3) {
            if (*(int *)(param_1 + 0x3048) == 0x22) {
              FUN_0029f848(param_1 + 0x33a8,4,1,4,1,1);
            }
            if (*(int *)(param_1 + 0x3048) == 0x13 || *(int *)(param_1 + 0x3048) == 0x16) {
              buttonHelpGetMode();
              buttonHelpSetPreset();
            }
            temp_v4 = *(int *)(param_1 + 0x3048);
            if ((temp_v4 == 0x22 || temp_v4 == 0x23) || temp_v4 == 0x24) {
              buttonHelpGetMode();
              buttonHelpSetPreset();
            }
            temp_v4 = FUN_002b898c();
            if (temp_v4 == 0x3d) {
              btlGetMainState();
              temp_v4 = FUN_00293230();
              if (temp_v4 == 0) {
                buttonHelpGetMode();
                buttonHelpSetPreset();
              }
            }
            if (*(int *)(param_1 + 0x3048) == 7) {
              if (*(int *)(param_1 + 0x304c) - 8U < 6) {
                FUN_00292f4c();
              }
              else {
                temp_v1 = FUN_00297ca4(param_1,1);
                FUN_00297b94(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
              }
            }
            FUN_00292dd0();
            *(unsigned int *)(param_1 + 0x304c) = *(unsigned int *)(param_1 + 0x3048);
            *(unsigned int *)(param_1 + 0x3044) = 0;
            *(unsigned int *)(param_1 + 0x3048) = 0xc;
            temp_v4 = 0;
            if (temp_v4 < *(short *)(param_1 + 0x5714)) {
              do {
                ifTouchRegionRemove();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < *(short *)(param_1 + 0x5714));
            }
            *(unsigned short *)(param_1 + 0x5714) = 0;
            __aeabi_memset4(param_1 + 0x5716,0x40,0xffffffff);
            temp_v2 = FUN_0029e958(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
            temp_v4 = 0;
            if (temp_v4 < (int)temp_v2) {
              do {
                if ((temp_v2 & 1) == 0) {
                  temp_v3 = temp_v4 + (int)(8 - temp_v2) / 2 + 0x106;
                }
                else {
                  temp_v3 = temp_v4 + (int)(7 - temp_v2) / 2 + 0xff;
                }
                temp_v0 = FUN_002b8584(0x15,temp_v3);
                temp_v3 = temp_v4 * 2;
                temp_v4 = temp_v4 + 1;
                *(unsigned short *)(param_1 + temp_v3 + 0x5716) = temp_v0;
                *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
              } while (temp_v4 < (int)temp_v2);
            }
            puVar6 = (unsigned int *)(param_1 + 0x340c);
            temp_v3 = 0;
            temp_v4 = FUN_0029d644(*puVar6);
            if (0 < temp_v4) {
              do {
                if (*(int *)(param_1 + 0x305c) == 1) {
                  temp_v4 = 0xc2;
                }
                else if (*(int *)(param_1 + 0x305c) == 2) {
                  temp_v4 = 0xbb;
                }
                else {
                  temp_v4 = 0xb3;
                }
                temp_v0 = FUN_002b8584(0x15,temp_v4 + temp_v3);
                temp_v4 = temp_v3 * 2;
                temp_v3 = temp_v3 + 1;
                *(unsigned short *)(param_1 + temp_v4 + 0x572c) = temp_v0;
                *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
                temp_v4 = FUN_0029d644(*puVar6);
              } while (temp_v3 < temp_v4);
            }
            temp_v4 = FUN_0029ee54(*puVar6);
            temp_v3 = FUN_0029d644(*puVar6);
            if (temp_v3 < temp_v4) {
              if (*(int *)(param_1 + 0x305c) != 1) {
                if (*(int *)(param_1 + 0x305c) != 2) {
                  temp_v0 = FUN_002b8584(0x15,0x196);
                  *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                  temp_v0 = FUN_002b8584(0x15,0x194);
                  *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                  temp_v0 = FUN_002b8584(0x15,0x195);
                  *(unsigned short *)(param_1 + 0x572a) = temp_v0;
                }
                else {
                  temp_v0 = FUN_002b8584(0x15,0x193);
                  *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                  temp_v0 = FUN_002b8584(0x15,0x191);
                  *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                  temp_v0 = FUN_002b8584(0x15,0x192);
                  *(unsigned short *)(param_1 + 0x572a) = temp_v0;
                }
              }
              else {
                temp_v0 = FUN_002b8584(0x15,0x199);
                *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                temp_v0 = FUN_002b8584(0x15,0x197);
                *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                temp_v0 = FUN_002b8584(0x15,0x198);
                *(unsigned short *)(param_1 + 0x572a) = temp_v0;
              }
              *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 3;
            }
            return;
          }
          playSceneSetState(param_1,1,1);
          return;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x3470) = 0;
        *(unsigned int *)(param_1 + 0x3474) = 0;
        *(unsigned int *)(param_1 + 0x3478) = 0;
        *(unsigned int *)(param_1 + 0x347c) = 0;
      }
      playSceneSetState(param_1,8,1);
      return;
    }
    temp_v4 = *(int *)(param_1 + 0x3048);
    if ((temp_v4 == 0x1a) || (temp_v4 == 0x1b)) {
      playSceneSetState(param_1,1);
      temp_v1 = FUN_00297ca4(param_1,1);
      FUN_00297b94(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
      return;
    }
    if (temp_v4 != 0x11) {
      btlGetMainState();
      temp_v4 = FUN_00293230();
      if ((temp_v4 == 0) && (temp_v4 = btlGetMainState(), (*(unsigned int *)(temp_v4 + 0x44a0) & 0x200) == 0)) {
        FUN_002cfed0(param_1,param_2,1,param_4);
        return;
      }
    }
    FUN_0028cf30(param_1,param_2,param_4);
    return;
  }
  FUN_002cfed0(param_1,param_2,1,param_4);
  return;
}

} /* extern "C" */
