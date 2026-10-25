/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8ce4` (_code @ 0x2c8ce4, 0xe48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_ForwardEffect.h"

extern "C" {

int mapSelectContainingRegions(void);
int FUN_002804ec(...);
int mapEaseSceneHeading(void);
int FUN_002879dc(...);
int mathDistanceBetweenPoints(void);

int FUN_002562e4(int, int);
int partyApplyNonlethalAilmentDamage(int, int);
int FUN_0025bc80(void);
int FUN_0027f48c(...);
int FUN_0027f848(void);
int FUN_0027f958(unsigned int *, unsigned int [13], int);
int lmapSetSceneId(unsigned int);
int FUN_0027fca0(...);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00291e40(...);
int VectorSignedToFloat(...);
int __aeabi_memcpy4(int [40], unsigned char *, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char DAT_00404504; /* 0x404504 */
extern unsigned char DAT_004045a4; /* 0x4045a4 */
extern unsigned char DAT_00404644; /* 0x404644 */
extern unsigned char DAT_004046e4; /* 0x4046e4 */
extern int g_lmapScene; /* 0x447e88 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f93d; /* 0x49f93d */
extern unsigned char DAT_0049f94f; /* 0x49f94f */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern unsigned int DAT_0049fa9c; /* 0x49fa9c */
extern unsigned int DAT_0049faa0; /* 0x49faa0 */
extern unsigned int DAT_0049faa4; /* 0x49faa4 */
extern unsigned int DAT_0049faa8; /* 0x49faa8 */
extern short DAT_0049faac; /* 0x49faac */
extern unsigned short DAT_0049faae; /* 0x49faae */
extern short DAT_0049fab0; /* 0x49fab0 */
extern signed char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fb34; /* 0x49fb34 */
extern signed char DAT_0049fce8; /* 0x49fce8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002562e4. */
/* Supplied declaration required: partyApplyNonlethalAilmentDamage. */
extern int inputIsQuestCancelPressed(void);
extern int unitGroupHasFlag(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025bc80. */
/* Supplied declaration required: FUN_0027f48c. */
/* Supplied declaration required: FUN_0027f848. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: lmapSetSceneId. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: mapSelectContainingRegions. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_002879dc. */
/* Supplied declaration required: mathDistanceBetweenPoints. */
/* Supplied declaration required: FUN_00291e40. */
extern int randBetween(unsigned int, unsigned int);
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_002c8ce4(void)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int unaff_r4;
  int unaff_r5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int aiStack_2e8 [40];
  int aiStack_248 [40];
  int aiStack_1a8 [40];
  int aiStack_108 [40];
  unsigned int temp_v15;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int temp_v16;
  unsigned int temp_v17 [13];
  
  __aeabi_memcpy4(aiStack_2e8,&DAT_00404504,0xa0);
  __aeabi_memcpy4(aiStack_248,&DAT_004045a4,0xa0);
  __aeabi_memcpy4(aiStack_1a8,&DAT_00404644,0xa0);
  __aeabi_memcpy4(aiStack_108,&DAT_004046e4,0xa0);
  temp_v2 = g_lmapScene;
  temp_v14 = 0.33333334f;
  temp_v4 = *(int *)(g_lmapScene + 4);
  temp_v9 = *(float *)(g_lmapScene + 0x28);
  temp_v8 = *(unsigned int *)(g_lmapScene + 0x2c);
  temp_v7 = *(unsigned int *)(g_lmapScene + 0x30);
  if (temp_v4 != 0) {
    temp_v12 = 0.0f;
    temp_v13 = 20.0f;
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        if (((g_gameState != 0x24) && (temp_v2 = unitGroupHasFlag(2,5), temp_v2 != 0)) &&
           (*(float *)(g_lmapScene + 0x160) < temp_v12)) {
          partyApplyNonlethalAilmentDamage(2,5);
          *(unsigned int *)(g_lmapScene + 0x160) = 0x447a0000;
          FUN_002562e4(0xf,0x50);
          temp_v3 = FUN_00291e40(0x1000186);
          temp_v2 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x18c) = temp_v3;
          *(unsigned int *)(temp_v2 + 400) = 0x14;
        }
        if (temp_v12 > *(float *)(g_lmapScene + 0x15c)) {
          temp_v2 = g_gameState;
          if (g_gameState == 5) {
            temp_v2 = DAT_0049f920;
          }
          if (g_gameState == 5 && temp_v2 == 9) {
            temp_v3 = 0x44bb8000;
          }
          else {
            temp_v3 = 0x43fa0000;
          }
          *(unsigned int *)(g_lmapScene + 0x15c) = temp_v3;
          temp_v3 = 0x20;
          lmapSetSceneId(temp_v3);
        }
        else {
          FUN_0027f958(&temp_v16,temp_v17,0);
          if (DAT_0049fb34 != 0) {
            if (DAT_0049fb34 == 1) {
              if (*(int *)(g_lmapScene + 8) == 5) {
                FUN_0027fca0(0xffffffff);
                FUN_0025bc80();
                effectSpawnAheadOfScene(30.0f,20.0f);
              }
              temp_v2 = *(int *)(g_lmapScene + 8);
joined_r0x002c9850:
              if (temp_v2 == 6) {
                FUN_0025bc80();
                effectSpawnAheadOfScene(-130.0f,20.0f);
              }
              goto LAB_002c9910;
            }
            if (DAT_0049fb34 == 2) {
              if (*(int *)(g_lmapScene + 8) == 5) {
                FUN_0027fca0(0xffffffff);
                FUN_0025bc80();
                effectSpawnAheadOfScene(30.0f,20.0f);
              }
              temp_v2 = *(int *)(g_lmapScene + 8);
              goto joined_r0x002c9850;
            }
            if (DAT_0049fb34 == 3) {
              if (*(int *)(g_lmapScene + 8) == 5) {
                FUN_0027fca0(0xffffffff);
                FUN_0025bc80();
                effectSpawnAheadOfScene(-130.0f,20.0f);
              }
              temp_v2 = *(int *)(g_lmapScene + 8);
              goto joined_r0x002c980c;
            }
          }
          else {
            if (*(int *)(g_lmapScene + 8) == 5) {
              FUN_0027fca0(0xffffffff);
              FUN_0025bc80();
              effectSpawnAheadOfScene(-130.0f,20.0f);
            }
            temp_v2 = *(int *)(g_lmapScene + 8);
joined_r0x002c980c:
            if (temp_v2 == 6) {
              effectSpawnAheadOfScene(30.0f,20.0f);
              FUN_0025bc80();
            }
LAB_002c9910:
            if (DAT_0049fb34 != 0) {
              if (DAT_0049fb34 != 1) {
                if (DAT_0049fb34 != 2) {
                  if ((DAT_0049fb34 == 3) && (*(int *)(g_lmapScene + 8) >= 9)) {
                    temp_v4 = inputIsQuestCancelPressed();
                    temp_v2 = g_lmapScene;
joined_r0x002c99a8:
                    g_lmapScene = temp_v2;
                    if (temp_v4 != 0) {
                      *(unsigned int *)(temp_v2 + 4) = 0;
                      *(unsigned int *)(temp_v2 + 8) = 0;
                      goto LAB_002c9a64;
                    }
                  }
                }
                else if (*(int *)(g_lmapScene + 8) >= 9) {
                  temp_v4 = inputIsQuestCancelPressed();
                  temp_v2 = g_lmapScene;
                  goto joined_r0x002c99a8;
                }
              }
              else if (*(int *)(g_lmapScene + 8) >= 4) {
                temp_v4 = inputIsQuestCancelPressed();
                temp_v2 = g_lmapScene;
                goto joined_r0x002c99a8;
              }
            }
            else if (*(int *)(g_lmapScene + 8) >= 7) {
              temp_v4 = inputIsQuestCancelPressed();
              temp_v2 = g_lmapScene;
              goto joined_r0x002c99a8;
            }
          }
          temp_v2 = g_lmapScene;
          if (((temp_v16 >= 0xbf000001) || ((int)temp_v16 >= 0x3f000001)) ||
             ((temp_v17[0] >= 0xbf000001 ||
              (((int)temp_v17[0] >= 0x3f000001 || (*(int *)(g_lmapScene + 8) >= 0xb)))))) {
            *(float *)(g_lmapScene + 0x68) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x58) = 0x40a00000;
            if (*(int *)(temp_v2 + 8) >= 0xb) {
              *(unsigned int *)(temp_v2 + 0x188) = 1;
            }
            else if (DAT_0049fb34 < 2) {
              *(unsigned int *)(temp_v2 + 0x188) = 2;
            }
            else if (DAT_0049fb34 == 2 || DAT_0049fb34 == 3) {
              *(unsigned int *)(temp_v2 + 0x188) = 4;
            }
            temp_v3 = 1;
            lmapSetSceneId(temp_v3);
          }
        }
        goto LAB_002c9a54;
      }
    }
    else {
      temp_v11 = 0.017453292f;
      temp_v2 = *(int *)(g_lmapScene + 8) + 1;
      *(int *)(g_lmapScene + 8) = temp_v2;
      if (temp_v2 < 0x14) {
        if (DAT_0049fb34 != 0) {
          if (DAT_0049fb34 != 1) {
            if (DAT_0049fb34 != 2) {
              if (DAT_0049fb34 == 3) {
                unaff_r5 = aiStack_108[temp_v2 * 2];
                unaff_r4 = aiStack_108[temp_v2 * 2 + 1];
              }
            }
            else {
              unaff_r5 = aiStack_1a8[temp_v2 * 2];
              unaff_r4 = aiStack_1a8[temp_v2 * 2 + 1];
            }
          }
          else {
            unaff_r5 = aiStack_248[temp_v2 * 2];
            unaff_r4 = aiStack_248[temp_v2 * 2 + 1];
          }
        }
        else {
          unaff_r5 = aiStack_2e8[temp_v2 * 2];
          unaff_r4 = aiStack_2e8[temp_v2 * 2 + 1];
        }
        if (unaff_r5 >> 0x10 != 0) {
          effectSpawnAheadOfScene((f32)(s16)unaff_r4,(f32)(unaff_r4 >> 16));
        }
        temp_v10 = (float)VectorSignedToFloat((int)(short)unaff_r5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = *(float *)(g_lmapScene + 0x50) * temp_v11;
        FUN_0028250c();
        temp_v2 = g_lmapScene;
        *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v6 * temp_v10;
        temp_v11 = *(float *)(temp_v2 + 0x50) * temp_v11;
        FUN_00282390();
        *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v11 * temp_v10;
        FUN_0027f848();
        temp_v2 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x28) = temp_v15;
        *(unsigned int *)(temp_v2 + 0x2c) = uStack_64;
        *(unsigned int *)(temp_v2 + 0x30) = uStack_60;
        *(float *)(temp_v2 + 0x34) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
        if ((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) {
          temp_v0 = temp_v2 + 0x28;
          FUN_0027f48c(temp_v0,temp_v2 + 0x34);
          temp_v2 = g_lmapScene;
          temp_v4 = 0;
          if (temp_v0 != 0) {
            temp_v4 = g_lmapScene;
          }
          if (temp_v0 != 0) {
            *(float *)(temp_v4 + 0x68) = temp_v12;
          }
          else {
            temp_v11 = *(float *)(g_lmapScene + 0x68) + 2.0f;
            *(float *)(g_lmapScene + 0x68) = temp_v11;
            if ((int)temp_v11 < 0x41a00001) {
              temp_v13 = temp_v11;
            }
            *(float *)(temp_v2 + 0x68) = temp_v13;
          }
        }
        temp_v13 = temp_v9;
        if ((g_gameState != 0x24) && (temp_v2 = unitGroupHasFlag(2,5), temp_v13 = temp_v9, temp_v2 != 0)) {
          mathDistanceBetweenPoints();
          *(float *)(g_lmapScene + 0x160) = *(float *)(g_lmapScene + 0x160) - temp_v9;
        }
        temp_v1 = g_lmapScene + 0x28;
        FUN_002804ec();
        temp_v9 = temp_v13;
        if ((temp_v1 & 2) != 0) {
          mathDistanceBetweenPoints();
          *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v13;
          DAT_0049f94f = 4;
        }
        else {
          if (temp_v12 < *(float *)(g_lmapScene + 0x15c)) {
            mathDistanceBetweenPoints();
            *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v13;
          }
          if (temp_v12 < *(float *)(g_lmapScene + 0x15c)) {
            temp_v12 = *(float *)(g_lmapScene + 0x15c);
          }
          *(float *)(g_lmapScene + 0x15c) = temp_v12;
          DAT_0049f94f = 0xff;
        }
        temp_v2 = g_lmapScene;
        puVar7 = (unsigned int *)(g_lmapScene + 0x1c);
        puVar8 = (unsigned int *)(g_lmapScene + 0x40);
        *(float *)(g_lmapScene + 0x1c) =
             *(float *)(g_lmapScene + 0x1c) +
             (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * temp_v14;
        *(float *)(temp_v2 + 0x20) =
             *(float *)(temp_v2 + 0x20) +
             (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * temp_v14;
        temp_v12 = *(float *)(temp_v2 + 0x24) +
                 (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * temp_v14;
        *(float *)(temp_v2 + 0x24) = temp_v12;
        temp_v3 = *(unsigned int *)(temp_v2 + 0x20);
        *puVar8 = *puVar7;
        *(unsigned int *)(temp_v2 + 0x44) = temp_v3;
        *(float *)(temp_v2 + 0x48) = temp_v12;
        *(float *)(temp_v2 + 0x34) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
      }
      if (DAT_0049fb34 != 0) {
        if (DAT_0049fb34 != 1) {
          if (DAT_0049fb34 != 2) {
            if (DAT_0049fb34 == 3) {
              if (*(int *)(g_lmapScene + 8) == 2) {
                FUN_0028250c();
                FUN_00282390();
                temp_v2 = randBetween(0,2);
                FUN_00291e40(temp_v2 + 0x1000235);
              }
              if (*(int *)(g_lmapScene + 8) == 3) {
                FUN_0028250c();
                FUN_00282390();
                FUN_00291e40(0x10001f3);
                FUN_0027fca0(0xffffffff);
              }
              if ((*(int *)(g_lmapScene + 8) == 6) &&
                 (FUN_0025bc80(), *(int *)(g_lmapScene + 8) == 6)) {
                temp_v5 = 0x14;
                temp_v3 = 6;
                FUN_002879dc(temp_v3,temp_v5,0);
              }
            }
          }
          else {
            if (*(int *)(g_lmapScene + 8) == 2) {
              FUN_0028250c();
              FUN_00282390();
              temp_v2 = randBetween(0,2);
              FUN_00291e40(temp_v2 + 0x1000232);
            }
            if (*(int *)(g_lmapScene + 8) == 3) {
              FUN_0028250c();
              FUN_00282390();
              FUN_00291e40(0x10001f2);
              FUN_0027fca0(0xffffffff);
            }
            if (*(int *)(g_lmapScene + 8) == 4) {
              FUN_0025bc80();
            }
          }
        }
        else {
          if (*(int *)(g_lmapScene + 8) == 3) {
            FUN_0028250c();
            FUN_00282390();
            FUN_00291e40(0x10001f1);
            FUN_0028250c();
            FUN_00282390();
            temp_v2 = randBetween(0,2);
            FUN_00291e40(temp_v2 + 0x100022f);
            FUN_0027fca0(0xffffffff);
          }
          if (*(int *)(g_lmapScene + 8) == 6) {
            FUN_0025bc80();
          }
        }
      }
      else {
        if (*(int *)(g_lmapScene + 8) == 3) {
          FUN_0028250c();
          FUN_00282390();
          FUN_00291e40(0x10001f0);
          FUN_0028250c();
          FUN_00282390();
          temp_v2 = randBetween(0,2);
          FUN_00291e40(temp_v2 + 0x100022c);
          FUN_0027fca0(0xffffffff);
        }
        if ((*(int *)(g_lmapScene + 8) == 6) && (FUN_0025bc80(), *(int *)(g_lmapScene + 8) == 6))
        {
          temp_v5 = 8;
          temp_v3 = 4;
          FUN_002879dc(temp_v3,temp_v5,0);
        }
      }
      temp_v2 = g_lmapScene;
      if (*(int *)(g_lmapScene + 8) == 3) {
        *(unsigned int *)(g_lmapScene + 0x16c) = 0xffffffff;
        *(unsigned int *)(temp_v2 + 0x168) = 0;
        DAT_0049fa98 = '\x01';
        DAT_0049fa9c = *(unsigned int *)(temp_v2 + 0x1c);
        DAT_0049faa0 = *(unsigned int *)(temp_v2 + 0x20);
        DAT_0049faa4 = *(unsigned int *)(temp_v2 + 0x24);
        DAT_0049faa8 = *(unsigned int *)(temp_v2 + 0x4c);
        DAT_0049faac = 0;
        DAT_0049faae = 0;
      }
      if (DAT_0049fa98 != '\0') {
        DAT_0049fa9c = *(unsigned int *)(temp_v2 + 0x1c);
        DAT_0049faa0 = *(unsigned int *)(temp_v2 + 0x20);
        DAT_0049faa4 = *(unsigned int *)(temp_v2 + 0x24);
        DAT_0049faa8 = *(unsigned int *)(temp_v2 + 0x4c);
        DAT_0049faac = DAT_0049faac + 1;
        temp_v4 = (int)DAT_0049faac;
        DAT_0049faae = 0;
        if (DAT_0049fb34 != 0) {
          if (DAT_0049fb34 != 1) {
            if (DAT_0049fb34 != 2) {
              if ((DAT_0049fb34 == 3) && (4 >= temp_v4 - 5U)) {
                DAT_0049faae = 1;
              }
            }
            else if (temp_v4 - 6U < 6) {
              DAT_0049faae = 1;
            }
          }
          else {
            temp_v1 = temp_v4 - 3;
            if (temp_v1 < 4) {
              DAT_0049faae = 1;
            }
          }
        }
        else {
          temp_v1 = temp_v4 - 5;
          if (temp_v1 < 4) {
            DAT_0049faae = 1;
          }
        }
      }
      if ((DAT_0049fabc == '\0') && (0 < DAT_0049fab0)) {
        DAT_0049fabc = '\x01';
        DAT_0049fac0 = 0;
      }
      else if ((DAT_0049fab0 == 0) && (*(int *)(temp_v2 + 8) >= 0xf)) {
        DAT_0049fa98 = '\0';
        *(unsigned int *)(temp_v2 + 0x168) = 0;
        *(int *)(temp_v2 + 4) = *(int *)(temp_v2 + 4) + 1;
        *(unsigned int *)(temp_v2 + 8) = 0;
      }
LAB_002c9a54:
      if (*(int *)(g_lmapScene + 4) == 1) goto LAB_002c9a70;
    }
LAB_002c9a64:
    FUN_002804ec(g_lmapScene + 0x28);
  }
  else {
    *(unsigned char *)(g_lmapScene + 0x6c) = 0;
    if (DAT_0049fb34 == 0) {
      *(unsigned int *)(temp_v2 + 0x54) = 4;
    }
    else if (DAT_0049fb34 == 1) {
      temp_v3 = 0x16;
      *(unsigned int *)(temp_v2 + 0x54) = temp_v3;
    }
    else if (DAT_0049fb34 == 2) {
      temp_v3 = 0x17;
      *(unsigned int *)(temp_v2 + 0x54) = temp_v3;
    }
    else if (DAT_0049fb34 == 3) {
      *(unsigned int *)(temp_v2 + 0x54) = 0x18;
    }
    *(unsigned int *)(temp_v2 + 0x58) = 0x40400000;
    *(unsigned char *)(temp_v2 + 0x5c) = 1;
    *(unsigned int *)(temp_v2 + 4) = 1;
    *(unsigned int *)(temp_v2 + 8) = 0;
  }
LAB_002c9a70:
  mapSelectContainingRegions();
  mapEaseSceneHeading();
  temp_v2 = g_lmapScene;
  puVar7 = (unsigned int *)(g_lmapScene + 0x1c);
  puVar8 = (unsigned int *)(g_lmapScene + 0x40);
  *(float *)(g_lmapScene + 0x1c) =
       *(float *)(g_lmapScene + 0x1c) +
       (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * temp_v14;
  *(float *)(temp_v2 + 0x20) =
       *(float *)(temp_v2 + 0x20) + (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * 0.16666667f
  ;
  temp_v14 = *(float *)(temp_v2 + 0x24) + (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * temp_v14
  ;
  *(float *)(temp_v2 + 0x24) = temp_v14;
  temp_v3 = *(unsigned int *)(temp_v2 + 0x20);
  *puVar8 = *puVar7;
  *(unsigned int *)(temp_v2 + 0x44) = temp_v3;
  *(float *)(temp_v2 + 0x48) = temp_v14;
  *(float *)(temp_v2 + 0x34) = temp_v9;
  *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
  *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
  return;
}

} /* extern "C" */
