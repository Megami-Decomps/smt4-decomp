/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025d6a0` (_code @ 0x25d6a0, 0xfd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167c14(...);
int FUN_0036c7a8(...);
int uiGetFloatValue(void);
int textureRequestCacheGet(...);
int FUN_003aedc8(...);
int FUN_003e54b8(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

int FUN_00152cf8(...);
int FUN_00182054(void);
int FUN_001834a4(...);
int linkHolderApplyFlag(...);
int FUN_002e1c94(...);
int FUN_002e207c(...);
int FUN_002e2114(void);
int FUN_002e2184(...);
int campCecSetObjectValue(int);
int gameDataGetMarkEntry(...);
int FUN_00359974(int, unsigned int);
int controllerApplyPreset(...);
int screenStartOrClear(...);
int uiDrawExtendedRecordLabel(...);
int FUN_0039bb48(...);
int characterInfoPanelPopulate(...);
int devilIsTextureLoaded(...);
int FUN_003b60c0(unsigned int, int);
int sysPlayVoice(...);
int resourceEntryMarkReleased(...);
int FUN_003e5c68(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern int g_campCecView; /* 0x57f130 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00152cf8. */
extern int FUN_00163fd4(unsigned int);
extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: FUN_00167c14. */
/* Supplied declaration required: FUN_00182054. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: linkHolderApplyFlag. */
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: FUN_002e1c94. */
/* Supplied declaration required: FUN_002e207c. */
/* Supplied declaration required: FUN_002e2114. */
/* Supplied declaration required: FUN_002e2184. */
/* Supplied declaration required: campCecSetObjectValue. */
extern int overlayGetStatusScene(void);
extern int buttonHelpGetPanelMode(void);
extern unsigned int overlayGetBuffer1(void);
/* Supplied declaration required: gameDataGetMarkEntry. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: controllerApplyPreset. */
/* Supplied declaration required: FUN_0036c7a8. */
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: uiDrawExtendedRecordLabel. */
/* Supplied declaration required: uiGetFloatValue. */
extern int FUN_0039a2d8(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: textureRequestCacheGet. */
/* Supplied declaration required: FUN_0039bb48. */
/* Supplied declaration required: characterInfoPanelPopulate. */
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: FUN_003aedc8. */
/* Supplied declaration required: FUN_003b60c0. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003e54b8. */
/* Supplied declaration required: resourceEntryMarkReleased. */
extern int fourPtrsAllNull(unsigned int);
/* Supplied declaration required: FUN_003e5c68. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0025d6a0(void)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 30 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  int temp_v17 [27];
  
  temp_v0 = g_campCecView;
  temp_v16 = 0x3f800000;
  temp_v1 = *(int *)(g_campCecView + 0x11c);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 == 2) {
        temp_v1 = 0;
        do {
          temp_v9 = temp_v0 + temp_v1 * 0x14;
          temp_v17[0] = *(int *)(temp_v9 + 0xac);
          temp_v17[1] = 0;
          temp_v5 = FUN_0039a2d8(temp_v9 + 0xa4,0,0xfffffeb6,3);
          if (temp_v5 != 0) {
            *(unsigned char *)(temp_v9 + 0xb0) = 1;
          }
          else {
            *(int *)(temp_v9 + 0xac) = *(int *)(temp_v9 + 0xac) + 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v1 = 0;
        do {
          temp_v5 = temp_v0 + temp_v1 * 0x14;
          FUN_002e1c94(temp_v5 + 0x78,4);
          temp_v1 = temp_v1 + 1;
          *(int *)(temp_v5 + 0x84) = *(int *)(temp_v5 + 0x84) + 1;
        } while (temp_v1 < 2);
        if (*(char *)(temp_v0 + 0xd8) == '\x01') {
          temp_v1 = *(int *)(temp_v0 + 8);
          FUN_002e2114();
          if (temp_v1 != 0) {
            temp_v1 = (int)*(short *)(*(int *)(temp_v0 + 0x110) + 0x90);
            devilIsTextureLoaded(temp_v1,1);
            if (temp_v1 != 0) {
              campCecSetObjectValue(0);
              *(unsigned char *)(temp_v0 + 0x134) = 1;
            }
          }
        }
      }
      goto LAB_0025e5ec;
    }
  }
  else {
    linkHolderApplyFlag(*(unsigned int *)(g_campCecView + 8),0);
    temp_v5 = (int)*(short *)(*(int *)(temp_v0 + 0x110) + 0x90);
    devilIsTextureLoaded(temp_v5,1);
    temp_v1 = g_campCecView;
    if (temp_v5 != 0) {
      if (*(int *)(temp_v0 + 0x144) == 1) {
        FUN_0039bb48(*(unsigned int *)(g_campCecView + 0xc),temp_v17);
        temp_v5 = *(int *)(temp_v1 + 8);
        FUN_002e2114();
        if (temp_v5 != 0) {
          temp_v5 = overlayGetStatusScene();
          resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),0);
          temp_v5 = overlayGetStatusScene();
          resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),1);
          temp_v5 = overlayGetStatusScene();
          resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),2);
          FUN_002e2184(*(unsigned int *)(temp_v1 + 8),temp_v17);
          FUN_002e207c(*(unsigned int *)(temp_v1 + 8));
          linkHolderApplyFlag(*(unsigned int *)(temp_v1 + 8),0);
          *(unsigned int *)(temp_v1 + 0x124) = *(unsigned int *)(temp_v1 + 0x114);
        }
        *(unsigned int *)(temp_v0 + 0x144) = 2;
      }
      temp_v5 = *(int *)(temp_v0 + 8);
      FUN_002e2114();
      temp_v1 = 0;
      if (temp_v5 != 0) {
        temp_v1 = *(int *)(temp_v0 + 0x138);
      }
      if (temp_v5 != 0 && temp_v1 != 0) {
        temp_v1 = (int)*(short *)(*(int *)(temp_v0 + 0x110) + 0x90);
        devilIsTextureLoaded(temp_v1,1);
        if (temp_v1 != 0) {
          *(unsigned int *)(temp_v0 + 0x144) = 0;
          if (*(char *)(temp_v0 + 0x13c) == '\0') {
            characterInfoPanelPopulate(*(unsigned int *)(temp_v0 + 0x110),*(unsigned int *)(temp_v0 + 0xc));
            *(unsigned char *)(temp_v0 + 0x13c) = 1;
            controllerApplyPreset(*(unsigned int *)(temp_v0 + 8),*(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x42));
          }
          temp_v6 = (unsigned int)*(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x22);
          FUN_00182054();
          if (temp_v6 == 0) {
            FUN_003b60c0(*(unsigned int *)(temp_v0 + 0x110),
                         *(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x22));
            goto LAB_0025e5ec;
          }
          temp_v1 = buttonHelpGetPanelMode();
          if (temp_v1 == 0) {
            FUN_00359974(0,*(unsigned int *)(temp_v0 + 0x120));
            temp_v2 = overlayGetBuffer1();
            screenStartOrClear(temp_v2,0xe);
          }
          if ((*(int *)(temp_v0 + 0x124) == *(int *)(temp_v0 + 0x114)) &&
             (*(char *)(temp_v0 + 0xec) != '\0')) {
            linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),1);
            *(unsigned char *)(temp_v0 + 0x13d) = 1;
          }
          FUN_003e5c68(*(unsigned int *)(*(int *)(temp_v0 + 8) + 0x1c),*(int *)(temp_v0 + 8) + 0xc);
          *(unsigned int *)(temp_v0 + 0x11c) = 1;
          if (*(char *)(temp_v0 + 0xec) == '\0') {
            linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),0);
            *(unsigned char *)(temp_v0 + 0x13d) = 0;
            FUN_002e1c94(temp_v0 + 0x8c,4,*(unsigned int *)(temp_v0 + 0x98));
            temp_v1 = 0;
            *(int *)(temp_v0 + 0x98) = *(int *)(temp_v0 + 0x98) + 1;
            do {
              temp_v17[0] = *(int *)(temp_v0 + 0xac);
              temp_v17[1] = 1;
              temp_v9 = FUN_0039a2d8(temp_v0 + 0xa4,0x14a,0,4);
              temp_v5 = temp_v1;
              if (temp_v9 != 0) {
                *(unsigned char *)(temp_v0 + 0xb0) = 1;
              }
              else {
                *(int *)(temp_v0 + 0xac) = *(int *)(temp_v0 + 0xac) + 1;
              }
              while( 1 ) {
                temp_v1 = temp_v5 + 1;
                *(int *)(temp_v0 + temp_v5 * 0x14 + 0xa0) = (int)temp_v16;
                if (temp_v1 >= 4) {
                  if (*(int *)(temp_v0 + 0x11c) == 1) {
                    *(unsigned int *)(temp_v0 + 0x11c) = 0;
                  }
                  goto LAB_0025d9ec;
                }
                if (temp_v1 == 0) break;
                temp_v9 = temp_v0 + temp_v1 * 0x14;
                temp_v5 = temp_v1;
                if (*(int *)(temp_v9 + 0x98) >= 3) {
                  temp_v17[0] = *(int *)(temp_v9 + 0xac);
                  temp_v17[1] = 1;
                  temp_v1 = FUN_0039a2d8(temp_v9 + 0xa4,0x14a,0,4);
                  if (temp_v1 != 0) {
                    *(unsigned char *)(temp_v9 + 0xb0) = 1;
                  }
                  else {
                    *(int *)(temp_v9 + 0xac) = *(int *)(temp_v9 + 0xac) + 1;
                  }
                }
              }
            } while( 1 );
          }
        }
      }
    }
  }
LAB_0025d9ec:
  if (*(char *)(temp_v0 + 0xec) != '\0') {
    temp_v1 = 0;
    if (*(int *)(temp_v0 + 0x144) != 1) {
      temp_v9 = *(int *)(temp_v0 + 0x114);
      temp_v5 = padButtonRepeat(0);
      if (temp_v5 == 0) {
        temp_v5 = padButtonRepeat(1);
        if (temp_v5 != 0) {
          if (*(int *)(temp_v0 + 0x11c) == 1) {
            *(unsigned int *)(temp_v0 + 0xac) = 0;
            *(unsigned char *)(temp_v0 + 0xb0) = 0;
            *(unsigned int *)(temp_v0 + 0xc0) = 0;
            *(unsigned char *)(temp_v0 + 0xc4) = 0;
            *(unsigned int *)(temp_v0 + 0xd4) = 0;
            *(unsigned char *)(temp_v0 + 0xd8) = 0;
            *(unsigned int *)(temp_v0 + 0xe8) = 0;
            *(unsigned char *)(temp_v0 + 0xec) = 0;
            *(unsigned int *)(temp_v0 + 0x84) = 0;
            *(unsigned char *)(temp_v0 + 0x88) = 0;
            *(unsigned int *)(temp_v0 + 0x98) = 0;
            *(unsigned char *)(temp_v0 + 0x9c) = 0;
            linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),0);
            temp_v1 = 2;
          }
        }
        else {
          temp_v5 = padButtonRepeat(5);
          if (temp_v5 != 0) {
            temp_v5 = *(int *)(temp_v0 + 0x114) - 1;
            *(int *)(temp_v0 + 0x114) = temp_v5;
            if (temp_v5 < 0) {
              *(unsigned int *)(temp_v0 + 0x114) = 0;
              *(unsigned int *)(temp_v0 + 0x118) = 0;
            }
            else if ((temp_v5 < *(int *)(temp_v0 + 0x118)) || (*(int *)(temp_v0 + 0x118) + 3 <= temp_v5)) {
              *(int *)(temp_v0 + 0x118) = temp_v5;
            }
          }
          else {
            temp_v5 = padButtonRepeat(6);
            if (temp_v5 != 0) {
              temp_v3 = *(int *)(temp_v0 + 0x120);
              temp_v5 = *(int *)(temp_v0 + 0x114) + 1;
              *(int *)(temp_v0 + 0x114) = temp_v5;
              if (temp_v5 >= temp_v3) {
                *(int *)(temp_v0 + 0x114) = temp_v3 - 1;
                if (*(int *)(temp_v0 + 0x120) >= 3) {
                  temp_v3 = temp_v3 - 3;
                  *(int *)(temp_v0 + 0x118) = temp_v3;
                }
              }
              else {
                temp_v3 = *(int *)(temp_v0 + 0x118);
                if ((temp_v5 < temp_v3) || (temp_v3 + 3 <= temp_v5)) {
                  temp_v3 = temp_v3 + 1;
                  *(int *)(temp_v0 + 0x118) = temp_v3;
                }
              }
            }
            else {
              temp_v5 = padButtonRepeat(4);
              if ((((temp_v5 == 0) || (temp_v5 = FUN_00163fd4(6), temp_v5 != 0)) ||
                  (temp_v5 = FUN_00163fd4(5), temp_v5 != 0)) || (temp_v5 = FUN_00163fd4(3), temp_v5 != 0)) {
                temp_v5 = padButtonRepeat(3);
                if (((temp_v5 == 0) || (temp_v5 = FUN_00163fd4(6), temp_v5 != 0)) ||
                   ((temp_v5 = FUN_00163fd4(5), temp_v5 != 0 || (temp_v5 = FUN_00163fd4(4), temp_v5 != 0))))
                {
                  temp_v5 = padButtonRepeat(10);
                  if (temp_v5 != 0) {
                    if (*(char *)(temp_v0 + 0x135) != '\0') {
                      *(unsigned char *)(temp_v0 + 0x135) = 0;
                    }
                    else {
                      *(unsigned char *)(temp_v0 + 0x135) = 1;
                    }
                    *(unsigned int *)(temp_v0 + 0x84) = 0;
                    *(unsigned int *)(temp_v0 + 0x7c) = 0x14a;
                    sysPlayVoice(0x100020e);
                  }
                }
                else {
                  temp_v5 = *(int *)(temp_v0 + 0x120);
                  temp_v3 = *(int *)(temp_v0 + 0x114);
                  temp_v8 = temp_v3 + 3;
                  *(int *)(temp_v0 + 0x114) = temp_v8;
                  if (temp_v5 <= temp_v8) {
                    temp_v3 = temp_v5 - 1;
                  }
                  *(int *)(temp_v0 + 0x118) = *(int *)(temp_v0 + 0x118) + 3;
                  if (temp_v5 <= temp_v8) {
                    *(int *)(temp_v0 + 0x114) = temp_v3;
                  }
                  temp_v3 = *(int *)(temp_v0 + 0x120) - 3;
                  temp_v5 = *(int *)(temp_v0 + 0x118);
                  if (temp_v3 < *(int *)(temp_v0 + 0x118)) {
                    temp_v5 = temp_v3;
                  }
                  *(int *)(temp_v0 + 0x118) = temp_v5;
                  if (temp_v5 < 1) {
                    temp_v5 = 0;
                  }
                  *(int *)(temp_v0 + 0x118) = temp_v5;
                }
              }
              else {
                *(int *)(temp_v0 + 0x114) = *(int *)(temp_v0 + 0x114) - 3;
                temp_v5 = *(int *)(temp_v0 + 0x114);
                temp_v3 = *(int *)(temp_v0 + 0x118) - 3;
                *(int *)(temp_v0 + 0x118) = temp_v3;
                if (temp_v5 < 1) {
                  temp_v5 = 0;
                }
                if (temp_v3 < 1) {
                  temp_v3 = 0;
                }
                *(int *)(temp_v0 + 0x114) = temp_v5;
                *(int *)(temp_v0 + 0x118) = temp_v3;
              }
            }
          }
        }
      }
      if (*(int *)(temp_v0 + 0x114) == temp_v9) {
        *(int *)(temp_v0 + 0x130) = *(int *)(temp_v0 + 0x130) + 1;
        if (temp_v1 == 0) goto LAB_0025dd50;
        goto LAB_0025e324;
      }
      if (*(int *)(temp_v0 + 0x130) >= 3) {
        temp_v1 = gameDataGetMarkEntry(temp_v9);
        if ((*(unsigned char *)(temp_v1 + 0x20) & 0x10) != 0) {
          *(unsigned char *)(temp_v1 + 0x20) = *(unsigned char *)(temp_v1 + 0x20) & 0xef;
        }
      }
      temp_v1 = g_campCecView;
      temp_v5 = 0;
      do {
        temp_v9 = gameDataGetMarkEntry(*(int *)(temp_v1 + 0x118) + temp_v5);
        if (*(short *)(temp_v9 + 0x60) != 0) {
          uiDrawExtendedRecordLabel(*(unsigned int *)(temp_v1 + temp_v5 * 4 + 0x104),temp_v9);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 3);
      temp_v5 = gameDataGetMarkEntry(*(unsigned int *)(temp_v1 + 0x114));
      *(int *)(temp_v1 + 0xc) = temp_v5;
      *(unsigned short *)(temp_v5 + 0x34) = *(unsigned short *)(temp_v5 + 0x60);
      sysPlayVoice(0x100020d);
      temp_v1 = 1;
      *(unsigned int *)(temp_v0 + 0x130) = 0;
      *(unsigned int *)(temp_v0 + 0x140) = 0;
      *(unsigned int *)(temp_v0 + 0x144) = 0;
    }
    else {
LAB_0025dd50:
      temp_v5 = 0;
      if (*(int *)(temp_v0 + 0x144) != 1) {
        temp_v8 = *(int *)(temp_v0 + 0x114);
        temp_v9 = -1;
        *(unsigned int *)(temp_v0 + 300) = 0;
        temp_v1 = FUN_001834a4(0x2e,0x42);
        temp_v17[0] = 0;
        temp_v3 = (int)*(short *)(temp_v1 + 8);
        FUN_00152cf8(temp_v3,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                     (int)(*(short **)(temp_v1 + 0xc))[1]);
        if (temp_v3 == 0) {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) & 0xfffffffe;
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) | 1;
        }
        *(unsigned int *)(temp_v0 + 300) = temp_v6;
        temp_v1 = FUN_001834a4(0x2e,0x43);
        temp_v17[0] = 0;
        temp_v3 = (int)*(short *)(temp_v1 + 8);
        FUN_00152cf8(temp_v3,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                     (int)(*(short **)(temp_v1 + 0xc))[1]);
        if (temp_v3 != 0) {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) | 2;
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) & 0xfffffffd;
        }
        *(unsigned int *)(temp_v0 + 300) = temp_v6;
        temp_v1 = FUN_001834a4(0x2e,0x41);
        temp_v17[0] = 0;
        temp_v3 = (int)*(short *)(temp_v1 + 8);
        FUN_00152cf8(temp_v3,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                     (int)(*(short **)(temp_v1 + 0xc))[1]);
        temp_v1 = 0;
        if (temp_v3 != 0) {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) | 4;
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v0 + 300) & 0xfffffffb;
        }
        *(unsigned int *)(temp_v0 + 300) = temp_v6;
        do {
          if (temp_v1 < *(int *)(temp_v0 + 0x120)) {
            temp_v3 = FUN_001834a4(0x2e,temp_v1 + 0x96);
            temp_v17[0] = 0;
            temp_v4 = (int)*(short *)(temp_v3 + 8);
            FUN_00152cf8(temp_v4,(int)*(short *)(temp_v3 + 10),(int)**(short **)(temp_v3 + 0xc),
                         (int)(*(short **)(temp_v3 + 0xc))[1]);
            if (temp_v4 != 0) {
              temp_v9 = temp_v1;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 3);
        if (*(int *)(temp_v0 + 0x120) < 3) {
          *(unsigned int *)(temp_v0 + 300) = 0;
          *(unsigned int *)(temp_v0 + 0x128) = 0;
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v0 + 300);
          if (temp_v6 != 0) {
            temp_v7 = *(int *)(temp_v0 + 0x128) + 1;
            *(unsigned int *)(temp_v0 + 0x128) = temp_v7;
            if ((temp_v7 == 1) || (((int)temp_v7 >= 0xf && ((temp_v7 & 1) == 0)))) {
              if ((temp_v6 & 1) != 0) {
                temp_v6 = temp_v6 | 8;
                *(unsigned int *)(temp_v0 + 300) = temp_v6;
              }
              else if ((temp_v6 & 2) != 0) {
                temp_v6 = temp_v6 | 0x10;
                *(unsigned int *)(temp_v0 + 300) = temp_v6;
              }
            }
          }
          else {
            *(unsigned int *)(temp_v0 + 0x128) = 0;
          }
        }
        temp_v3 = padButtonRepeat(0);
        temp_v1 = temp_v5;
        if (temp_v3 == 0) {
          temp_v5 = FUN_002e1a18(2);
          if (temp_v5 != 0) {
            if (*(int *)(temp_v0 + 0x11c) == 1) {
              *(unsigned int *)(temp_v0 + 0xac) = 0;
              *(unsigned char *)(temp_v0 + 0xb0) = 0;
              *(unsigned int *)(temp_v0 + 0xc0) = 0;
              *(unsigned char *)(temp_v0 + 0xc4) = 0;
              *(unsigned int *)(temp_v0 + 0xd4) = 0;
              *(unsigned char *)(temp_v0 + 0xd8) = 0;
              *(unsigned int *)(temp_v0 + 0xe8) = 0;
              *(unsigned char *)(temp_v0 + 0xec) = 0;
              *(unsigned int *)(temp_v0 + 0x84) = 0;
              *(unsigned char *)(temp_v0 + 0x88) = 0;
              *(unsigned int *)(temp_v0 + 0x98) = 0;
              *(unsigned char *)(temp_v0 + 0x9c) = 0;
              linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),0);
              temp_v1 = 2;
            }
          }
          else if (((((*(unsigned int *)(temp_v0 + 300) & 8) == 0) || (temp_v5 = FUN_00163fd4(6), temp_v5 != 0))
                   || (temp_v5 = FUN_00163fd4(5), temp_v5 != 0)) ||
                  ((temp_v5 = FUN_00163fd4(3), temp_v5 != 0 || (temp_v5 = FUN_00163fd4(4), temp_v5 != 0))))
          {
            if (((((*(unsigned int *)(temp_v0 + 300) & 0x10) == 0) ||
                 ((temp_v5 = FUN_00163fd4(6), temp_v5 != 0 || (temp_v5 = FUN_00163fd4(5), temp_v5 != 0))))
                || (temp_v5 = FUN_00163fd4(3), temp_v5 != 0)) || (temp_v5 = FUN_00163fd4(4), temp_v5 != 0))
            {
              if (((((*(unsigned int *)(temp_v0 + 300) & 4) == 0) || (temp_v5 = FUN_00163fd4(6), temp_v5 != 0)) ||
                  (temp_v5 = FUN_00163fd4(5), temp_v5 != 0)) ||
                 ((temp_v5 = FUN_00163fd4(3), temp_v5 != 0 || (temp_v5 = FUN_00163fd4(4), temp_v5 != 0)))) {
                if (((temp_v9 == -1) || (temp_v5 = FUN_00163fd4(6), temp_v5 != 0)) ||
                   ((temp_v5 = FUN_00163fd4(5), temp_v5 != 0 ||
                    ((temp_v5 = FUN_00163fd4(3), temp_v5 != 0 || (temp_v5 = FUN_00163fd4(4), temp_v5 != 0)))
                    ))) {
                  temp_v5 = FUN_002e1a18(4);
                  if (temp_v5 != 0) {
                    if (*(char *)(temp_v0 + 0x135) != '\0') {
                      *(unsigned char *)(temp_v0 + 0x135) = 0;
                    }
                    else {
                      *(unsigned char *)(temp_v0 + 0x135) = 1;
                    }
                    *(unsigned int *)(temp_v0 + 0x84) = 0;
                    *(unsigned int *)(temp_v0 + 0x7c) = 0x14a;
                    sysPlayVoice(0x100020e);
                  }
                }
                else {
                  *(int *)(temp_v0 + 0x114) = *(int *)(temp_v0 + 0x118) + temp_v9;
                }
              }
              else {
                temp_v5 = *(int *)(temp_v0 + 0x114);
                temp_v3 = *(int *)(temp_v0 + 0x118);
                FUN_00167c14(temp_v17 + 1,temp_v17,0);
                temp_v9 = FUN_001834a4(0x2e,0x41);
                temp_v17[0] = temp_v17[0] - *(short *)(temp_v9 + 10);
                temp_v4 = *(int *)(temp_v9 + 0xc);
                temp_v9 = *(int *)(temp_v0 + 0x120);
                temp_v15 = (float)VectorSignedToFloat(temp_v17[0],(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v12 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = (int)((temp_v15 / temp_v14) * temp_v12);
                if (temp_v9 <= temp_v13) {
                  temp_v4 = temp_v9 - 1;
                }
                *(int *)(temp_v0 + 0x114) = temp_v13;
                if (temp_v9 <= temp_v13) {
                  *(int *)(temp_v0 + 0x114) = temp_v4;
                }
                temp_v5 = *(int *)(temp_v0 + 0x114) - (temp_v5 - temp_v3);
                *(int *)(temp_v0 + 0x118) = temp_v5;
                if (temp_v5 < 1) {
                  temp_v5 = 0;
                }
                *(int *)(temp_v0 + 0x118) = temp_v5;
                if (temp_v9 - 3 < temp_v5) {
                  temp_v5 = temp_v9 - 3;
                }
                *(int *)(temp_v0 + 0x118) = temp_v5;
              }
            }
            else {
              temp_v9 = *(int *)(temp_v0 + 0x120);
              temp_v5 = *(int *)(temp_v0 + 0x114) + 1;
              *(int *)(temp_v0 + 0x114) = temp_v5;
              if (temp_v5 >= temp_v9) {
                temp_v3 = temp_v9;
                if (temp_v9 >= 3) {
                  temp_v3 = temp_v9 - 3;
                }
                *(int *)(temp_v0 + 0x114) = temp_v9 - 1;
                if (temp_v9 >= 3) {
                  *(int *)(temp_v0 + 0x118) = temp_v3;
                }
              }
              else {
                temp_v3 = *(int *)(temp_v0 + 0x118);
                if ((temp_v5 < temp_v3) || (temp_v3 + 3 <= temp_v5)) {
                  temp_v3 = temp_v3 + 1;
                  *(int *)(temp_v0 + 0x118) = temp_v3;
                }
              }
            }
          }
          else {
            temp_v5 = *(int *)(temp_v0 + 0x114) - 1;
            *(int *)(temp_v0 + 0x114) = temp_v5;
            if (temp_v5 < 0) {
              *(unsigned int *)(temp_v0 + 0x114) = 0;
              *(unsigned int *)(temp_v0 + 0x118) = 0;
            }
            else if ((temp_v5 < *(int *)(temp_v0 + 0x118)) || (*(int *)(temp_v0 + 0x118) + 3 <= temp_v5)) {
              *(int *)(temp_v0 + 0x118) = temp_v5;
            }
          }
        }
        if (*(int *)(temp_v0 + 0x114) != temp_v8) {
          if (*(int *)(temp_v0 + 0x130) >= 3) {
            temp_v1 = gameDataGetMarkEntry(temp_v8);
            if ((*(unsigned char *)(temp_v1 + 0x20) & 0x10) != 0) {
              *(unsigned char *)(temp_v1 + 0x20) = *(unsigned char *)(temp_v1 + 0x20) & 0xef;
            }
          }
          temp_v1 = g_campCecView;
          temp_v5 = 0;
          do {
            temp_v9 = gameDataGetMarkEntry(*(int *)(temp_v1 + 0x118) + temp_v5);
            if (*(short *)(temp_v9 + 0x60) != 0) {
              uiDrawExtendedRecordLabel(*(unsigned int *)(temp_v1 + temp_v5 * 4 + 0x104),temp_v9);
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 3);
          temp_v5 = gameDataGetMarkEntry(*(unsigned int *)(temp_v1 + 0x114));
          *(int *)(temp_v1 + 0xc) = temp_v5;
          *(unsigned short *)(temp_v5 + 0x34) = *(unsigned short *)(temp_v5 + 0x60);
          sysPlayVoice(0x100020d);
          temp_v1 = 1;
          *(unsigned int *)(temp_v0 + 0x130) = 0;
        }
        if (*(char *)(temp_v0 + 0x135) != '\0') {
          temp_v17[0] = *(int *)(temp_v0 + 0x84);
          temp_v17[1] = 1;
          temp_v5 = FUN_0039a2d8(temp_v0 + 0x7c,0x14a,0,3);
          if (temp_v5 != 0) {
            *(unsigned char *)(temp_v0 + 0x88) = 1;
          }
          *(int *)(temp_v0 + 0x84) = *(int *)(temp_v0 + 0x84) + 1;
        }
LAB_0025e324:
        if (temp_v1 != 1) {
          if (temp_v1 == 2) {
            sysPlayVoice(0x100020f);
            *(unsigned int *)(temp_v0 + 0x11c) = 2;
          }
        }
        else {
          *(unsigned int *)(temp_v0 + 0x140) = 0;
          *(unsigned int *)(temp_v0 + 0x144) = 0;
        }
      }
    }
    FUN_0036c7a8(temp_v0 + 0xf0);
    if (*(int *)(temp_v0 + 0x11c) == 1 && temp_v1 == 0) {
      temp_v5 = *(int *)(temp_v0 + 0x124);
      temp_v9 = *(int *)(temp_v0 + 0x114);
      temp_v11 = SBORROW4(temp_v5,temp_v9);
      temp_v1 = temp_v5 - temp_v9;
      temp_v10 = temp_v5 != temp_v9;
      if (temp_v10) {
        temp_v5 = *(int *)(temp_v0 + 0x140);
        temp_v11 = SBORROW4(temp_v5,2);
        temp_v1 = temp_v5 - 2;
      }
      if ((temp_v10 && temp_v5 != 2) && temp_v1 < 0 == temp_v11) {
        temp_v5 = (int)*(short *)(*(int *)(temp_v0 + 0x110) + 0x90);
        devilIsTextureLoaded(temp_v5,1);
        temp_v1 = g_campCecView;
        if ((temp_v5 != 0) && (*(int *)(temp_v0 + 0x144) == 1)) {
          FUN_0039bb48(*(unsigned int *)(g_campCecView + 0xc),temp_v17);
          temp_v5 = *(int *)(temp_v1 + 8);
          FUN_002e2114();
          if (temp_v5 != 0) {
            temp_v5 = overlayGetStatusScene();
            resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),0);
            temp_v5 = overlayGetStatusScene();
            resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),1);
            temp_v5 = overlayGetStatusScene();
            resourceEntryMarkReleased(*(unsigned int *)(temp_v5 + 0x1c),2);
            FUN_002e2184(*(unsigned int *)(temp_v1 + 8),temp_v17);
            FUN_002e207c(*(unsigned int *)(temp_v1 + 8));
            linkHolderApplyFlag(*(unsigned int *)(temp_v1 + 8),0);
            *(unsigned int *)(temp_v1 + 0x124) = *(unsigned int *)(temp_v1 + 0x114);
          }
          *(unsigned int *)(temp_v0 + 0x144) = 2;
          *(unsigned char *)(temp_v0 + 0x13d) = 0;
          linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),0);
          controllerApplyPreset(*(unsigned int *)(temp_v0 + 8),*(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x42));
          *(unsigned int *)(temp_v0 + 0x140) = 0;
          *(unsigned int *)(temp_v0 + 0x11c) = 0;
          goto LAB_0025e4d4;
        }
      }
      temp_v5 = *(int *)(temp_v0 + 0x148);
      temp_v9 = *(int *)(temp_v0 + 0x114);
      temp_v11 = SBORROW4(temp_v5,temp_v9);
      temp_v1 = temp_v5 - temp_v9;
      temp_v10 = temp_v5 == temp_v9;
      if (!temp_v10) {
        temp_v5 = *(int *)(temp_v0 + 0x140);
        temp_v11 = SBORROW4(temp_v5,2);
        temp_v1 = temp_v5 - 2;
      }
      if ((!((temp_v10 || temp_v5 == 2) || temp_v1 < 0 != temp_v11)) && (*(int *)(temp_v0 + 0x144) != 1)) {
        characterInfoPanelPopulate(*(unsigned int *)(temp_v0 + 0x110),*(unsigned int *)(temp_v0 + 0xc));
        *(unsigned int *)(temp_v0 + 0x148) = *(unsigned int *)(temp_v0 + 0x114);
        *(int *)(temp_v0 + 0x140) = *(int *)(temp_v0 + 0x140) + 1;
        *(unsigned int *)(temp_v0 + 0x144) = 1;
      }
      else {
        *(int *)(temp_v0 + 0x140) = *(int *)(temp_v0 + 0x140) + 1;
      }
    }
LAB_0025e4d4:
    if (*(int *)(temp_v0 + 0x124) != *(int *)(temp_v0 + 0x114)) {
      linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),0);
      *(unsigned char *)(temp_v0 + 0x13d) = 0;
    }
    else if (*(int *)(temp_v0 + 0x11c) == 1) {
      linkHolderApplyFlag(*(unsigned int *)(temp_v0 + 8),1);
      *(unsigned char *)(temp_v0 + 0x13d) = 1;
      *(unsigned int *)(temp_v0 + 0x144) = 0;
    }
  }
LAB_0025e5ec:
  FUN_003aedc8(*(unsigned int *)(temp_v0 + 0x110),*(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x22));
  if (*(char *)(temp_v0 + 0x134) == '\0') {
    temp_v1 = 0;
    do {
      if (*(int *)(*(int *)(temp_v0 + 0x110) + temp_v1 * 4 + 0x94) != 0) goto LAB_0025e63c;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 9);
    textureRequestCacheGet(*(int *)(temp_v0 + 0x110),*(unsigned char *)(*(int *)(temp_v0 + 0xc) + 0x22));
  }
LAB_0025e63c:
  temp_v5 = fourPtrsAllNull(*(unsigned int *)(*(int *)(temp_v0 + 8) + 0x1c));
  temp_v1 = 0;
  if (temp_v5 != 0) {
    temp_v1 = *(int *)(temp_v0 + 8);
  }
  if (temp_v5 != 0 && temp_v1 != 0) {
    uiGetFloatValue();
    FUN_003e54b8(*(unsigned int *)(*(int *)(temp_v0 + 8) + 0x1c));
  }
  return 0;
}

} /* extern "C" */
