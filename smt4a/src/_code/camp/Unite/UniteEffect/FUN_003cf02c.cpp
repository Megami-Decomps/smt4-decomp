/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf02c` (_code @ 0x3cf02c, 0x10e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gfx/CameraMotion.h"

extern "C" {

int asdMemFree(...);
int scrScriptProcessDestroy(...);
int slotSetRequest(...);
int FUN_003180c4(...);
int btlTalkBustUpSetDemonTexture(...);
int btlTalkBustUpReleaseContent(void);
int btlTalkBustUpSetUnk2F4(...);
int FUN_0038b3f8(...);
int soundChannelStopAll(...);
int workOwnerRelease(...);
int FUN_0040a244(...);

int FUN_001517b4(...);
int sysPlaySe(...);
int FUN_00180118(...);
int uiSpriteSelectAnim(...);
int ptrListRemoveClearOwner(...);
int FUN_001fc348(...);
int FUN_0022677c(...);
int scrScriptProcessStartEntry(...);
int libc_strcpy(...);
int uniteCameraDestroy(void);
int FUN_003d2158(...);
int FUN_003d2a00(...);
int FUN_0040c190(...);
int candidateGetPreferredValue(...);

int FUN_0013c174(...);
int FUN_00163aa4(...);
int FUN_00167458(int, int);
int FUN_00178b04(...);
int FUN_0019eb14(void);
int uniteCameraInitialize(...);
int FUN_002c8894(void);
int sysPlayVoice(...);
int soundChannelRequestIfEnabled(int, int, int);
int FUN_003d54f8(...);
int _ZN9Obj557af8C1EPK21AsdAnimCameraResource(void);
int FUN_003fe86c(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int handleRegistryRegisterObject(...);
int asdAnimGetTrackLastFrame(unsigned int, int);
int VectorSignedToFloat(...);
int __aeabi_idivmod(unsigned int, double);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern unsigned char LAB_003cf760; /* 0x3cf760 */
extern unsigned char LAB_003cf7b8; /* 0x3cf7b8 */
extern unsigned char LAB_003cf7f8; /* 0x3cf7f8 */
extern unsigned char LAB_003cf814; /* 0x3cf814 */
extern unsigned char LAB_003cf830; /* 0x3cf830 */
extern unsigned char LAB_003cf850; /* 0x3cf850 */
extern unsigned char LAB_003cf86c; /* 0x3cf86c */
extern unsigned char LAB_003d009c; /* 0x3d009c */
extern unsigned char LAB_003d00a8; /* 0x3d00a8 */
extern unsigned char LAB_003d00b4; /* 0x3d00b4 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int DAT_0057f2c4; /* 0x57f2c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0013c174. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00180118. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019eb14. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_001fc348. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: uniteCameraInitialize. */
/* Supplied declaration required: FUN_002c8894. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: uniteCameraDestroy. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: btlTalkBustUpSetDemonTexture. */
/* Supplied declaration required: btlTalkBustUpReleaseContent. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003d2a00. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: _ZN9Obj557af8C1EPK21AsdAnimCameraResource. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: workOwnerRelease. */
/* Supplied declaration required: FUN_0040a244. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_0040c190. */
/* Supplied declaration required: asdAnimGetTrackLastFrame. */
/* Supplied declaration required: candidateGetPreferredValue. */
extern int FUN_004ffba8(unsigned int);
/* Supplied declaration required: __aeabi_idivmod. */


unsigned int FUN_003cf02c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 48 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar8;
  unsigned int *puVar9;
  int temp_v8;
  unsigned int *puVar11;
  int temp_v9;
  int temp_v10;
  char *pcVar14;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  int temp_v17 [37];
  unsigned long long temp_v18;
  
  temp_v2 = DAT_0057f2c4;
  temp_v16 = 1.0f;
  temp_v18 = 0x3f800000;
  FUN_00163aa4(DAT_0057f2c4 + 0x964);
  *(int *)(temp_v2 + 0x88) = *(int *)(temp_v2 + 0x88) + 2;
  asdAnimGetTrackLastFrame(*(unsigned int *)(temp_v2 + 0x8c),0);
  temp_v16 = (float)(int)temp_v16;
  __aeabi_idivmod(*(unsigned int *)(temp_v2 + 0x88),temp_v16);
  *(unsigned int *)(temp_v2 + 0x88) = temp_v7;
  temp_v15 = 0x42652ee000000000;
  switch(*(unsigned int *)(temp_v2 + 4)) {
  case 1:
    temp_v6 = FUN_0026c3a0();
    if (temp_v6 == 0) break;
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    soundChannelRequestIfEnabled(0x1000052,10,0x3c);
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v5 = 0x10000b5;
      }
      else {
        if (temp_v0 != 4) {
          temp_v6 = DAT_0057f2c4;
          *(unsigned int *)(DAT_0057f2c4 + 4) = 2;
          *(unsigned int *)(temp_v6 + 8) = 0;
          break;
        }
        temp_v5 = 0x10000b6;
      }
      sysPlayVoice(temp_v5);
    }
    else {
      sysPlayVoice(0x10000b4);
    }
    temp_v6 = DAT_0057f2c4;
    *(unsigned int *)(DAT_0057f2c4 + 4) = 2;
    *(unsigned int *)(temp_v6 + 8) = 0;
    break;
  case 2:
    temp_v6 = 0;
    do {
      if (temp_v6 <= *(int *)(temp_v2 + 8) - 1) {
        FUN_00167458(temp_v2 + temp_v6 * 0x8c + 0x360,0);
      }
      temp_v16 = (float)((unsigned long long)temp_v15 >> 0x20);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    FUN_00163aa4(temp_v2 + 0x8d8);
    temp_v6 = FUN_00163e84(0);
    if (((temp_v6 != 0) && (temp_v6 = FUN_00163e84(1), temp_v6 != 0)) &&
       (*(char *)(temp_v2 + 0x61a) != '\0')) {
      temp_v6 = *(int *)(*(int *)(temp_v2 + 0x90) + 4);
      handleRegistryRegisterObject(g_handleRegistry,temp_v6);
      FUN_003fe86c(temp_v6,0,2);
      *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
      temp_v6 = *(int *)(temp_v2 + 0x98);
      temp_v12 = *(short *)(*(int *)(temp_v6 + 0x34) + 0x94) != 0;
      *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
      if (temp_v12) {
        controllerRefreshAtUnitScale(reinterpret_cast<AnimatedObject *>(temp_v6), reinterpret_cast<CameraMotionOutput *>(temp_v2 + 0xa0), 0);
      }
      else {
        temp_v6 = **(int **)(*(int *)(temp_v6 + 0x34) + 0x48);
        temp_v5 = *(unsigned int *)(temp_v6 + 0x1c);
        temp_v11 = *(unsigned int *)(temp_v6 + 0x20);
        puVar11 = *(unsigned int **)(temp_v6 + 0x30);
        puVar9 = *(unsigned int **)(temp_v6 + 0x34);
        *(unsigned int *)(temp_v2 + 0xa8) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned int *)(temp_v2 + 0xa0) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xa4) = temp_v11;
        temp_v5 = *puVar11;
        temp_v11 = puVar11[1];
        *(unsigned int *)(temp_v2 + 0xe0) = puVar11[2];
        *(unsigned int *)(temp_v2 + 0xd8) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xdc) = temp_v11;
        *(unsigned int *)(temp_v2 + 200) = *puVar9;
        *(unsigned int *)(temp_v2 + 0xcc) = puVar9[1];
        *(unsigned int *)(temp_v2 + 0xd0) = puVar9[2];
        *(float *)(temp_v2 + 0xc4) = (float)puVar9[3] * temp_v16;
        FUN_0019eb14();
      }
      uniteCameraInitialize(temp_v2 + 0xa0);
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 3;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
    break;
  case 3:
    *(int *)(temp_v2 + 0x84) = *(int *)(temp_v2 + 0x84) + 1;
    temp_v6 = DAT_0057f2c4;
    temp_v10 = FUN_001834a4(0x1a,0x20b);
    temp_v17[0] = FUN_001834a4(0x1a,0x20e);
    temp_v14 = (float)((unsigned long long)temp_v15 >> 0x20);
    temp_v13 = (float)temp_v18;
    temp_v0 = *(short *)(temp_v6 + 0x1e);
    pcVar14 = (char *)0x0;
    if (temp_v0 == 2) {
      pcVar14 = (char *)0x52f330;
    }
    else if (temp_v0 == 3) {
      pcVar14 = (char *)0x52f340;
    }
    else if (temp_v0 == 4) {
      pcVar14 = "A\xa0ÍĘĬŨŲƮŀ";
    }
    temp_v9 = 0;
    if (temp_v0 != 0) {
      do {
        puVar8 = (unsigned short *)(pcVar14 + temp_v9 * 4);
        temp_v3 = *(int *)(temp_v6 + 8);
        temp_v4 = (unsigned int)*puVar8;
        if ((int)(temp_v4 - 5) <= temp_v3) {
          if (temp_v3 < (int)temp_v4) {
            *(unsigned int *)(temp_v6 + temp_v9 * 4 + 100) =
                 ((int)**(short **)(temp_v10 + 0xc) / 5) * ((temp_v3 - temp_v4) + 5);
          }
          else {
            temp_v4 = (unsigned int)puVar8[1];
            if (temp_v3 < (int)temp_v4) {
              temp_v3 = temp_v6 + temp_v9 * 4;
              *(int *)(temp_v3 + 100) = (int)**(short **)(temp_v10 + 0xc);
              temp_v14 = (float)VectorSignedToFloat((unsigned int)puVar8[1] - (unsigned int)*puVar8,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v17[0] + 0xc) + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)VectorSignedToFloat(*(int *)(temp_v6 + 8) - (unsigned int)*puVar8,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)(int)-((temp_v13 / temp_v14) * temp_v16);
              *(float *)(temp_v3 + 0x74) = temp_v16;
            }
            else if (temp_v3 < (int)(temp_v4 + 5)) {
              temp_v8 = temp_v6 + temp_v9 * 4;
              *(unsigned int *)(temp_v8 + 100) =
                   ((int)**(short **)(temp_v10 + 0xc) / 5) * (5 - (temp_v3 - temp_v4));
              *(int *)(temp_v8 + 0x74) = -(int)*(short *)(*(int *)(temp_v17[0] + 0xc) + 2);
            }
            else {
              temp_v16 = (float)temp_v18;
              *(unsigned int *)(temp_v6 + temp_v9 * 4 + 100) = 0;
              FUN_00163aa4(temp_v6 + temp_v9 * 0x8c + 0x6a8);
            }
          }
        }
        temp_v14 = (float)((unsigned long long)temp_v15 >> 0x20);
        temp_v13 = (float)temp_v18;
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < (int)(unsigned int)*(unsigned short *)(temp_v6 + 0x1e));
    }
    if (*(int *)(temp_v2 + 0x98) != 0) {
      if (*(char *)(temp_v2 + 0x128) != '\0') {
        FUN_003f9ac4(reinterpret_cast<AnimatedObject *>(*(int *)(temp_v2 + 0x98)), reinterpret_cast<CameraMotionOutput *>(temp_v2 + 0xa0), 0, 1.0f);
        temp_v16 = temp_v13;
      }
      FUN_002c8894();
    }
    temp_v6 = FUN_004ffba8(*(unsigned int *)(*(int *)(temp_v2 + 0x90) + 4));
    if (temp_v6 != 0) {
      temp_v10 = *(int *)(*(int *)(temp_v2 + 0x90) + 4);
      *(unsigned int *)(temp_v10 + 4) = *(unsigned int *)(temp_v10 + 4) | 1;
      temp_v6 = 0x20;
      FUN_00178b04(0x20,&LAB_003cf760,0x300);
      temp_v5 = 0;
      if (temp_v6 != 0) {
        temp_v5 = modelListInit();
      }
      *(unsigned int *)(temp_v2 + 0x94) = temp_v5;
      if (*(short *)(temp_v2 + 0x1e) == 2) {
        if (*(char *)(temp_v2 + 0x20) != '\0') {
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0013c174(&LAB_003cf7b8,temp_v17,1);
          temp_v6 = 0x48;
          FUN_00178b04(0x48,&LAB_003cf760,0x309);
        }
        else {
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
          FUN_0013c174(&LAB_003cf7f8,temp_v17,1);
          temp_v6 = 0x48;
          FUN_00178b04(0x48,&LAB_003cf760,0x310);
        }
        if (temp_v6 != 0) {
          _ZN9Obj557af8C1EPK21AsdAnimCameraResource();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 3) {
        FUN_0040aa6c(*(unsigned int *)(temp_v2 + 0x94),&LAB_003cf814);
        FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0013c174(&LAB_003cf830,temp_v17,1);
        temp_v6 = 0x48;
        FUN_00178b04(0x48,&LAB_003cf760,0x319);
        if (temp_v6 != 0) {
          _ZN9Obj557af8C1EPK21AsdAnimCameraResource();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 4) {
        FUN_0040aa6c(*(unsigned int *)(temp_v2 + 0x94),&LAB_003cf850);
        FUN_0040ab7c(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0040aad4(*(unsigned int *)(temp_v2 + 0x94),0);
        FUN_0013c174(&LAB_003cf86c,temp_v17,1);
        temp_v6 = 0x48;
        FUN_00178b04(0x48,&LAB_003cf760,0x321);
        if (temp_v6 != 0) {
          _ZN9Obj557af8C1EPK21AsdAnimCameraResource();
        }
        *(int *)(temp_v2 + 0x9c) = temp_v6;
      }
      if (*(int **)(temp_v2 + 0x98) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x98) + 4))();
        *(unsigned int *)(temp_v2 + 0x98) = 0;
      }
      uniteCameraDestroy();
      temp_v6 = *(int *)(*(int *)(temp_v2 + 0x94) + 4);
      handleRegistryRegisterObject(g_handleRegistry,temp_v6);
      FUN_003fe86c(temp_v6,0,2);
      *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
      temp_v6 = *(int *)(temp_v2 + 0x9c);
      temp_v12 = *(short *)(*(int *)(temp_v6 + 0x34) + 0x94) != 0;
      *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
      if (temp_v12) {
        controllerRefreshAtUnitScale(reinterpret_cast<AnimatedObject *>(temp_v6), reinterpret_cast<CameraMotionOutput *>(temp_v2 + 0xe4), 0);
      }
      else {
        temp_v6 = **(int **)(*(int *)(temp_v6 + 0x34) + 0x48);
        temp_v5 = *(unsigned int *)(temp_v6 + 0x1c);
        temp_v11 = *(unsigned int *)(temp_v6 + 0x20);
        puVar11 = *(unsigned int **)(temp_v6 + 0x30);
        puVar9 = *(unsigned int **)(temp_v6 + 0x34);
        *(unsigned int *)(temp_v2 + 0xec) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned int *)(temp_v2 + 0xe4) = temp_v5;
        *(unsigned int *)(temp_v2 + 0xe8) = temp_v11;
        temp_v5 = *puVar11;
        temp_v11 = puVar11[1];
        *(unsigned int *)(temp_v2 + 0x124) = puVar11[2];
        *(unsigned int *)(temp_v2 + 0x11c) = temp_v5;
        *(unsigned int *)(temp_v2 + 0x120) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x10c) = *puVar9;
        *(unsigned int *)(temp_v2 + 0x110) = puVar9[1];
        *(unsigned int *)(temp_v2 + 0x114) = puVar9[2];
        *(float *)(temp_v2 + 0x108) = (float)puVar9[3] * temp_v14;
        FUN_0019eb14();
      }
      uniteCameraInitialize(temp_v2 + 0xe4);
      ptrListRemoveClearOwner(g_handleRegistry,temp_v10);
      if (*(int **)(temp_v2 + 0x90) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x90) + 4))();
        *(unsigned int *)(temp_v2 + 0x90) = 0;
      }
      temp_v6 = DAT_0057f2c4;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x338),0x11);
        sysPlaySe(0x5a);
        temp_v6 = DAT_0057f2c4;
        *(unsigned int *)(DAT_0057f2c4 + 4) = 4;
        *(unsigned int *)(temp_v6 + 8) = 0;
      }
      else {
        *(unsigned int *)(DAT_0057f2c4 + 4) = 5;
        *(unsigned int *)(temp_v6 + 8) = 0;
      }
      break;
    }
    temp_v5 = *(unsigned int *)(*(int *)(temp_v2 + 0x90) + 4);
    candidateGetPreferredValue(temp_v5);
    temp_v10 = 9;
    FUN_001517b4(9,1);
    temp_v6 = 0x28e;
    temp_v9 = 0x311;
    if (temp_v10 == 0) {
      temp_v10 = 6;
      FUN_001517b4(6,1);
      if (temp_v10 != 0) goto LAB_003cf9bc;
    }
    else {
LAB_003cf9bc:
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v6;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
        temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v13) << 0x1f) |
                ((unsigned int)(temp_v16 == temp_v13) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v13 != temp_v13)) << 0x1c);
        temp_v1 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          if (temp_v0 == 2) {
            temp_v10 = 800;
          }
          else if (temp_v0 == 3 || temp_v0 == 4) {
            temp_v10 = 0x375;
          }
          if (*(int *)(temp_v2 + 0x24) != -1) {
            FUN_003d2158(*(int *)(temp_v2 + 0x24),0);
            *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
            sysPlayVoice(0x10000b7);
          }
        }
      }
      else if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v16) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
        VectorSignedToFloat(temp_v10,(unsigned char)(temp_v4 >> 0x16) & 3);
        FUN_003fe86c(temp_v5,0,2);
        temp_v3 = *(int *)(temp_v2 + 0x98);
        temp_v12 = *(short *)(*(int *)(temp_v3 + 0x34) + 0x94) != 0;
        *(unsigned char *)(temp_v2 + 0x128) = temp_v12;
        if (temp_v12) {
          controllerRefreshAtUnitScale(reinterpret_cast<AnimatedObject *>(temp_v3), reinterpret_cast<CameraMotionOutput *>(temp_v2 + 0xa0), 0);
          FUN_003f9ac4(reinterpret_cast<AnimatedObject *>(*(unsigned int *)(temp_v2 + 0x98)), reinterpret_cast<CameraMotionOutput *>(temp_v2 + 0xa0), 0, static_cast<f32>(temp_v10));
        }
        else {
          temp_v3 = **(int **)(*(int *)(temp_v3 + 0x34) + 0x48);
          temp_v5 = *(unsigned int *)(temp_v3 + 0x1c);
          temp_v11 = *(unsigned int *)(temp_v3 + 0x20);
          puVar11 = *(unsigned int **)(temp_v3 + 0x30);
          puVar9 = *(unsigned int **)(temp_v3 + 0x34);
          *(unsigned int *)(temp_v2 + 0xa8) = *(unsigned int *)(temp_v3 + 0x24);
          *(unsigned int *)(temp_v2 + 0xa0) = temp_v5;
          *(unsigned int *)(temp_v2 + 0xa4) = temp_v11;
          temp_v5 = *puVar11;
          temp_v11 = puVar11[1];
          *(unsigned int *)(temp_v2 + 0xe0) = puVar11[2];
          *(unsigned int *)(temp_v2 + 0xd8) = temp_v5;
          *(unsigned int *)(temp_v2 + 0xdc) = temp_v11;
          *(unsigned int *)(temp_v2 + 200) = *puVar9;
          *(unsigned int *)(temp_v2 + 0xcc) = puVar9[1];
          *(unsigned int *)(temp_v2 + 0xd0) = puVar9[2];
          *(float *)(temp_v2 + 0xc4) = (float)puVar9[3] * temp_v14;
          FUN_0019eb14();
        }
        temp_v3 = 6;
        *(int *)(temp_v2 + 8) = temp_v10;
        do {
          uiSpriteSelectAnim(temp_v2 + temp_v3 * 0x8c + 0x360,1);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 10);
      }
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v6;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v3 = 0;
      do {
        if (*(int *)(temp_v2 + 8) == temp_v10 + temp_v3 * 4) {
          uiSpriteSelectAnim(temp_v2 + temp_v3 * 0x8c + 0x6a8,0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      if (temp_v0 == 2) {
        temp_v10 = 800;
      }
      else {
        temp_v10 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v10 = 0x375;
        }
      }
    }
    else {
      temp_v10 = temp_v6;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
    }
    if (*(int *)(temp_v2 + 8) == temp_v10) {
      FUN_0022677c(0,0xffffffff);
    }
    if (*(int *)(temp_v2 + 8) == temp_v10 + 5) {
      FUN_003d54f8(0,0x1e);
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(DAT_0057f2c4 + 0x1e);
      if (temp_v0 == 2) {
        temp_v6 = 0x28f;
      }
      else {
        temp_v6 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v6 = temp_v9;
        }
      }
      if (*(int *)(temp_v2 + 8) == temp_v6) {
        temp_v5 = sysPlayVoice(0x10000b8);
        *(unsigned int *)(temp_v2 + 0x24) = temp_v5;
      }
    }
    else {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      if ((temp_v0 != 2) && (temp_v6 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v6 = temp_v9;
      }
      if (*(int *)(temp_v2 + 8) == temp_v6) {
        sysPlayVoice(0x10000b7);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 2) {
      if (*(int *)(temp_v2 + 8) != 0xa0) break;
      *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
      FUN_0040c190(temp_v2 + 0x38);
      FUN_003d2a00(&LAB_003d009c);
      FUN_001fc348(temp_v2 + 0x38);
    }
    if (*(short *)(temp_v2 + 0x1e) == 3) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d009c);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x11d) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00a8);
        FUN_001fc348(temp_v2 + 0x38);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 4) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d009c);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x118) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00a8);
        FUN_001fc348(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x168) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x34);
        FUN_0040c190(temp_v2 + 0x38);
        FUN_003d2a00(&LAB_003d00b4);
        FUN_001fc348(temp_v2 + 0x38);
      }
    }
    break;
  case 4:
    FUN_00163aa4();
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x338));
    if ((temp_v6 != 2) || (*(char *)(temp_v2 + 0x6a6) == '\0')) break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc);
    FUN_00180118(temp_v4);
    libc_strcpy(temp_v17,temp_v4);
    FUN_003180c4(8,temp_v17);
    temp_v5 = FUN_0014bf3c(*(unsigned short *)(temp_v2 + 0xc),0);
    libc_strcpy(temp_v17,temp_v5);
    FUN_003180c4(0x10,temp_v17);
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x338),0x10);
    sysPlaySe(0x5a);
    btlTalkBustUpSetDemonTexture(*(unsigned short *)(temp_v2 + 0xc),1);
    btlTalkBustUpSetUnk2F4(1);
    temp_v6 = DAT_0057f2c4;
    *(unsigned int *)(DAT_0057f2c4 + 4) = 6;
    *(unsigned int *)(temp_v6 + 8) = 0;
    break;
  case 6:
    FUN_00163aa4();
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x338));
    if ((temp_v6 == 2) && (*(char *)(temp_v2 + 0x6a6) != '\0')) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      soundChannelStopAll(10);
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 7;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
    break;
  case 7:
    temp_v6 = FUN_00163e84(0);
    if ((temp_v6 != 0) && (temp_v6 = FUN_00163e84(1), temp_v6 != 0)) {
      scrScriptProcessDestroy(*(unsigned int *)(temp_v2 + 0x338));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x33c));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x334));
      temp_v6 = 0;
      if (*(short *)(temp_v2 + 0x1e) != 0) {
        do {
          FUN_0038b3f8((int)*(short *)(temp_v2 + temp_v6 * 2 + 0xe),1);
          temp_v10 = temp_v2 + temp_v6 * 4;
          FUN_0040a244(*(unsigned int *)(temp_v10 + 0x28));
          *(unsigned int *)(temp_v10 + 0x28) = 0;
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < (int)(unsigned int)*(unsigned short *)(temp_v2 + 0x1e));
      }
      workOwnerRelease(temp_v2 + 0x38);
      FUN_0040a244(*(unsigned int *)(temp_v2 + 0x8c));
      *(unsigned int *)(temp_v2 + 0x8c) = 0;
      btlTalkBustUpReleaseContent();
      ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v2 + 0x94) + 4));
      if (*(int **)(temp_v2 + 0x94) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x94) + 4))();
        *(unsigned int *)(temp_v2 + 0x94) = 0;
      }
      if (*(int **)(temp_v2 + 0x9c) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v2 + 0x9c) + 4))();
        *(unsigned int *)(temp_v2 + 0x9c) = 0;
      }
      uniteCameraDestroy();
      temp_v6 = DAT_0057f2c4;
      *(unsigned int *)(DAT_0057f2c4 + 4) = 8;
      *(unsigned int *)(temp_v6 + 8) = 0;
    }
  }
  *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
  return 0;
}

} /* extern "C" */
