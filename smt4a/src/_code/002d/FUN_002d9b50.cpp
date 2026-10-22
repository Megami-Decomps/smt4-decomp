/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d9b50` (_code @ 0x2d9b50, 0x12e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681c4(...);
int FUN_002950a8(...);
int FUN_002e364c(...);
int lmapSceneRestoreEntryPosition(...);
int FUN_00327ee8(...);
int naviMainApplyRequestValue(...);
int FUN_003d54f8(...);
int linkedTargetSetFloat(...);

int FUN_0015f858(...);
int slotSetRequest(...);
int popupStateClose(...);
int mapTrapGetUnk3C(...);
int FUN_002de104(...);
int FUN_00303460(...);
int FUN_00303bd4(...);
int mapSetSceneState(...);
int naviMainSetFlagsAndActivate(...);
int FUN_003180c4(...);
int mapTrapEnable(...);
int FUN_00365c94(...);
int naviMainSetRequestTriple(...);
int FUN_003adc58(...);
int FUN_003b5714(...);
int FUN_003d2158(...);
int playerSetClampedValue(...);
int flagValueSub(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

int soundVolumeSettingSet(...);
int FUN_0014af98(...);
int FUN_001628c0(...);
int sysPlaySe(...);
int FUN_001bbf0c(...);
int FUN_001bc124(...);
void FUN_00297f00(int value, int count);
int mapTrapArm(...);
int FUN_002c2d44(...);
int FUN_002d1f40(...);
int FUN_003024a0(...);
int mapMainStartEntry(...);
int mapTrapGetUnk38(...);
int mapSpawnRandomEventKindEffect(...);
int FUN_00324e38(...);
int sysPlayVoice(...);
int FUN_003d4ed8(...);
int FUN_003e54b8(...);
int gameFlagSetValue(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_002d9eec; /* 0x2d9eec */
extern unsigned char LAB_002d9efc; /* 0x2d9efc */
extern unsigned char LAB_002da77c; /* 0x2da77c */
extern unsigned char LAB_002dab1c; /* 0x2dab1c */
extern unsigned char LAB_002dae38; /* 0x2dae38 */
extern unsigned char LAB_002dae40; /* 0x2dae40 */
extern unsigned char LAB_002dae54; /* 0x2dae54 */
extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f17ac; /* 0x5f17ac */
extern int DAT_005f1848; /* 0x5f1848 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern float DAT_005f19d0; /* 0x5f19d0 */
extern unsigned char DAT_005f1adc; /* 0x5f1adc */
extern int DAT_005f1c94; /* 0x5f1c94 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: soundVolumeSettingSet. */
extern unsigned int soundVolumeSettingGet(void);
/* Supplied declaration required: FUN_0014af98. */
extern unsigned int FUN_00152f44(void);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001628c0. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001681c4. */
/* Supplied declaration required: sysPlaySe. */
extern int FUN_00184964(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: popupStateClose. */
/* Supplied declaration required: FUN_002950a8. */
/* Supplied declaration required: FUN_00297f00. */
/* Supplied declaration required: mapTrapGetUnk3C. */
/* Supplied declaration required: mapTrapArm. */
/* Supplied declaration required: FUN_002c2d44. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: FUN_002de104. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_003024a0. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00303bd4. */
extern int mapJobIsDone(void);
/* Supplied declaration required: mapMainStartEntry. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: mapTrapGetUnk38. */
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: lmapSceneRestoreEntryPosition. */
/* Supplied declaration required: mapSpawnRandomEventKindEffect. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: mapTrapEnable. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: naviMainApplyRequestValue. */
/* Supplied declaration required: FUN_00365c94. */
extern int dataTableGetRecord23(void);
/* Supplied declaration required: naviMainSetRequestTriple. */
/* Supplied declaration required: FUN_003adc58. */
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_003d54f8. */
extern unsigned int FUN_003e0034(void);
/* Supplied declaration required: playerSetClampedValue. */
extern int linkHolderCallFirst(unsigned int);
/* Supplied declaration required: FUN_003e54b8. */
extern int linkHolderCheckFirst(unsigned int);
/* Supplied declaration required: linkedTargetSetFloat. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: flagValueSub. */
extern int inputIsQuestCancelPressed(void);


/* WARNING: Removing unreachable block (ram,0x002da738) */

void FUN_002d9b50(void)

{
/* irregular: 16 unstructured edge(s); 7 goto(s); irregular input(s): in_fpscr; 48 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  short temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = soundVolumeSettingGet();
  temp_v6 = g_lmapScene;
  temp_v10 = 0.0f;
  temp_v11 = 0x40400000;
  temp_v4 = *(int *)(g_lmapScene + 4);
  if (temp_v4 != 9) {
    if (8 >= temp_v4) {
      switch(temp_v4) {
      case 0:
        DAT_005f1adc = 1;
        DAT_005f161c = 1;
        DAT_005f1859 = 0;
        DAT_005f185a = 0;
        temp_v6 = mapTrapGetUnk38();
        mapTrapArm(*(short *)(temp_v6 + 0xe) != 0);
        temp_v6 = g_lmapScene;
        puVar6 = (unsigned int *)(g_lmapScene + 0x1c);
        *(unsigned int *)(g_lmapScene + 0x54) = 9;
        *(float *)(temp_v6 + 0x58) = temp_v10;
        *(unsigned int *)(temp_v6 + 0x50) = *(unsigned int *)(temp_v6 + 0x4c);
        *(unsigned int *)(temp_v6 + 0x28) = *puVar6;
        *(unsigned int *)(temp_v6 + 0x2c) = *(unsigned int *)(temp_v6 + 0x20);
        *(unsigned int *)(temp_v6 + 0x30) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned char *)(temp_v6 + 0x6c) = 0;
        FUN_001bc124();
        FUN_001bbf0c();
        temp_v11 = FUN_00152f44();
        temp_v1 = FUN_0014af98();
        FUN_001628c0(&LAB_002d9eec,temp_v1,temp_v11,1);
        temp_v6 = g_lmapScene;
        *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
        *(unsigned int *)(temp_v6 + 8) = 0;
        *(unsigned int *)(temp_v6 + 0x270) = 0;
        temp_v6 = gameFlagIsSet(0x68);
        if (temp_v6 != 0) {
          FUN_002c2d44(
                      "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                      );
          sysPlaySe(0xe9);
        }
        *(unsigned char *)(g_lmapScene + 0x291) = 0;
        FUN_002d1f40(8,0x78,0);
        temp_v11 = sysPlayVoice(0x10000d2);
        *(unsigned int *)(g_lmapScene + 0x264) = temp_v11;
        break;
      case 1:
        temp_v6 = *(int *)(g_lmapScene + 8) + 1;
        *(int *)(g_lmapScene + 8) = temp_v6;
        if (temp_v6 == 6) {
          FUN_00324e38(0);
        }
        temp_v6 = g_lmapScene;
        if (*(int *)(g_lmapScene + 8) >= 0x15) {
          temp_v4 = *(int *)(g_lmapScene + 4);
          *(unsigned int *)(g_lmapScene + 0x54) = 10;
          *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
          *(unsigned int *)(temp_v6 + 8) = 0;
          *(unsigned int *)(temp_v6 + 0xc) = 0;
          *(int *)(temp_v6 + 4) = temp_v4 + 1;
          *(unsigned int *)(temp_v6 + 0x26c) = 0;
          FUN_003024a0(1);
        }
        if (g_gameState == 0x18) {
          temp_v6 = *(int *)(temp_v0 + 0x1520);
          if (temp_v6 != 0) {
            gameFlagSetValue(temp_v6,1);
            *(int *)(temp_v0 + 0x1520) = 0;
          }
        }
        break;
      case 2:
        temp_v6 = gameFlagIsSet(0x68);
        if (temp_v6 == 0) {
          mapMainStartEntry(&LAB_002d9efc);
          *(unsigned int *)(g_lmapScene + 4) = 99;
        }
        temp_v0 = mapTrapGetUnk38();
        temp_v6 = g_lmapScene;
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        if (*(int *)(temp_v6 + 0x54) != 10) {
          *(int *)(temp_v6 + 0x270) = *(int *)(temp_v6 + 0x270) + 1;
        }
        temp_v4 = inputIsQuestCancelPressed();
        temp_v6 = g_lmapScene;
        if ((temp_v4 != 0) &&
           ((*(int *)(g_lmapScene + 0x270) >= 0x13 || (*(int *)(g_lmapScene + 0x54) == 10)))) {
          *(unsigned char *)(g_lmapScene + 0x291) = 1;
          if (DAT_005f1848 == 0) {
            temp_v5 = 4;
            *(unsigned int *)(temp_v6 + 0x54) = temp_v5;
            *(unsigned char *)(temp_v6 + 0x5c) = 1;
            *(unsigned int *)(temp_v6 + 0x270) = 0;
          }
          else {
            if (DAT_005f1848 == 1) {
              *(unsigned int *)(temp_v6 + 0x54) = 0x16;
            }
            else if (DAT_005f1848 == 2) {
              *(unsigned int *)(temp_v6 + 0x54) = 0x17;
            }
            else if (DAT_005f1848 == 3) {
              temp_v5 = 0x18;
              *(unsigned int *)(temp_v6 + 0x54) = temp_v5;
            }
            *(unsigned char *)(temp_v6 + 0x5c) = 1;
            *(unsigned int *)(temp_v6 + 0x270) = 0;
          }
        }
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 == 1) {
            if (*(int *)(g_lmapScene + 0x270) == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029c);
              if (*(short *)(g_lmapScene + 0x19c) >= 1) {
                *(short *)(g_lmapScene + 0x19c) = *(short *)(g_lmapScene + 0x19c) - 1;
              }
              else {
                *(unsigned short *)(g_lmapScene + 0x19c) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                temp_v6 = FUN_00184964(0,1);
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(temp_v6 + 0x10002de);
                soundVolumeSettingSet(temp_v1);
              }
              FUN_00324e38(0xffffffff);
            }
            if (*(int *)(g_lmapScene + 0x270) == 6) {
              FUN_00297f00(8,10);
              FUN_002d1f40(8,0x28,0);
              mapSpawnRandomEventKindEffect();
            }
            temp_v6 = *(int *)(g_lmapScene + 0x270);
            goto joined_r0x002da288;
          }
          if (DAT_005f1848 != 2) {
            if (DAT_005f1848 != 3) goto LAB_002da3cc;
            if (*(int *)(g_lmapScene + 0x270) == 2) {
              temp_v7 = *(short *)(g_lmapScene + 0x19c);
              if (0 < temp_v7) goto LAB_002da2b0;
              *(unsigned short *)(g_lmapScene + 0x19c) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v6 = FUN_00184964(0,1);
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v6 + 0x10002e2);
              soundVolumeSettingSet(temp_v1);
            }
            if (*(int *)(g_lmapScene + 0x270) == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029e);
              FUN_00324e38(0xffffffff);
            }
            if ((*(int *)(g_lmapScene + 0x270) == 6) &&
               (mapSpawnRandomEventKindEffect(), *(int *)(g_lmapScene + 0x270) == 6)) {
              FUN_00297f00(8,10);
              FUN_002d1f40(8,0x28,0);
            }
            temp_v6 = *(int *)(g_lmapScene + 0x270);
            goto joined_r0x002da288;
          }
          if (*(int *)(g_lmapScene + 0x270) == 2) {
            temp_v7 = *(short *)(g_lmapScene + 0x19c);
            if (temp_v7 < 1) {
              *(unsigned short *)(g_lmapScene + 0x19c) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v6 = FUN_00184964(0,1);
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v6 + 0x10002e0);
              soundVolumeSettingSet(temp_v1);
              goto LAB_002da1e4;
            }
LAB_002da2b0:
            *(short *)(g_lmapScene + 0x19c) = temp_v7 - 1;
          }
          else {
LAB_002da1e4:
            if (*(int *)(g_lmapScene + 0x270) == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029d);
              FUN_00324e38(0xffffffff);
            }
            if (*(int *)(g_lmapScene + 0x270) == 4) {
              FUN_00297f00(8,10);
              FUN_002d1f40(8,0x28,0);
              mapSpawnRandomEventKindEffect();
            }
            temp_v6 = *(int *)(g_lmapScene + 0x270);
joined_r0x002da288:
            if (temp_v6 != 0xe) {
LAB_002da3cc:
              temp_v6 = g_lmapScene;
              if (*(int *)(g_lmapScene + 0x270) == 1) {
                *(unsigned int *)(g_lmapScene + 0x168) = 0xffffffff;
                *(unsigned int *)(temp_v6 + 0x164) = 0;
                FUN_003e54b8(*(unsigned int *)(temp_v6 + 0x1a8));
                DAT_005f17ac = 1;
              }
              temp_v6 = g_lmapScene;
              if (*(int *)(g_lmapScene + 0x270) >= 0x14) {
                DAT_005f17ac = 0;
                *(unsigned int *)(g_lmapScene + 0x54) = 10;
                *(unsigned int *)(temp_v6 + 0x164) = 0;
              }
            }
            else {
              *(int *)(g_lmapScene + 0x26c) = DAT_005f1c94 + *(int *)(g_lmapScene + 0x26c) + 3;
            }
          }
        }
        else {
          if (*(int *)(g_lmapScene + 0x270) == 3) {
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_003d4ed8(0x100029b);
            if (*(short *)(g_lmapScene + 0x19c) >= 1) {
              *(short *)(g_lmapScene + 0x19c) = *(short *)(g_lmapScene + 0x19c) - 1;
            }
            else {
              *(unsigned short *)(g_lmapScene + 0x19c) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v6 = FUN_00184964(0,1);
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v6 + 0x10002dc);
              soundVolumeSettingSet(temp_v1);
            }
            FUN_00324e38(0xffffffff);
          }
          if ((*(int *)(g_lmapScene + 0x270) == 6) &&
             (mapSpawnRandomEventKindEffect(), *(int *)(g_lmapScene + 0x270) == 6)) {
            FUN_00297f00(8,10);
            FUN_002d1f40(8,0x28,0);
          }
          if (*(int *)(g_lmapScene + 0x270) != 0xe) goto LAB_002da3cc;
          *(int *)(g_lmapScene + 0x26c) = DAT_005f1c94 + *(int *)(g_lmapScene + 0x26c) + 3;
        }
        if (*(int *)(g_lmapScene + 8) >= (int)(unsigned int)*(unsigned short *)(temp_v0 + 2)) {
          FUN_002d1f40(10,0x78,0);
          if ((int)(unsigned int)*(unsigned short *)(temp_v0 + 4) <= *(int *)(g_lmapScene + 0x26c)) {
            popupStateClose();
            FUN_003d2158(*(unsigned int *)(g_lmapScene + 0x264),0);
            FUN_002de104();
            FUN_00324e38(0);
            temp_v6 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 0x54) = 0;
            *(unsigned int *)(temp_v6 + 0x58) = 0x40a00000;
            *(unsigned int *)(temp_v6 + 4) = 0x15;
            *(unsigned int *)(temp_v6 + 8) = 0;
            FUN_003024a0(0);
            DAT_005f17ac = 0;
          }
          else {
            popupStateClose();
            FUN_003d2158(*(unsigned int *)(g_lmapScene + 0x264),0);
            mapTrapEnable();
            FUN_00324e38(0);
            temp_v6 = g_lmapScene;
            *(unsigned int *)(g_lmapScene + 0x54) = 3;
            *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
            DAT_005f17ac = 0;
            FUN_003024a0(0);
            temp_v7 = *(short *)(temp_v0 + 10);
            if (temp_v7 == 0) {
              *(unsigned int *)(g_lmapScene + 4) = 0x16;
            }
            else if (temp_v7 == 1) {
              *(unsigned int *)(g_lmapScene + 4) = 0x17;
            }
            else {
              if (temp_v7 == 2) {
                temp_v11 = 0x18;
                *(unsigned int *)(g_lmapScene + 4) = temp_v11;
                *(unsigned int *)(g_lmapScene + 8) = 0;
                break;
              }
              if (temp_v7 == 3) {
                temp_v11 = 0x19;
                *(unsigned int *)(g_lmapScene + 4) = temp_v11;
              }
            }
            *(unsigned int *)(g_lmapScene + 8) = 0;
          }
        }
        break;
      case 3:
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        DAT_005f17ac = 0;
        if (*(int *)(temp_v6 + 8) == 1) {
          *(unsigned int *)(temp_v6 + 0x54) = 0;
          *(unsigned int *)(temp_v6 + 0x58) = 0x40400000;
          temp_v11 = FUN_00152f44();
          temp_v1 = FUN_0014af98();
          FUN_001628c0(&LAB_002da77c,temp_v1,temp_v11,1);
        }
        if (*(int *)(g_lmapScene + 8) >= 6) {
          mapTrapGetUnk3C();
          FUN_003adc58();
          FUN_00303460(0);
          mapSetSceneState(1);
          DAT_005f161c = 0;
          DAT_005f1614 = 0;
          DAT_005f1859 = 1;
          DAT_005f185a = 1;
        }
        break;
      case 4:
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        DAT_005f17ac = 0;
        if (*(int *)(temp_v6 + 8) >= 11) {
          temp_v0 = mapTrapGetUnk38();
          temp_v6 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0;
          *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
          *(unsigned int *)(temp_v6 + 4) = 10;
          *(unsigned int *)(temp_v6 + 8) = 0;
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 8);
          FUN_00303bd4();
          if (temp_v3 != 0) {
            temp_v2 = temp_v3;
            FUN_0015f858();
            FUN_003180c4(0,temp_v2);
            flagValueSub(temp_v3,1);
            mapMainStartEntry(&LAB_002dab1c);
          }
          else {
            mapSetSceneState(1);
            DAT_005f161c = 0;
            DAT_005f1859 = 1;
            DAT_005f185a = 1;
          }
        }
        break;
      case 5:
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        DAT_005f17ac = 0;
        if (*(int *)(temp_v6 + 8) >= 11) {
          temp_v0 = mapTrapGetUnk38();
          temp_v6 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0;
          *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
          *(unsigned int *)(temp_v6 + 4) = 10;
          *(unsigned int *)(temp_v6 + 8) = 0;
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 8);
          FUN_00303bd4();
          temp_v11 = FUN_003e0034();
          temp_v8 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned short *)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          playerSetClampedValue((int)(short)(int)(temp_v8 - temp_v9 * temp_v10 * 0.01f));
          if (temp_v3 == 0) {
            temp_v11 = 0x2dab34;
          }
          else {
            temp_v2 = temp_v3;
            FUN_0015f858(temp_v3,0);
            FUN_003180c4(0,temp_v2);
            flagValueSub(temp_v3,1);
            temp_v11 = 0x2dab4c;
          }
          mapMainStartEntry(temp_v11);
        }
        break;
      case 6:
        *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
        DAT_005f17ac = 0;
        if (0 < *(int *)(temp_v6 + 8)) {
          DAT_005f1614 = 1;
          mapTrapGetUnk38();
          temp_v6 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0;
          *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
          *(unsigned int *)(temp_v6 + 4) = 7;
          *(unsigned int *)(temp_v6 + 8) = 0;
          slotSetRequest(0,10,0xff);
          slotSetRequest(1,10,0xff);
          sysPlayVoice(0x10000c4);
        }
        break;
      case 7:
        temp_v6 = FUN_002e07f4();
        if (temp_v6 != 0) {
          temp_v6 = mapTrapGetUnk38();
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + 0x12);
          if ((g_gameState != temp_v3) || (DAT_005f1600 != *(unsigned short *)(temp_v6 + 0x14))) {
            FUN_00365c94(temp_v3,*(unsigned short *)(temp_v6 + 0x14),*(unsigned short *)(temp_v6 + 0x16));
            temp_v6 = mapTrapGetUnk38();
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + 8);
            FUN_00303bd4();
            DAT_005f19d0 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            FUN_003b5714(temp_v3,(unsigned int)*(unsigned short *)(temp_v6 + 0x14),*(unsigned short *)(temp_v6 + 0x16));
            if (temp_v3 != 0xffffffff) {
              temp_v4 = dataTableGetRecord23();
              temp_v0 = g_lmapScene;
              temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(g_lmapScene + 0x1c) = temp_v11;
              temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(temp_v0 + 0x20) = temp_v11;
              temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(temp_v0 + 0x24) = temp_v11;
              *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(temp_v0 + 0x1c);
              *(unsigned int *)(temp_v0 + 0x2c) = *(unsigned int *)(temp_v0 + 0x20);
              *(unsigned int *)(temp_v0 + 0x30) = temp_v11;
              temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              *(unsigned int *)(temp_v0 + 0x4c) = temp_v11;
              *(unsigned int *)(temp_v0 + 0x50) = temp_v11;
              temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              *(unsigned int *)(g_lmapView + 0x18) = temp_v11;
              naviMainSetFlagsAndActivate(*(unsigned short *)(temp_v6 + 0x18) & 0xff,*(unsigned short *)(temp_v6 + 0x1a) & 0xff,0,0,0,0
                          );
              DAT_005f1604 = (unsigned int)*(unsigned short *)(temp_v6 + 0x18);
              naviMainSetRequestTriple(*(unsigned short *)(temp_v6 + 0x12),*(unsigned short *)(temp_v6 + 0x14),
                           *(unsigned short *)(temp_v6 + 0x18));
              naviMainApplyRequestValue(DAT_005f1608);
              temp_v6 = mapTrapGetUnk38();
              temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + 8);
              FUN_00303bd4();
              DAT_005f19d0 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            if (*(int *)(g_lmapScene + 8) >= 0x1f) {
LAB_002dad8c:
              *(unsigned int *)(g_lmapScene + 8) = 0;
              FUN_003d54f8(0,10);
              FUN_003d54f8(1,10);
              temp_v6 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 4) = 8;
              *(unsigned int *)(temp_v6 + 0x54) = 0x23;
              FUN_00303460(0x16);
              *(float *)(g_lmapScene + 0x58) = temp_v10;
            }
          }
        }
        break;
      case 8:
        temp_v6 = *(int *)(g_lmapScene + 8) + 1;
        *(int *)(g_lmapScene + 8) = temp_v6;
        if (temp_v6 == 5) {
          sysPlayVoice(0x10000c5);
          temp_v11 = FUN_00152f44();
          temp_v1 = FUN_0014af98();
          FUN_001628c0(&LAB_002dae38,temp_v1,temp_v11,1);
        }
        if (*(int *)(g_lmapScene + 8) == 7) {
          FUN_002d1f40(4,0x32,0);
        }
        temp_v6 = linkHolderCallFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
        if ((temp_v6 == 0x23) &&
           (temp_v6 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8)), temp_v6 != 0)) {
          FUN_00303460(0x17);
          temp_v6 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0x24;
          *(float *)(temp_v6 + 0x58) = temp_v10;
          *(unsigned int *)(temp_v6 + 4) = 9;
          *(unsigned int *)(temp_v6 + 8) = 0;
        }
      }
    }
    else if (temp_v4 != 0x16) {
      if (temp_v4 < 0x16) {
        if (temp_v4 != 10) {
          if (temp_v4 != 0xb) {
            if (temp_v4 != 0xc) {
              if (temp_v4 == 0x15) {
                temp_v6 = *(int *)(g_lmapScene + 8) + 1;
                *(int *)(g_lmapScene + 8) = temp_v6;
                if (temp_v6 == 1) {
                  sysPlayVoice(0x10000c3);
                }
                if (*(int *)(g_lmapScene + 8) == 0x14) {
                  DAT_005f1adc = 0;
                  if (*(char *)(g_lmapScene + 0x291) != '\0') {
                    FUN_002950a8();
                  }
                  temp_v6 = g_lmapScene;
                  *(unsigned int *)(g_lmapScene + 0x54) = 0x11;
                  *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
                }
                temp_v6 = linkHolderCallFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
                if (temp_v6 == 0x11) {
                  temp_v6 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
                  if (temp_v6 != 0) {
                    linkedTargetSetFloat(*(unsigned int *)(g_lmapScene + 0x1a8));
                    temp_v6 = g_lmapScene;
                    *(unsigned int *)(g_lmapScene + 4) = 3;
                    *(unsigned int *)(temp_v6 + 8) = 0;
                  }
                }
              }
            }
            else {
              temp_v6 = FUN_002e07f4();
              if (temp_v6 != 0) {
                mapTrapGetUnk38();
                *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
                lmapSceneRestoreEntryPosition();
                if (*(int *)(g_lmapScene + 8) >= 0xb) goto LAB_002dad8c;
              }
            }
          }
          else {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            DAT_005f17ac = 0;
            if (0 < *(int *)(temp_v6 + 8)) {
              mapTrapGetUnk38();
              temp_v6 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 0x54) = 0;
              *(unsigned int *)(temp_v6 + 0x58) = temp_v11;
              *(unsigned int *)(temp_v6 + 4) = 0xc;
              *(unsigned int *)(temp_v6 + 8) = 0;
              slotSetRequest(0,10,0xff);
              slotSetRequest(1,10,0xff);
            }
          }
        }
        else {
          temp_v6 = mapJobIsDone();
          if (temp_v6 != 0) {
            DAT_005f1adc = 0;
            FUN_003adc58();
            FUN_00303460(0);
            mapSetSceneState(1);
            DAT_005f161c = 0;
            DAT_005f1614 = 0;
            DAT_005f1859 = 1;
            DAT_005f185a = 1;
          }
        }
      }
      else {
        if (temp_v4 != 0x17) {
          if (temp_v4 != 0x18) {
            if (temp_v4 != 0x19) {
              if (temp_v4 == 99) {
                temp_v6 = mapJobIsDone();
                if (temp_v6 != 0) {
                  sysPlaySe(0xe9);
                  FUN_002c2d44(
                              "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                              );
                  *(unsigned int *)(g_lmapScene + 4) = 2;
                  temp_v11 = sysPlayVoice(0x10000d2);
                  *(unsigned int *)(g_lmapScene + 0x264) = temp_v11;
                }
              }
              FUN_002e364c(g_lmapScene + 0x28);
              FUN_00327ee8();
              return;
            }
            temp_v0 = *(int *)(g_lmapScene + 8) + 1;
            *(int *)(g_lmapScene + 8) = temp_v0;
            if (temp_v0 != 1) {
              if (temp_v0 >= 2) {
                *(unsigned int *)(temp_v6 + 4) = 0xb;
                *(unsigned int *)(temp_v6 + 8) = 0;
              }
              FUN_002e364c(g_lmapScene + 0x28);
              FUN_00327ee8();
              return;
            }
          }
          else {
            temp_v0 = *(int *)(g_lmapScene + 8) + 1;
            *(int *)(g_lmapScene + 8) = temp_v0;
            if (temp_v0 != 1) {
              if (temp_v0 >= 2) {
                *(unsigned int *)(temp_v6 + 4) = 6;
                *(unsigned int *)(temp_v6 + 8) = 0;
              }
              FUN_002e364c(g_lmapScene + 0x28);
              FUN_00327ee8();
              return;
            }
          }
        }
        else {
          temp_v0 = *(int *)(g_lmapScene + 8) + 1;
          *(int *)(g_lmapScene + 8) = temp_v0;
          if (temp_v0 != 10) {
            if (temp_v0 >= 0x29) {
              *(unsigned int *)(temp_v6 + 4) = 5;
              *(unsigned int *)(temp_v6 + 8) = 0;
            }
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
        }
        *(unsigned int *)(temp_v6 + 0x54) = 0;
        *(unsigned int *)(temp_v6 + 0x58) = 0x40400000;
      }
    }
    else {
      temp_v0 = *(int *)(g_lmapScene + 8) + 1;
      *(int *)(g_lmapScene + 8) = temp_v0;
      if (temp_v0 == 10) {
        *(unsigned int *)(temp_v6 + 0x54) = 0;
        *(unsigned int *)(temp_v6 + 0x58) = 0x40400000;
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v0 >= 0x29) {
        *(unsigned int *)(temp_v6 + 4) = 4;
        *(unsigned int *)(temp_v6 + 8) = 0;
      }
    }
  }
  else {
    temp_v6 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
    if (temp_v6 != 0) {
      temp_v6 = FUN_002e07f4();
      if (temp_v6 != 0) {
        temp_v6 = (int)DAT_005f19d0;
        if (temp_v6 != 0) {
          temp_v0 = temp_v6;
          FUN_0015f858(temp_v6,0);
          FUN_003180c4(0,temp_v0);
          flagValueSub(temp_v6,1);
          mapMainStartEntry(&LAB_002dae40);
          FUN_001681c4();
        }
        else {
          mapMainStartEntry(&LAB_002dae54);
          FUN_001681c4();
        }
        *(unsigned int *)(g_lmapScene + 4) = 10;
        DAT_005f19d0 = temp_v10;
      }
    }
  }
  FUN_002e364c(g_lmapScene + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
