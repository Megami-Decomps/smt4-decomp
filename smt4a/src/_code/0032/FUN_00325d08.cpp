/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325d08` (_code @ 0x325d08, 0x1440 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);
float mathSnapHeading16(float angle);
float calcHeadingRoundedTo32Directions(float angle);
int mathAngleDeltaDegrees(void);
int FUN_00327ee8(void);
void lmapSceneStartMovement(unsigned char);
int FUN_0050d8e4(void);

int soundVolumeSettingSet(...);
int FUN_0014af98(void);
int FUN_001bbf0c(void);
int FUN_002469d0(void);
int FUN_0025ef68(...);
int distSpatial(void);
int FUN_002d1f40(...);
int FUN_002e364c(...);
int sysPlayVoice(...);
int FUN_003fd7c0(...);
int FUN_00408184(...);
int SBORROW4(...);

int soundVolumeSettingGet(void);
int FUN_001bc124(void);
int mapEaseSceneHeading(void);
int FUN_003135bc(...);
int mapSetSceneState(...);
int FUN_00317af8(...);
int mapSpawnRandomEventKindEffect(void);
int FUN_00324e38(...);
int FUN_00325998(int, int);
int FUN_003d4ed8(...);
int FUN_003e54b8(unsigned int);
int FUN_004a01c8(int, int);
int VectorSignedToFloat(...);
int __aeabi_memcpy4(int [40], unsigned char *, int);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp2F4; /* 0x2f4: local_2f4 */
    unsigned int sp2F8; /* 0x2f8: local_2f8 */
    unsigned int sp304; /* 0x304: local_304 */
} void_stack;

extern unsigned char DAT_00531c18; /* 0x531c18 */
extern unsigned char DAT_00531cb8; /* 0x531cb8 */
extern unsigned char DAT_00531d58; /* 0x531d58 */
extern unsigned char DAT_00531df8; /* 0x531df8 */
extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f161e; /* 0x5f161e */
extern unsigned char DAT_005f1633; /* 0x5f1633 */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern unsigned int DAT_005f17b0; /* 0x5f17b0 */
extern unsigned int DAT_005f17b4; /* 0x5f17b4 */
extern unsigned int DAT_005f17b8; /* 0x5f17b8 */
extern unsigned int DAT_005f17bc; /* 0x5f17bc */
extern short DAT_005f17c0; /* 0x5f17c0 */
extern unsigned short DAT_005f17c2; /* 0x5f17c2 */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern signed char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern int DAT_005f1848; /* 0x5f1848 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: soundVolumeSettingSet. */
/* Supplied declaration required: soundVolumeSettingGet. */
/* Supplied declaration required: FUN_0014af98. */
extern int gameFlagsGetBlock(void);
extern int FUN_00184964(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002469d0. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: mathAngleDeltaDegrees. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_002e364c. */
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_003135bc. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: mapSpawnRandomEventKindEffect. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00325998. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: FUN_003e54b8. */
extern int linkHolderCheckFirst(unsigned int);
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004a01c8. */
extern int partyAnyMemberHasFlagBit(unsigned int, unsigned int);
extern int inputIsQuestCancelPressed(void);
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_00325d08(void)

{
/* irregular: 26 goto(s); irregular input(s): in_fpscr; 33 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  short temp_v7;
  unsigned int *puVar11;
  int unaff_r6;
  int unaff_r7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  int temp_v18;
  unsigned int uStack_300;
  unsigned int uStack_2fc;
  unsigned int temp_v19;
  float temp_v20 [3];
  int aiStack_2e8 [40];
  int aiStack_248 [40];
  int aiStack_1a8 [40];
  int aiStack_108 [40];
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23 [15];
  
  temp_v21 = 0;
  temp_v0 = gameFlagsGetBlock();
  soundVolumeSettingGet();
  __aeabi_memcpy4(aiStack_2e8,&DAT_00531c18,0xa0);
  __aeabi_memcpy4(aiStack_248,&DAT_00531cb8,0xa0);
  __aeabi_memcpy4(aiStack_1a8,&DAT_00531d58,0xa0);
  __aeabi_memcpy4(aiStack_108,&DAT_00531df8,0xa0);
  temp_v11 = *(float *)(g_lmapScene + 0x28);
  temp_v10 = romwright_piece_4_4(*(unsigned int *)(g_lmapScene + 0x2c),*(unsigned int *)(g_lmapScene + 0x30));
  mapEaseSceneHeading();
  temp_v3 = g_lmapScene;
  temp_v17 = 0.33333334f;
  temp_v13 = 0.0f;
  temp_v5 = *(int *)(g_lmapScene + 4);
  if (temp_v5 != 0) {
    temp_v16 = 20.0f;
    if (temp_v5 != 1) {
      if (temp_v5 != 2) goto LAB_003270b0;
      *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
      if (((g_gameState != 0x24) && (temp_v3 = partyAnyMemberHasFlagBit(2,5), temp_v3 != 0)) &&
         (*(float *)(g_lmapScene + 0x160) < temp_v13)) {
        FUN_004a01c8(2,5);
        *(unsigned int *)(g_lmapScene + 0x160) = 0x447a0000;
        FUN_00325998(0xf,0x50);
        temp_v4 = FUN_003d4ed8(0x1000224);
        temp_v3 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x1a0) = temp_v4;
        *(unsigned int *)(temp_v3 + 0x1a4) = 0x14;
      }
      if ((temp_v13 <= *(float *)(g_lmapScene + 0x15c)) || (temp_v3 = gameDataFlagTestBit(0x85), temp_v3 != 0))
      {
        FUN_00317af8(&temp_v22,temp_v23,0);
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 == 1) {
            if (*(int *)(g_lmapScene + 8) == 5) {
              FUN_00324e38(0xffffffff);
              mapSpawnRandomEventKindEffect();
              FUN_003135bc();
            }
            temp_v3 = *(int *)(g_lmapScene + 8);
joined_r0x00326e7c:
            if (temp_v3 == 6) {
              mapSpawnRandomEventKindEffect();
              FUN_003135bc();
            }
            goto LAB_00326f3c;
          }
          if (DAT_005f1848 == 2) {
            if (*(int *)(g_lmapScene + 8) == 5) {
              FUN_00324e38(0xffffffff);
              mapSpawnRandomEventKindEffect();
              FUN_003135bc();
            }
            temp_v3 = *(int *)(g_lmapScene + 8);
            goto joined_r0x00326e7c;
          }
          if (DAT_005f1848 == 3) {
            if (*(int *)(g_lmapScene + 8) == 5) {
              FUN_00324e38(0xffffffff);
              mapSpawnRandomEventKindEffect();
              FUN_003135bc();
            }
            temp_v3 = *(int *)(g_lmapScene + 8);
            goto joined_r0x00326e38;
          }
        }
        else {
          if (*(int *)(g_lmapScene + 8) == 5) {
            FUN_00324e38(0xffffffff);
            mapSpawnRandomEventKindEffect();
            FUN_003135bc();
          }
          temp_v3 = *(int *)(g_lmapScene + 8);
joined_r0x00326e38:
          if (temp_v3 == 6) {
            FUN_003135bc();
            mapSpawnRandomEventKindEffect();
          }
LAB_00326f3c:
          if (DAT_005f1848 != 0) {
            if (DAT_005f1848 == 1) {
              temp_v3 = inputIsQuestCancelPressed();
              goto joined_r0x00326f98;
            }
            if (DAT_005f1848 == 2) {
              temp_v3 = inputIsQuestCancelPressed();
              if (temp_v3 == 0) goto LAB_00326fcc;
              goto LAB_00326f78;
            }
            if (DAT_005f1848 == 3) {
              temp_v3 = inputIsQuestCancelPressed();
              goto joined_r0x00326f98;
            }
          }
          else {
            temp_v3 = inputIsQuestCancelPressed();
joined_r0x00326f98:
            if (temp_v3 != 0) {
LAB_00326f78:
              temp_v3 = g_lmapScene;
              *(unsigned int *)(g_lmapScene + 4) = 0;
              *(unsigned int *)(temp_v3 + 8) = 0;
              goto LAB_003270b0;
            }
          }
        }
LAB_00326fcc:
        if ((((0xbf000000 < temp_v22) || ((int)temp_v22 >= 0x3f000001)) || (0xbf000000 < temp_v23[0])
            ) || (((int)temp_v23[0] >= 0x3f000001 ||
                  (temp_v3 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8)), temp_v3 != 0)))) {
          temp_v3 = g_lmapScene;
          *(float *)(g_lmapScene + 0x68) = temp_v13;
          *(float *)(temp_v3 + 0x58) = temp_v13;
          temp_v3 = linkHolderCheckFirst(*(unsigned int *)(temp_v3 + 0x1a8));
          if (temp_v3 != 0) {
            *(unsigned short *)(g_lmapScene + 0x19a) = 1;
          }
          else if ((DAT_005f1848 == 0) ||
                  ((DAT_005f1848 == 1 || DAT_005f1848 == 2) || DAT_005f1848 == 3)) {
            *(unsigned short *)(g_lmapScene + 0x19a) = 2;
          }
          temp_v4 = 1;
          mapSetSceneState(temp_v4);
        }
      }
      else {
        temp_v3 = g_gameState;
        if (g_gameState == 5) {
          temp_v3 = DAT_005f1600;
        }
        if (g_gameState == 5 && temp_v3 == 9) {
          temp_v4 = 0x44bb8000;
        }
        else {
          temp_v4 = 0x43fa0000;
        }
        *(unsigned int *)(g_lmapScene + 0x15c) = temp_v4;
        temp_v4 = 0x20;
        mapSetSceneState(temp_v4);
      }
      goto LAB_003270a0;
    }
    temp_v5 = *(int *)(g_lmapScene + 8) + 1;
    *(int *)(g_lmapScene + 8) = temp_v5;
    if (temp_v5 == 1) {
      DAT_005f17ac = '\x01';
      *(unsigned int *)(temp_v3 + 0x168) = 0xffffffff;
      *(unsigned int *)(temp_v3 + 0x164) = 0;
      FUN_003e54b8(*(unsigned int *)(temp_v3 + 0x1a8));
    }
    temp_v15 = 0.017453292f;
    temp_v3 = *(int *)(g_lmapScene + 8);
    if (temp_v3 < 0x14) {
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if (DAT_005f1848 == 3) {
              unaff_r7 = aiStack_108[temp_v3 * 2];
              unaff_r6 = aiStack_108[temp_v3 * 2 + 1];
            }
          }
          else {
            unaff_r7 = aiStack_1a8[temp_v3 * 2];
            unaff_r6 = aiStack_1a8[temp_v3 * 2 + 1];
          }
        }
        else {
          unaff_r7 = aiStack_248[temp_v3 * 2];
          unaff_r6 = aiStack_248[temp_v3 * 2 + 1];
        }
      }
      else {
        unaff_r7 = aiStack_2e8[temp_v3 * 2];
        unaff_r6 = aiStack_2e8[temp_v3 * 2 + 1];
      }
      if (unaff_r7 >> 0x10 != 0) {
        VectorSignedToFloat(unaff_r6 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(short)unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_003135bc(unaff_r6 >> 0x10,(int)(short)unaff_r6);
      }
      temp_v12 = (float)VectorSignedToFloat((int)(short)unaff_r7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = *(float *)(g_lmapScene + 0x50) * temp_v15;
      FUN_001bc124();
      temp_v3 = g_lmapScene;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v9 * temp_v12;
      temp_v15 = *(float *)(temp_v3 + 0x50) * temp_v15;
      FUN_001bbf0c();
      puVar9 = (unsigned int *)&temp_v18;
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v15 * temp_v12;
      FUN_002469d0();
      temp_v3 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x28) = temp_v18;
      *(unsigned int *)(temp_v3 + 0x2c) = uStack_300;
      *(unsigned int *)(temp_v3 + 0x30) = uStack_2fc;
      *(float *)(temp_v3 + 0x34) = temp_v11;
      *(int *)(temp_v3 + 0x38) = (int)((unsigned long long)temp_v10 >> 0x20);
      *(int *)(temp_v3 + 0x3c) = (int)temp_v10;
      if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && ((temp_v21 & ~(unsigned int)puVar9) == 0)) {
        temp_v1 = temp_v3 + 0x28;
        FUN_0025ef68(temp_v1,temp_v3 + 0x34,0);
        temp_v3 = g_lmapScene;
        temp_v5 = 0;
        if (temp_v1 != 0) {
          temp_v5 = g_lmapScene;
        }
        if (temp_v1 != 0) {
          *(float *)(temp_v5 + 0x68) = temp_v13;
        }
        else {
          temp_v15 = *(float *)(g_lmapScene + 0x68) + 2.0f;
          *(float *)(g_lmapScene + 0x68) = temp_v15;
          if ((int)temp_v15 < 0x41a00001) {
            temp_v16 = temp_v15;
          }
          *(float *)(temp_v3 + 0x68) = temp_v16;
        }
      }
      temp_v16 = temp_v11;
      if ((g_gameState != 0x24) && (temp_v3 = partyAnyMemberHasFlagBit(2,5), temp_v16 = temp_v11, temp_v3 != 0)) {
        distSpatial();
        *(float *)(g_lmapScene + 0x160) = *(float *)(g_lmapScene + 0x160) - temp_v11;
      }
      temp_v15 = temp_v16;
      distSpatial();
      temp_v11 = *(float *)(temp_v0 + 0xdf8) + temp_v16;
      *(float *)(temp_v0 + 0xdf8) = temp_v11;
      temp_v8 = *(int *)(temp_v0 + 0xdf4) != 0;
      if (temp_v8) {
        temp_v9 = 60000.0f;
        temp_v3 = (int)temp_v11 - 0x476a6000;
      }
      else {
        *(float *)(temp_v0 + 0xdf8) = temp_v13;
        temp_v3 = 0;
        temp_v9 = 0.0f;
      }
      if ((temp_v8 && temp_v11 != temp_v9) && temp_v3 < 0 == (temp_v8 && SBORROW4((int)temp_v11,(int)temp_v9))
         ) {
        *(float *)(temp_v0 + 0xdf8) = temp_v13;
        *(unsigned int *)(temp_v0 + 0xdf4) = 0;
        *(unsigned char *)(temp_v0 + 0xdfc) = 1;
        *(unsigned int *)(temp_v0 + 0x15b4) = 3;
      }
      temp_v11 = *(float *)(temp_v0 + 0x10a0) + temp_v16;
      *(float *)(temp_v0 + 0x10a0) = temp_v11;
      if (*(int *)(temp_v0 + 0x109c) == 0) {
        *(float *)(temp_v0 + 0x10a0) = temp_v13;
      }
      else if (*(float *)(temp_v0 + 0x15c0) < temp_v11) {
        sysPlayVoice(0x10000d1);
        temp_v3 = gameFlagIsSet(0x4c9);
        if ((temp_v3 == 0) || (temp_v3 = FUN_002e5db4(), temp_v3 != 0)) {
          *(unsigned int *)(g_lmapScene + 0x1d0) = 0xf;
        }
        else {
          *(unsigned int *)(g_lmapScene + 0x1d0) = 0xb;
        }
        temp_v3 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x228) = 6;
        *(unsigned int *)(temp_v3 + 0x240) = 0x40a00000;
        *(unsigned char *)(temp_v3 + 0x22c) = 1;
        *(unsigned int *)(temp_v3 + 0x1d4) = 0;
        *(float *)(temp_v0 + 0x10a0) = temp_v13;
        *(unsigned int *)(temp_v0 + 0x109c) = 0;
        *(unsigned int *)(temp_v0 + 0x10a4) = 1;
        temp_v3 = gameFlagIsSet(0x4c9);
        if ((temp_v3 == 0) || (temp_v3 = FUN_002e5db4(), temp_v3 != 0)) {
          *(unsigned int *)(g_lmapScene + 0x238) = 6;
        }
        *(unsigned char *)(g_lmapScene + 0x23c) = 1;
        temp_v3 = gameFlagIsSet(0x4c9);
        if ((temp_v3 == 0) || (temp_v3 = FUN_002e5db4(), temp_v3 != 0)) {
          FUN_003fd7c0(*(unsigned int *)(*(int *)(g_lmapScene + 0x18c) + 4),0,2);
        }
      }
      temp_v16 = *(float *)(temp_v0 + 0x14ec) + temp_v16;
      *(float *)(temp_v0 + 0x14ec) = temp_v16;
      temp_v8 = *(int *)(temp_v0 + 0x14e8) != 0;
      if (temp_v8) {
        temp_v11 = 30000.0f;
        temp_v3 = (int)temp_v16 - 0x46ea6000;
      }
      else {
        *(float *)(temp_v0 + 0x14ec) = temp_v13;
        temp_v3 = 0;
        temp_v11 = 0.0f;
      }
      if ((temp_v8 && temp_v16 != temp_v11) && temp_v3 < 0 == (temp_v8 && SBORROW4((int)temp_v16,(int)temp_v11))
         ) {
        *(float *)(temp_v0 + 0x14ec) = temp_v13;
        *(int *)(temp_v0 + 0x14e8) = 0;
        *(unsigned int *)(temp_v0 + 0x14f0) = 1;
      }
      temp_v2 = g_lmapScene + 0x28;
      FUN_002e364c();
      temp_v11 = temp_v15;
      if ((temp_v2 & 2) != 0) {
        distSpatial();
        *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v15;
        DAT_005f1633 = 4;
      }
      else {
        if (temp_v13 < *(float *)(g_lmapScene + 0x15c)) {
          distSpatial();
          *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v15;
        }
        if (temp_v13 < *(float *)(g_lmapScene + 0x15c)) {
          temp_v13 = *(float *)(g_lmapScene + 0x15c);
        }
        *(float *)(g_lmapScene + 0x15c) = temp_v13;
        DAT_005f1633 = 0xff;
      }
      if (((temp_v2 & 4) != 0) && (DAT_005f17d0 == '\0')) {
        *(unsigned char *)(temp_v0 + 0xe09) = 0;
        mapSetSceneState(0x1f);
        FUN_00408184(0x16,1);
      }
      temp_v3 = g_lmapScene;
      puVar9 = (unsigned int *)(g_lmapScene + 0x1c);
      puVar11 = (unsigned int *)(g_lmapScene + 0x40);
      *(float *)(g_lmapScene + 0x1c) =
           *(float *)(g_lmapScene + 0x1c) +
           (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * temp_v17;
      *(float *)(temp_v3 + 0x20) =
           *(float *)(temp_v3 + 0x20) + (*(float *)(temp_v3 + 0x2c) - *(float *)(temp_v3 + 0x20)) * temp_v17
      ;
      temp_v13 = *(float *)(temp_v3 + 0x24) +
               (*(float *)(temp_v3 + 0x30) - *(float *)(temp_v3 + 0x24)) * temp_v17;
      *(float *)(temp_v3 + 0x24) = temp_v13;
      temp_v4 = *(unsigned int *)(temp_v3 + 0x20);
      *puVar11 = *puVar9;
      *(unsigned int *)(temp_v3 + 0x44) = temp_v4;
      *(float *)(temp_v3 + 0x48) = temp_v13;
      *(float *)(temp_v3 + 0x34) = temp_v11;
      *(int *)(temp_v3 + 0x38) = (int)((unsigned long long)temp_v10 >> 0x20);
      *(int *)(temp_v3 + 0x3c) = (int)temp_v10;
    }
    temp_v4 = soundVolumeSettingGet();
    if (DAT_005f1848 != 0) {
      if (DAT_005f1848 != 1) {
        if (DAT_005f1848 != 2) {
          if (DAT_005f1848 == 3) {
            if (*(int *)(g_lmapScene + 8) == 2) {
              temp_v7 = *(short *)(g_lmapScene + 0x19c);
              if (0 < temp_v7) goto LAB_003267fc;
              *(unsigned short *)(g_lmapScene + 0x19c) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v3 = FUN_00184964(0,1);
              if (*(int *)(g_lmapScene + 0x1d0) != 10) {
                FUN_0014af98();
                soundVolumeSettingSet();
                sysPlayVoice(temp_v3 + 0x10002e2);
                soundVolumeSettingSet(temp_v4);
              }
            }
            if (*(int *)(g_lmapScene + 8) == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029e);
              FUN_00324e38(0xffffffff);
            }
            if ((*(int *)(g_lmapScene + 8) == 6) &&
               (mapSpawnRandomEventKindEffect(), *(int *)(g_lmapScene + 8) == 6)) {
              temp_v6 = 0x14;
              temp_v4 = 6;
              FUN_002d1f40(temp_v4,temp_v6,0);
            }
          }
          if (*(int *)(g_lmapScene + 8) >= 8) {
            *(unsigned char *)(g_lmapScene + 0x224) = 0;
          }
        }
        else {
          if (*(int *)(g_lmapScene + 8) != 2) {
LAB_00326870:
            if (*(int *)(g_lmapScene + 8) == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029d);
              FUN_00324e38(0xffffffff);
            }
            if (*(int *)(g_lmapScene + 8) != 4) goto LAB_00326a10;
            goto LAB_003268e4;
          }
          temp_v7 = *(short *)(g_lmapScene + 0x19c);
          if (temp_v7 < 1) {
            *(unsigned short *)(g_lmapScene + 0x19c) = 1;
            FUN_001bc124();
            FUN_001bbf0c();
            temp_v3 = FUN_00184964(0,1);
            if (*(int *)(g_lmapScene + 0x1d0) != 10) {
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v3 + 0x10002e0);
              soundVolumeSettingSet(temp_v4);
            }
            goto LAB_00326870;
          }
LAB_003267fc:
          *(short *)(g_lmapScene + 0x19c) = temp_v7 - 1;
        }
      }
      else {
        if (*(int *)(g_lmapScene + 8) == 3) {
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
            temp_v3 = FUN_00184964(0,1);
            if (*(int *)(g_lmapScene + 0x1d0) != 10) {
              FUN_0014af98();
              soundVolumeSettingSet();
              sysPlayVoice(temp_v3 + 0x10002de);
              soundVolumeSettingSet(temp_v4);
            }
          }
          FUN_00324e38(0xffffffff);
        }
        if (*(int *)(g_lmapScene + 8) == 6) {
LAB_003268e4:
          mapSpawnRandomEventKindEffect();
        }
        if (*(int *)(g_lmapScene + 8) >= 8) {
          *(unsigned char *)(g_lmapScene + 0x224) = 0;
        }
      }
    }
    else {
      if (*(int *)(g_lmapScene + 8) == 3) {
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
          temp_v3 = FUN_00184964(0,1);
          if (*(int *)(g_lmapScene + 0x1d0) != 10) {
            FUN_0014af98();
            soundVolumeSettingSet();
            sysPlayVoice(temp_v3 + 0x10002dc);
            soundVolumeSettingSet(temp_v4);
          }
        }
        FUN_00324e38(0xffffffff);
      }
      if ((*(int *)(g_lmapScene + 8) == 6) && (mapSpawnRandomEventKindEffect(), *(int *)(g_lmapScene + 8) == 6)) {
        temp_v6 = 8;
        temp_v4 = 4;
        FUN_002d1f40(temp_v4,temp_v6,0);
      }
LAB_00326a10:
      if (*(int *)(g_lmapScene + 8) >= 8) {
        *(unsigned char *)(g_lmapScene + 0x224) = 0;
      }
    }
    if (DAT_005f17ac != '\0') {
      DAT_005f17b0 = *(unsigned int *)(g_lmapScene + 0x1c);
      DAT_005f17b4 = *(unsigned int *)(g_lmapScene + 0x20);
      DAT_005f17b8 = *(unsigned int *)(g_lmapScene + 0x24);
      DAT_005f17bc = *(unsigned int *)(g_lmapScene + 0x4c);
      DAT_005f17c0 = DAT_005f17c0 + 1;
      temp_v3 = (int)DAT_005f17c0;
      DAT_005f17c2 = 0;
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if ((DAT_005f1848 == 3) && (temp_v3 - 1U < 0xb)) {
              DAT_005f17c2 = 1;
            }
          }
          else if (temp_v3 - 1U < 0xd) {
            DAT_005f17c2 = 1;
          }
        }
        else if (temp_v3 - 1U < 8) {
          DAT_005f17c2 = 1;
        }
      }
      else if (temp_v3 - 1U < 10) {
        DAT_005f17c2 = 1;
      }
    }
    if ((DAT_005f17d0 == '\0') && (0 < DAT_005f17c4)) {
      DAT_005f17d0 = '\x01';
      DAT_005f17d4 = 0;
      goto LAB_003270a0;
    }
    if (DAT_005f17c4 != 0) goto LAB_003270a0;
    temp_v0 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
    temp_v3 = g_lmapScene;
    if (temp_v0 != 0) {
      DAT_005f17ac = '\0';
      *(unsigned int *)(g_lmapScene + 0x164) = 0;
      piVar4 = (int *)(temp_v3 + 4);
      *piVar4 = *piVar4 + 1;
      *(unsigned int *)(temp_v3 + 8) = 0;
      goto LAB_003270a0;
    }
    FUN_00317af8(&temp_v22,temp_v23,0);
    temp_v3 = g_lmapScene;
    if (((((0xbf000000 < temp_v22) || ((int)temp_v22 >= 0x3f000001)) || (0xbf000000 < temp_v23[0]))
        || ((int)temp_v23[0] >= 0x3f000001)) && (*(int *)(g_lmapScene + 8) >= 0xe)) {
      DAT_005f17ac = '\0';
      *(unsigned int *)(g_lmapScene + 0x164) = 0;
      piVar4 = (int *)(temp_v3 + 4);
      *piVar4 = *piVar4 + 1;
      *(unsigned int *)(temp_v3 + 8) = 0;
    }
    if (DAT_005f1848 != 0) {
      if (DAT_005f1848 != 1) {
        if (DAT_005f1848 != 2) {
          if (((DAT_005f1848 == 3) && (*(int *)(g_lmapScene + 8) >= 9)) &&
             (temp_v0 = inputIsQuestCancelPressed(), temp_v3 = g_lmapScene, temp_v0 != 0)) {
            DAT_005f17ac = '\0';
            *(unsigned int *)(g_lmapScene + 0x164) = 0;
            *(unsigned int *)(temp_v3 + 4) = 0;
            *(unsigned int *)(temp_v3 + 8) = 0;
            if (*(int *)(temp_v3 + 0x1d0) != 1 && *(int *)(temp_v3 + 0x1d0) != 9) goto LAB_003270b0;
LAB_00326cc4:
            lmapSceneStartMovement(0);
          }
        }
        else if ((*(int *)(g_lmapScene + 8) >= 9) &&
                (temp_v0 = inputIsQuestCancelPressed(), temp_v3 = g_lmapScene, temp_v0 != 0)) {
          DAT_005f17ac = '\0';
          *(unsigned int *)(g_lmapScene + 0x164) = 0;
          *(unsigned int *)(temp_v3 + 4) = 0;
          *(unsigned int *)(temp_v3 + 8) = 0;
          if (*(int *)(temp_v3 + 0x1d0) == 1 || *(int *)(temp_v3 + 0x1d0) == 9) goto LAB_00326cc4;
          goto LAB_003270b0;
        }
      }
      else if ((*(int *)(g_lmapScene + 8) >= 8) &&
              (temp_v0 = inputIsQuestCancelPressed(), temp_v3 = g_lmapScene, temp_v0 != 0)) {
        DAT_005f17ac = '\0';
        *(unsigned int *)(g_lmapScene + 0x164) = 0;
        *(unsigned int *)(temp_v3 + 4) = 0;
        *(unsigned int *)(temp_v3 + 8) = 0;
        if (*(int *)(temp_v3 + 0x1d0) == 1 || *(int *)(temp_v3 + 0x1d0) == 9) goto LAB_00326cc4;
        goto LAB_003270b0;
      }
      goto LAB_003270a0;
    }
    if ((*(int *)(g_lmapScene + 8) < 8) ||
       (temp_v0 = inputIsQuestCancelPressed(), temp_v3 = g_lmapScene, temp_v0 == 0)) goto LAB_003270a0;
    DAT_005f17ac = '\0';
    *(unsigned int *)(g_lmapScene + 0x164) = 0;
    *(unsigned int *)(temp_v3 + 4) = 0;
    *(unsigned int *)(temp_v3 + 8) = 0;
    if (*(int *)(temp_v3 + 0x1d0) == 1 || *(int *)(temp_v3 + 0x1d0) == 9) goto LAB_00326cc4;
  }
  else {
    *(unsigned char *)(g_lmapScene + 0x6c) = 0;
    if (DAT_005f1848 == 0) {
      temp_v4 = 4;
      *(unsigned int *)(temp_v3 + 0x54) = temp_v4;
    }
    else if (DAT_005f1848 == 1) {
      temp_v4 = 0x16;
      *(unsigned int *)(temp_v3 + 0x54) = temp_v4;
    }
    else if (DAT_005f1848 == 2) {
      temp_v4 = 0x17;
      *(unsigned int *)(temp_v3 + 0x54) = temp_v4;
    }
    else if (DAT_005f1848 == 3) {
      temp_v4 = 0x18;
      *(unsigned int *)(temp_v3 + 0x54) = temp_v4;
    }
    *(unsigned int *)(temp_v3 + 0x58) = 0;
    *(unsigned char *)(temp_v3 + 0x5c) = 1;
    *(unsigned int *)(temp_v3 + 0x168) = 0xffffffff;
    *(unsigned int *)(temp_v3 + 0x164) = 0;
    DAT_005f17b0 = *(unsigned int *)(temp_v3 + 0x1c);
    DAT_005f17b4 = *(unsigned int *)(temp_v3 + 0x20);
    DAT_005f17b8 = *(unsigned int *)(temp_v3 + 0x24);
    DAT_005f17bc = *(unsigned int *)(temp_v3 + 0x4c);
    DAT_005f17c0 = 0;
    DAT_005f17c2 = 0;
    FUN_00317af8(temp_v20,&temp_v19,0);
    if ((((0xbeffffff < (unsigned int)temp_v20[0]) || ((int)temp_v20[0] >= 0x3f000000)) ||
        (0xbeffffff < temp_v19)) || ((int)temp_v19 >= 0x3f000000)) {
      FUN_0050d8e4();
      temp_v14 = CONCAT44(0x43b40000,temp_v13);
      temp_v16 = temp_v20[0] * 57.32484f - *(float *)(g_lmapView + 0x18);
      if (temp_v16 < temp_v13) {
        temp_v16 = temp_v16 + 360.0f;
      }
      if ((int)temp_v16 >= 0x43b40001) {
        temp_v16 = temp_v16 - 360.0f;
      }
      if (*(int *)(g_lmapView + 200) != 3) {
        temp_v16 = calcHeadingRoundedTo32Directions(temp_v16);
      }
      else {
        temp_v16 = mathSnapHeading16(temp_v16);
      }
      temp_v16 = -temp_v16;
      temp_v15 = *(float *)(g_lmapScene + 0x50);
      mathAngleDeltaDegrees();
      temp_v9 = (float)temp_v14;
      temp_v13 = temp_v15;
      if (temp_v15 < temp_v9) {
        temp_v13 = -temp_v15;
      }
      if ((int)temp_v13 < 0x41f00001) {
        temp_v12 = temp_v13 * 0.5f;
        if ((int)temp_v12 < 0x3f800000) {
          temp_v12 = 1.0f;
        }
        if (temp_v12 < temp_v13) {
          if (temp_v9 <= temp_v15) {
            temp_v16 = *(float *)(g_lmapScene + 0x50) + temp_v12;
          }
          else {
            temp_v16 = *(float *)(g_lmapScene + 0x50) - temp_v12;
          }
        }
      }
      *(float *)(g_lmapScene + 0x50) = temp_v16;
      temp_v3 = g_lmapScene;
      temp_v13 = *(float *)(g_lmapScene + 0x50);
      temp_v16 = (float)((unsigned long long)temp_v14 >> 0x20);
      if (temp_v13 < temp_v9) {
        temp_v13 = temp_v13 + temp_v16;
        *(float *)(g_lmapScene + 0x50) = temp_v13;
      }
      if ((int)temp_v13 >= 0x43b40001) {
        *(float *)(temp_v3 + 0x50) = temp_v13 - temp_v16;
      }
    }
    temp_v3 = g_lmapScene;
    *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
    *(unsigned int *)(temp_v3 + 8) = 0;
LAB_003270a0:
    if (*(int *)(g_lmapScene + 4) == 1) goto LAB_003270bc;
  }
LAB_003270b0:
  FUN_002e364c(g_lmapScene + 0x28);
LAB_003270bc:
  FUN_00327ee8();
  mapEaseSceneHeading();
  temp_v3 = g_lmapScene;
  puVar9 = (unsigned int *)(g_lmapScene + 0x1c);
  puVar11 = (unsigned int *)(g_lmapScene + 0x40);
  *(float *)(g_lmapScene + 0x1c) =
       *(float *)(g_lmapScene + 0x1c) +
       (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * temp_v17;
  *(float *)(temp_v3 + 0x20) =
       *(float *)(temp_v3 + 0x20) + (*(float *)(temp_v3 + 0x2c) - *(float *)(temp_v3 + 0x20)) * 0.16666667f
  ;
  temp_v13 = *(float *)(temp_v3 + 0x24) + (*(float *)(temp_v3 + 0x30) - *(float *)(temp_v3 + 0x24)) * temp_v17
  ;
  *(float *)(temp_v3 + 0x24) = temp_v13;
  temp_v4 = *(unsigned int *)(temp_v3 + 0x20);
  *puVar11 = *puVar9;
  *(unsigned int *)(temp_v3 + 0x44) = temp_v4;
  *(float *)(temp_v3 + 0x48) = temp_v13;
  *(float *)(temp_v3 + 0x34) = temp_v11;
  *(int *)(temp_v3 + 0x38) = (int)((unsigned long long)temp_v10 >> 0x20);
  *(int *)(temp_v3 + 0x3c) = (int)temp_v10;
  return;
}

} /* extern "C" */
