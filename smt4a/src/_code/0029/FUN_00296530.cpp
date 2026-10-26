/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296530` (_code @ 0x296530, 0xad4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002db06c(void);
int FUN_003541c0(void);
int linkHolderCopyWords(...);
int FUN_003fda64(...);
int handleRegistryRegisterObject(...);

int vec4Forward(void);
int FUN_003135bc(void);
int mapSpawnRandomEventKindEffect(void);
int FUN_00324e38(...);
int FUN_00385578(void);
int linkHolderCallFirst(...);
int controllerGetSourceValue(...);
int linkHolderApplyFirst(...);
int linkHolderRunAll(int, int *);
int FUN_003e5558(int);
int FUN_003e566c(int);
int FUN_003e5858(int);
int controllerSetDestination(...);
int FUN_003fd7c0(unsigned int, int, int);
int FUN_003fd924(...);
int animationSelectClip(...);
int controllerSetRotationEulerDegrees(...);
int FUN_003fe86c(...);
int playerLoadOutfitPartModel(int, int, int);
int playerModelLoadByIndex(int, unsigned int, int, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int *g_lmapScene; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161f; /* 0x5f161f */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */
extern signed char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern unsigned int DAT_005f17d8; /* 0x5f17d8 */
extern signed char DAT_005f1ad4; /* 0x5f1ad4 */
extern int DAT_005f1b10; /* 0x5f1b10 */
extern int DAT_005f1be8; /* 0x5f1be8 */

extern int gameFlagsGetBlock(void);
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: vec4Forward. */
/* Supplied declaration required: FUN_002db06c. */
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_003135bc. */
/* Supplied declaration required: mapSpawnRandomEventKindEffect. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_003541c0. */
/* Supplied declaration required: FUN_00385578. */
/* Supplied declaration required: linkHolderCallFirst. */
/* Supplied declaration required: controllerGetSourceValue. */
/* Supplied declaration required: linkHolderCopyWords. */
/* Supplied declaration required: linkHolderApplyFirst. */
/* Supplied declaration required: linkHolderRunAll. */
/* Supplied declaration required: FUN_003e5558. */
/* Supplied declaration required: FUN_003e566c. */
/* Supplied declaration required: FUN_003e5858. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: animationSelectClip. */
/* Supplied declaration required: FUN_003fda64. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: playerLoadOutfitPartModel. */
/* Supplied declaration required: playerModelLoadByIndex. */
extern int FUN_004ffba8(int);


void FUN_00296530(void)

{
/* irregular: 3 goto(s); 25 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar12;
  int *piVar13;
  int temp_v8;
  int *temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned char temp_v14 [12];
  int temp_v15;
  float temp_v16;
  int temp_v17;
  
  temp_v0 = gameFlagsGetBlock();
  if ((0 < g_lmapScene[0x69]) && (g_lmapScene[0x68] != -1)) {
    vec4Forward();
    g_lmapScene[0x69] = g_lmapScene[0x69] - 1;
  }
  if ((char)g_lmapScene[0x4d] == '\0') {
    return;
  }
  if ((char)g_lmapScene[0x6b] != '\0') {
    temp_v4 = 0;
    do {
      piVar13 = g_lmapScene;
      temp_v2 = g_lmapScene[temp_v4 + 0x6f];
      temp_v3 = g_lmapScene[temp_v4 + 0x6c];
      if (temp_v2 != temp_v3) {
        g_lmapScene[temp_v4 + 0x6c] = temp_v2;
        if (temp_v4 < 3) {
          temp_v3 = 7;
        }
        playerModelLoadByIndex(piVar13[0x6a],temp_v4 & 0xff,temp_v2,temp_v3);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 3);
  }
  else {
    temp_v2 = gameGetPlayerData();
    piVar13 = g_lmapScene;
    if ((short)g_lmapScene[0x72] != *(short *)(temp_v2 + 6)) {
      *(short *)(g_lmapScene + 0x72) = *(short *)(temp_v2 + 6);
      playerLoadOutfitPartModel(piVar13[0x6a],0,7);
    }
    piVar13 = g_lmapScene;
    if (*(short *)((int)g_lmapScene + 0x1ca) != *(short *)(temp_v2 + 8)) {
      *(short *)((int)g_lmapScene + 0x1ca) = *(short *)(temp_v2 + 8);
      playerLoadOutfitPartModel(piVar13[0x6a],1,7);
    }
    piVar13 = g_lmapScene;
    if ((short)g_lmapScene[0x73] != *(short *)(temp_v2 + 10)) {
      *(short *)(g_lmapScene + 0x73) = *(short *)(temp_v2 + 10);
      playerLoadOutfitPartModel(piVar13[0x6a],2,7);
    }
  }
  FUN_003e5858(g_lmapScene[0x6a]);
  piVar13 = (int *)0x0;
  temp_v2 = 0;
  if ((*g_lmapScene == 0x1d || *g_lmapScene == 0x21) || (DAT_005f161f != '\0')) {
    temp_v8 = 0;
    piVar12 = (int *)0xc7c34f80;
    temp_v9 = (int *)0xc7c34f80;
    temp_v10 = 0;
    linkHolderRunAll(g_lmapScene[0x6a],&temp_v8);
    piVar6 = g_lmapScene;
    *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
         *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 3;
    temp_v3 = *(int *)(piVar6[99] + 4);
    temp_v4 = *(unsigned int *)(temp_v3 + 4) | 3;
    *(unsigned int *)(temp_v3 + 4) = temp_v4;
  }
  else {
    temp_v8 = g_lmapScene[7];
    piVar6 = (int *)g_lmapScene[8];
    temp_v10 = g_lmapScene[9];
    temp_v9 = piVar6;
    linkHolderRunAll(g_lmapScene[0x6a],&temp_v8);
    FUN_003e566c(g_lmapScene[0x6a]);
    piVar12 = (int *)0x3f800000;
    FUN_003e5558(g_lmapScene[0x6a]);
    FUN_00385578();
    piVar5 = g_lmapScene;
    if (*(int *)(temp_v0 + 0x109c) != 0) {
      if (g_lmapScene[0x74] == 0) {
        g_lmapScene[0x74] = 9;
        piVar5[0x8a] = 1;
        piVar5[0x90] = 0x40a00000;
        piVar5[0x92] = 0;
        piVar12 = piVar13;
        temp_v3 = gameFlagIsSet(0x4c9);
        if ((temp_v3 == 0) || (temp_v3 = FUN_002e5db4(), temp_v3 != 0)) {
          FUN_003fd7c0(*(unsigned int *)(g_lmapScene[0x60] + 4),0,2);
        }
        temp_v3 = gameFlagIsSet(0x4c9);
        if ((temp_v3 == 0) || (temp_v3 = FUN_002e5db4(), piVar13 = g_lmapScene, temp_v3 != 0)) {
          piVar6 = g_lmapScene;
          g_lmapScene[0x8e] = 1;
          piVar13 = piVar12;
          FUN_003fd7c0(*(unsigned int *)(piVar6[99] + 4),0,2);
        }
        else {
          g_lmapScene[0x8e] = 3;
          temp_v5 = *(unsigned int *)(piVar13[99] + 4);
          FUN_003fd7c0(temp_v5,0,2);
          animationSelectClip(temp_v5,1,2);
          piVar13 = piVar12;
          FUN_003fd924(temp_v5,3,2);
        }
        *(unsigned char *)(g_lmapScene + 0x8f) = 1;
      }
      temp_v3 = gameFlagIsSet(0x4c9);
      piVar5 = g_lmapScene;
      if (temp_v3 != 0) {
        temp_v3 = FUN_002e5db4();
        piVar6 = g_lmapScene;
        if (temp_v3 != 0) {
          piVar5 = (int *)(*(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) & 0xfffffffc);
          *(int **)(*(int *)(g_lmapScene[0x60] + 4) + 4) = piVar5;
          *(unsigned int *)(*(int *)(piVar6[99] + 4) + 4) =
               *(unsigned int *)(*(int *)(piVar6[99] + 4) + 4) & 0xfffffffc;
          piVar6 = piVar5;
        }
        else {
          *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) | 3;
          *(unsigned int *)(*(int *)(piVar6[99] + 4) + 4) =
               *(unsigned int *)(*(int *)(piVar6[99] + 4) + 4) & 0xfffffffc;
        }
      }
      else {
        piVar6 = (int *)(*(unsigned int *)(*(int *)(g_lmapScene[0x60] + 4) + 4) & 0xfffffffc);
        *(int **)(*(int *)(g_lmapScene[0x60] + 4) + 4) = piVar6;
        temp_v3 = *(int *)(piVar5[99] + 4);
        temp_v4 = *(unsigned int *)(temp_v3 + 4) & 0xfffffffc;
        *(unsigned int *)(temp_v3 + 4) = temp_v4;
      }
    }
  }
  if ((char)g_lmapScene[0x17] == '\0') {
    piVar2 = (int *)linkHolderCallFirst(g_lmapScene[0x6a]);
    piVar5 = g_lmapScene;
    piVar6 = (int *)g_lmapScene[0x15];
    if (piVar2 != piVar6) goto LAB_00296958;
    g_lmapScene[0x18] = g_lmapScene[0x18] + 1;
    controllerGetSourceValue(piVar5[0x6a]);
    if (g_lmapScene[0x15] != 2) {
      if ((g_lmapScene[0x15] == 0x12) &&
         ((((temp_v3 = g_lmapScene[0x19], temp_v3 < 0x41f00000 &&
            (piVar6 = piVar12, (int)piVar12 >= 0x41f00000)) ||
           (((temp_v3 < 0x42940000 && (piVar6 = piVar12, (int)piVar12 >= 0x42940000)) ||
            ((temp_v3 < 0x41000000 && ((int)piVar12 >= 0x41000000)))))) ||
          ((temp_v3 < 0x42500000 && ((int)piVar12 >= 0x42500000)))))) {
        FUN_003135bc();
        mapSpawnRandomEventKindEffect();
        FUN_00324e38(0xffffffff);
      }
    }
    else if (((g_lmapScene[0x19] < 0x40000000) && ((int)piVar12 >= 0x40000000)) ||
            ((g_lmapScene[0x19] < 0x41300000 && ((int)piVar12 >= 0x41300000)))) {
      FUN_003135bc();
      mapSpawnRandomEventKindEffect();
      FUN_00324e38(0xffffffff);
    }
    g_lmapScene[0x19] = (int)piVar12;
  }
  else {
LAB_00296958:
    piVar12 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x17) = 0;
    piVar12[0x18] = 0;
    linkHolderApplyFirst(piVar12[0x6a],piVar12[0x15]);
    g_lmapScene[0x19] = (int)piVar13;
  }
  piVar13 = g_lmapScene;
  temp_v3 = g_lmapScene[0x5e];
  if (temp_v3 != 0) {
    piVar6 = (int *)g_lmapScene[0x5f];
  }
  if (temp_v3 == 0 || piVar6 == (int *)0x0) {
    return;
  }
  temp_v1 = 0;
  if (g_lmapScene[0x5c] != 0) {
    temp_v1 = g_lmapScene[0x62];
  }
  if (g_lmapScene[0x5c] == 0 || temp_v1 == 0) {
    return;
  }
  temp_v6 = *(int *)(temp_v3 + 4);
  temp_v7 = piVar6[1];
  temp_v3 = *(int *)(temp_v1 + 4);
  if (DAT_005f1614 != '\0') {
    *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) | 3;
    *(unsigned int *)(temp_v7 + 4) = *(unsigned int *)(temp_v7 + 4) | 3;
    *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
  }
  else {
    if (*(char *)((int)g_lmapScene + 0x196) != '\0') {
      temp_v4 = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
    }
    else {
      temp_v4 = *(unsigned int *)(temp_v6 + 4) | 3;
    }
    *(unsigned int *)(temp_v6 + 4) = temp_v4;
    temp_v9 = (int *)piVar13[8];
    temp_v8 = piVar13[7];
    temp_v10 = piVar13[9];
    controllerSetDestination(temp_v6,&temp_v8);
    if (*(char *)((int)g_lmapScene + 0x197) != '\0') {
      FUN_003fe86c(temp_v6,1,2);
      piVar13 = g_lmapScene;
      *(unsigned char *)((int)g_lmapScene + 0x197) = 0;
      *(unsigned char *)(piVar13 + 0x66) = 0;
    }
    piVar13 = g_lmapScene;
    if (g_lmapScene[0x5f] != 0) {
      if ((char)g_lmapScene[0x65] != '\0') {
        temp_v4 = *(unsigned int *)(temp_v7 + 4) & 0xfffffffc;
      }
      else {
        temp_v4 = *(unsigned int *)(temp_v7 + 4) | 3;
      }
      *(unsigned int *)(temp_v7 + 4) = temp_v4;
      temp_v9 = (int *)piVar13[8];
      temp_v8 = piVar13[7];
      temp_v10 = piVar13[9];
      controllerSetDestination(temp_v7,&temp_v8);
      controllerSetRotationEulerDegrees(temp_v7);
      if (*(char *)((int)g_lmapScene + 0x195) != '\0') {
        *(unsigned char *)((int)g_lmapScene + 0x195) = 0;
        FUN_003fe86c(temp_v7,0,2);
      }
    }
    piVar13 = g_lmapScene;
    if (g_lmapScene[0x62] != 0) {
      if (*(int *)(temp_v0 + 0xdf4) == 0) {
        temp_v1 = *(int *)(temp_v0 + 0x15b4);
        if ((temp_v1 != 3) && (temp_v1 != 4)) {
          *(int *)(temp_v0 + 0x15b4) = 0;
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
          goto LAB_00296c74;
        }
      }
      *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xfffffffc;
      temp_v1 = linkHolderCallFirst(piVar13[0x6a]);
      if (temp_v1 != 2) {
        linkHolderCopyWords(g_lmapScene[0x6a],&temp_v11);
        FUN_003fda64(*(unsigned int *)(*(int *)(g_lmapScene[0x6a] + 8) + 4),"Bip01",temp_v14)
        ;
        temp_v11 = temp_v15;
        temp_v12 = temp_v16;
        temp_v9 = (int *)romwright_f2u((float)((temp_v16 - 88.536f)));
        temp_v13 = temp_v17;
        temp_v8 = temp_v15;
        temp_v10 = temp_v17;
      }
      else {
        temp_v8 = g_lmapScene[7];
        temp_v9 = (int *)g_lmapScene[8];
        temp_v10 = g_lmapScene[9];
      }
      controllerSetDestination(temp_v3,&temp_v8);
      piVar13 = (int *)(temp_v0 + 0x15b4);
      temp_v0 = *piVar13;
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 != 2) {
            if (temp_v0 != 3) {
              if (temp_v0 == 4) {
                *piVar13 = 0;
                *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
              }
            }
            else {
              FUN_003fe86c(temp_v3,2);
              *piVar13 = 4;
            }
          }
          else if ((char)g_lmapScene[0xa4] == '\0') {
            FUN_003fe86c(temp_v3,1,2);
            *(unsigned char *)(g_lmapScene + 0xa4) = 1;
          }
        }
        else {
          temp_v0 = FUN_004ffba8(temp_v3);
          if (temp_v0 != 0) {
            FUN_003fe86c(temp_v3,1,2);
            *piVar13 = 2;
            *(unsigned char *)(g_lmapScene + 0xa4) = 1;
          }
        }
      }
      else {
        FUN_003fe86c(temp_v3,0,2);
        *piVar13 = 1;
      }
    }
  }
LAB_00296c74:
  piVar13 = g_lmapScene;
  if ((g_lmapScene[0x5b] == 0) && (g_lmapScene[0x5c] != 0)) {
    temp_v0 = *(int *)(g_lmapScene[0x5c] + 4);
    temp_v4 = *(unsigned int *)(temp_v0 + 4);
    if (DAT_005f17ac != '\0') {
      if ((temp_v4 & 1) != 0) {
        *(unsigned int *)(temp_v0 + 4) = temp_v4 & 0xfffffffc;
      }
LAB_00296e98:
      controllerSetDestination(temp_v0,piVar13 + 7);
      controllerSetRotationEulerDegrees(temp_v0);
      temp_v2 = g_lmapScene[0x59];
      piVar13 = g_lmapScene;
      if (temp_v2 != g_lmapScene[0x5a]) {
        piVar13[0x5a] = temp_v2;
        FUN_003fe86c(temp_v0,temp_v2,2);
      }
    }
    else {
      if ((temp_v4 & 1) != 0) goto LAB_00296e98;
      *(unsigned int *)(temp_v0 + 4) = temp_v4 | 3;
      piVar13[0x59] = 0;
      piVar13[0x5a] = temp_v2;
      FUN_003fe86c(temp_v0,temp_v2,2);
    }
  }
  if (DAT_005f1ad4 == '\0') {
    temp_v0 = gameFlagIsSet(0x4c9);
    if ((temp_v0 == 0) || (temp_v0 = FUN_002e5db4(), temp_v0 != 0)) {
      FUN_002db06c();
    }
    else {
      FUN_003541c0();
    }
  }
  temp_v0 = DAT_005f1b10;
  if (DAT_005f17d0 != '\0') {
    temp_v4 = DAT_005f17d4;
    if (DAT_005f17d4 == 2) {
      temp_v4 = (unsigned int)DAT_005f17c9;
    }
    if ((DAT_005f17d4 == 2 && temp_v4 == 0) && (DAT_005f1be8 != 0)) {
      g_lmapScene[0x5d] = DAT_005f1b10;
      temp_v5 = *(unsigned int *)(temp_v0 + 4);
      handleRegistryRegisterObject(g_handleRegistry,temp_v5);
      FUN_003fe86c(temp_v5,0,2);
      controllerSetDestination(temp_v5,&DAT_005f17d8);
      controllerSetRotationEulerDegrees(temp_v5);
    }
    DAT_005f17d4 = DAT_005f17d4 + 1;
    if ((int)DAT_005f17d4 >= 0x33) {
      DAT_005f17d0 = '\0';
      DAT_005f17d4 = 0;
    }
  }
  return;
}

} /* extern "C" */
