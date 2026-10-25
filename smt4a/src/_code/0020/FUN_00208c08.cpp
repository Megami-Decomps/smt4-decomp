/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208c08` (_code @ 0x208c08, 0x1518 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/CalleeContracts.h"

extern "C" {

int FUN_00167458(...);
int FUN_00340a94(...);
int asdAnimGetTrackLastFrame(...);
int __aeabi_uidivmod(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int eventQueueAddUnique(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int FUN_0021af2c(void);
int statusCameraApply(void);
int linkHolderRunAll(...);
int FUN_003e5558(...);
int FUN_003e5858(...);
int modelApplyNonzeroGroupRotation(...);
int aocHandleButtons(...);
int FUN_0040ae70(...);
int VectorSignedToFloat(...);

int textFormatBuffer(int, unsigned int);
int asdOperatorNew(void);
int FUN_00163aa4(...);
int dataTable00FindById(void);
int gameStateChange(...);
int FUN_00240170(void);
int statusCameraSelectPreset(int);
int aocDataBlockResolveEntries(void);
int FUN_0031416c(...);
int FUN_00316580(...);
int FUN_00371c3c(int, int);
int FUN_003857b4(...);
int FUN_0038b3f8(...);
int FUN_003e40d0(...);
int linkHolderApplyFirst(...);
int linkHolderClearFlag(...);
int FUN_003fce08(...);
int FUN_0040a244(void);
int resourceOwnerLoadNamed(...);
int FUN_0040b27c(...);
int FUN_0040b730(...);
int FUN_0040ba38(void);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned char LAB_002092ac; /* 0x2092ac */
extern unsigned char DAT_00557c60; /* 0x557c60 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int DAT_00588e2c; /* 0x588e2c */
extern unsigned char DAT_00588fd2; /* 0x588fd2 */
extern int DAT_00588fd4; /* 0x588fd4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_00163aa4. */
extern int slotIsActive(unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int lmapMainIsRunning(void);
extern unsigned int vec2GetXInt(int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int markerKindGetColor(unsigned int);
extern unsigned int dataTableFileGetTable(int, unsigned int);
/* Supplied declaration required: gameStateChange. */
/* Supplied declaration required: FUN_0021af2c. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: FUN_00240170. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: statusCameraSelectPreset. */
/* Supplied declaration required: aocDataBlockResolveEntries. */
extern int statusDownGetFlag(void);
extern int FUN_002c7cb4(void);
/* Supplied declaration required: statusCameraApply. */
extern int FUN_002effbc(void);
extern unsigned int FUN_002f72dc(int);
/* Supplied declaration required: FUN_0031416c. */
/* Supplied declaration required: FUN_00316580. */
extern int objStateNotEnding(void);
extern int FUN_00334044(void);
/* Supplied declaration required: FUN_00340a94. */
/* Supplied declaration required: FUN_00371c3c. */
extern int lmapSceneGetScript(void);
extern int statusDownGetMode(void);
/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: FUN_0038b3f8. */
extern int FUN_0039c1f4(void);
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: FUN_003e40d0. */
/* Supplied declaration required: linkHolderApplyFirst. */
/* Supplied declaration required: linkHolderRunAll. */
/* Supplied declaration required: FUN_003e5558. */
/* Supplied declaration required: FUN_003e5858. */
extern int fourPtrsAllNull(unsigned int);
/* Supplied declaration required: linkHolderClearFlag. */
/* Supplied declaration required: modelApplyNonzeroGroupRotation. */
extern unsigned int _ZN9Obj557ae8C1Ev(void);
/* Supplied declaration required: aocHandleButtons. */
/* Supplied declaration required: FUN_003fce08. */
extern int nkdwLoaderParse(unsigned int);
extern unsigned int FUN_00409fe8(int, unsigned int);
/* Supplied declaration required: FUN_0040a244. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(int);
/* Supplied declaration required: resourceOwnerLoadNamed. */
/* Supplied declaration required: FUN_0040b27c. */
/* Supplied declaration required: FUN_0040b730. */
/* Supplied declaration required: FUN_0040ba38. */
/* Supplied declaration required: asdAnimGetTrackLastFrame. */
/* Supplied declaration required: __aeabi_uidivmod. */


unsigned int FUN_00208c08(void)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 43 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  float temp_v15 [11];
  
  temp_v2 = DAT_00588fd4;
  temp_v13 = 0x3f800000;
  temp_v3 = DAT_00588fd4 + 0x15c;
  *(unsigned char *)(DAT_00588fd4 + 0x137c) = 0;
  FUN_00163aa4(temp_v3);
  FUN_00163aa4(temp_v2 + 0x1e8);
  FUN_00163aa4(temp_v2 + 0x38c);
  if (*(char *)(temp_v2 + 0x20ad) != '\0') {
    FUN_00163aa4(temp_v2 + 0x274);
    FUN_00163aa4(temp_v2 + 0x300);
    if ((*(char *)(temp_v2 + 0x2fe) != '\0') && (*(char *)(temp_v2 + 0x38a) != '\0')) {
      *(unsigned char *)(temp_v2 + 0x20ad) = 0;
    }
  }
  if ((*(char *)(temp_v2 + 0x20ac) == '\0') && (*(int *)(temp_v2 + 0x20cc) != 0)) {
    temp_v4 = FUN_002f72dc(temp_v2);
    textFormatBuffer(temp_v2 + 0x2068,temp_v4);
    *(unsigned char *)(temp_v2 + 0x20ac) = 1;
  }
  switch(*(unsigned int *)(temp_v2 + 0x1368)) {
  case 1:
    temp_v3 = aocDataBlockResolveEntries();
    if (temp_v3 != 0) {
      temp_v4 = 2;
      gameStateChange(temp_v4);
    }
    break;
  case 2:
    if (*(char *)(temp_v2 + 0x2018) == '\n') {
      *(unsigned int *)(temp_v2 + 0x1368) = 0;
      *(unsigned char *)(temp_v2 + 0x1382) = 1;
      *(int *)(temp_v2 + 0x10) = *(int *)(temp_v2 + 0x10) + 1;
      *(int *)(temp_v2 + 0x14) = *(int *)(temp_v2 + 0x14) + 1;
      return 0;
    }
    FUN_00316580(temp_v2 + 0x4a4,1);
    FUN_00316580(temp_v2 + 0x530,0);
    if (*(int *)(temp_v2 + 0x10) >= 6) {
      if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
        FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
      }
      temp_v3 = FUN_00163aa4(temp_v2 + 0x5bc);
      if (temp_v3 != 0) {
        *(unsigned int *)(temp_v2 + 0x1368) = 0;
        *(unsigned char *)(temp_v2 + 0x1382) = 1;
      }
    }
    break;
  case 3:
    temp_v11 = 1;
    temp_v3 = 7;
    do {
      if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
        FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
      }
      temp_v7 = FUN_00163aa4(temp_v2 + temp_v3 * 0x8c + 0x44);
      if (temp_v7 == 0) {
        temp_v11 = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x23);
    if (temp_v11) {
      if (*(char *)(temp_v2 + 0x2030) != '\0') {
        temp_v3 = nkdwLoaderParse(*(unsigned int *)(temp_v2 + 0x2028));
        if (temp_v3 == 0) break;
        *(unsigned char *)(temp_v2 + 0x2030) = 0;
      }
      if (*(char *)(temp_v2 + 0x2031) != '\0') {
        temp_v3 = FUN_003fce08(*(unsigned int *)(temp_v2 + 0x2028),1);
        if (temp_v3 == 0) break;
        *(unsigned char *)(temp_v2 + 0x2031) = 0;
      }
      *(unsigned char *)(temp_v2 + 0x2012) = 0;
      temp_v4 = 4;
      *(unsigned char *)(temp_v2 + 0x2011) = 0;
      gameStateChange(temp_v4);
    }
    break;
  case 5:
    *(unsigned char *)(temp_v2 + 0x2030) = 0;
    *(unsigned char *)(temp_v2 + 0x2031) = 0;
    if (*(int *)(temp_v2 + 0x136c) == 0) {
      *(unsigned char *)(temp_v2 + 0x2011) = 0;
    }
    else {
      *(unsigned char *)(temp_v2 + 0x2011) = 1;
    }
    if (*(short *)(temp_v2 + 0x138c) != 0) {
      FUN_0038b3f8((int)*(short *)(temp_v2 + 0x138c),1);
      *(unsigned short *)(temp_v2 + 0x138c) = 0;
    }
    if ((0 < *(short *)(temp_v2 + 0x138e)) && (*(int *)(temp_v2 + 0x2028) != 0)) {
      FUN_0040a244();
      *(unsigned int *)(temp_v2 + 0x2028) = 0;
    }
    temp_v3 = DAT_00588fd4;
    if (!(*(char *)(temp_v2 + 0x2018) == '\x03' || *(char *)(temp_v2 + 0x2018) == '\n')) {
      temp_v8 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1390);
      dataTable00FindById();
      if ((((temp_v8 == 0) || (temp_v9 = *(unsigned char *)(temp_v8 + 0xa5), (temp_v9 & 1) == 0)) &&
          ((temp_v9 = *(unsigned char *)(temp_v3 + 0x137d), temp_v9 == 0 ||
           ((temp_v8 != 0 && ((*(unsigned short *)(temp_v8 + 2) & 0x8000) != 0)))))) ||
         (*(short *)(temp_v2 + 0x1390) < 0)) {
        temp_v1 = *(short *)(temp_v2 + 0x1390);
        temp_v3 = (int)temp_v1;
        if (temp_v3 != 0) {
          temp_v9 = 1;
        }
        *(short *)(temp_v2 + 0x138c) = temp_v1;
        if (temp_v3 != 0) {
          FUN_00371c3c(temp_v3,temp_v9);
        }
      }
      else {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1390);
        dataTable00FindById();
        if (*(short *)(temp_v8 + 0xa6) < 1) {
          *(unsigned short *)(temp_v2 + 0x138e) = *(unsigned short *)(temp_v8 + 0x8c);
        }
        else {
          *(short *)(temp_v2 + 0x138e) = *(short *)(temp_v8 + 0xa6);
        }
        if (0 < *(short *)(temp_v2 + 0x138e)) {
          temp_v4 = FUN_00409fe8((int)*(short *)(temp_v2 + 0x138e),1);
          *(unsigned int *)(temp_v2 + 0x2028) = temp_v4;
          *(unsigned int *)(temp_v2 + 0x202c) = 0;
          temp_v4 = 6;
          *(unsigned char *)(temp_v2 + 0x2030) = 1;
          gameStateChange(temp_v4);
          break;
        }
      }
    }
    else {
      *(unsigned int *)(temp_v2 + 0x2054) = 0;
      statusCameraSelectPreset(0);
      *(unsigned char *)(temp_v2 + 0x2058) = 0;
      FUN_00240170();
      temp_v3 = lmapSceneGetScript();
      if ((temp_v3 != 0) || (temp_v3 = lmapMainIsRunning(), temp_v3 != 0)) {
        temp_v15[4] = 4.2039e-44f;
        temp_v15[5] = 2.10195e-43f;
        temp_v15[6] = 2.10195e-43f;
        temp_v15[7] = 2.10195e-43f;
        temp_v15[0] = 1.82169e-43f;
        temp_v15[1] = 1.82169e-43f;
        temp_v15[2] = 4.2039e-44f;
        temp_v15[3] = 4.2039e-44f;
        FUN_0031416c(200,200,200,0x82);
      }
      *(unsigned int *)(temp_v2 + 0x2050) = 0x3c449ba6;
      *(unsigned int *)(temp_v2 + 0x2048) = 0x43af0000;
      *(unsigned int *)(temp_v2 + 0x2038) = 0x3f99999a;
      *(unsigned int *)(temp_v2 + 0x203c) = 0x40a9999a;
      *(unsigned int *)(temp_v2 + 0x2040) = 0x3f000000;
      temp_v3 = lmapSceneGetScript();
      *(int *)(temp_v2 + 0x2034) = temp_v3;
      *(unsigned short *)(temp_v2 + 0x138e) = 0xffff;
      if (temp_v3 != 0) {
        FUN_003857b4(0);
        linkHolderClearFlag(*(unsigned int *)(temp_v2 + 0x2034));
        DAT_00588fd2 = 0;
      }
      else {
        temp_v3 = 0x130;
        asdOperatorNew();
        puVar6 = (unsigned int *)0x0;
        if (temp_v3 != 0) {
          puVar6 = (unsigned int *)_ZN9Obj557ae8C1Ev();
          *puVar6 = (unsigned int)&DAT_00557c60;
        }
        *(unsigned int **)(temp_v2 + 0x2034) = puVar6;
        DAT_00588fd2 = 1;
        FUN_0040ba38();
        temp_v7 = lmapMainIsRunning();
        temp_v3 = g_handleRegistry;
        if (temp_v7 != 0) {
          temp_v0 = *(char *)(*(int *)(g_handleRegistry + 0x14) + 0xc4);
          *(char *)(temp_v2 + 0x20e6) = temp_v0;
          if (temp_v0 != '\0') {
            *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0xc4) = 0;
          }
        }
        else {
          resourceOwnerLoadNamed(g_handleRegistry,&LAB_002092ac);
        }
      }
      *(unsigned int *)(temp_v2 + 5000) = 0;
      linkHolderApplyFirst(*(unsigned int *)(temp_v2 + 0x2034),0);
      if (*(unsigned int *)(temp_v2 + 0x205c) != 0) {
        FUN_0040b27c(*(unsigned int *)(temp_v2 + 0x2034),0,*(unsigned int *)(temp_v2 + 0x205c) & 0xffff,7);
      }
      else {
        FUN_0040b730(*(unsigned int *)(temp_v2 + 0x2034),0,7);
      }
      if (*(unsigned int *)(temp_v2 + 0x2060) != 0) {
        FUN_0040b27c(*(unsigned int *)(temp_v2 + 0x2034),1,*(unsigned int *)(temp_v2 + 0x2060) & 0xffff,7);
      }
      else {
        FUN_0040b730(*(unsigned int *)(temp_v2 + 0x2034),1,7);
      }
      if (*(unsigned int *)(temp_v2 + 0x2064) != 0) {
        FUN_0040b27c(*(unsigned int *)(temp_v2 + 0x2034),2,*(unsigned int *)(temp_v2 + 0x2064) & 0xffff,7);
      }
      else {
        FUN_0040b730(*(unsigned int *)(temp_v2 + 0x2034),2,7);
      }
    }
    temp_v4 = 7;
    gameStateChange(temp_v4);
    break;
  case 6:
    temp_v3 = nkdwLoaderParse(*(unsigned int *)(temp_v2 + 0x2028));
    if (temp_v3 != 0) {
      *(unsigned char *)(temp_v2 + 0x2030) = 0;
      *(unsigned char *)(temp_v2 + 0x2031) = 1;
      aocHandleButtons(*(unsigned int *)(temp_v2 + 0x2028),7);
      temp_v4 = 7;
      gameStateChange(temp_v4);
    }
    break;
  case 7:
    if (!(*(char *)(temp_v2 + 0x2018) == '\x03' || *(char *)(temp_v2 + 0x2018) == '\n')) {
      temp_v3 = (int)*(short *)(temp_v2 + 0x138c);
      if (temp_v3 != 0) {
        devilIsTextureLoaded(temp_v3, 1);
        if (temp_v3 != 0) goto LAB_002093e4;
      }
      else {
        if (*(int *)(temp_v2 + 0x2028) == 0) {
          *(unsigned char *)(temp_v2 + 0x2030) = 0;
          temp_v4 = 0;
          *(unsigned char *)(temp_v2 + 0x2031) = 0;
          gameStateChange(temp_v4);
          break;
        }
        if ((*(short *)(temp_v2 + 0x138e) < 1) ||
           (temp_v3 = FUN_003fce08(*(int *)(temp_v2 + 0x2028),1), temp_v3 != 0)) {
          *(unsigned char *)(temp_v2 + 0x2030) = 0;
          *(unsigned char *)(temp_v2 + 0x2031) = 0;
          goto LAB_002093e4;
        }
      }
    }
    else {
      temp_v3 = lmapMainIsRunning();
      if (((temp_v3 == 0) && (temp_v3 = FUN_0040af60(g_handleRegistry), temp_v3 != 0)) &&
         (*(int *)(g_handleRegistry + 4) == 0)) {
        FUN_0040ae70(g_handleRegistry,1);
        temp_v3 = g_handleRegistry;
        temp_v0 = *(char *)(*(int *)(g_handleRegistry + 0x14) + 0xc4);
        *(char *)(temp_v2 + 0x20e6) = temp_v0;
        if (temp_v0 != '\0') {
          *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0xc4) = 0;
        }
      }
      FUN_003e5858(*(unsigned int *)(temp_v2 + 0x2034));
      temp_v3 = fourPtrsAllNull(*(unsigned int *)(temp_v2 + 0x2034));
      if (temp_v3 != 0) {
        temp_v4 = vec2GetXInt(temp_v2 + 0x418);
        temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15[1] = *(float *)(temp_v2 + 0x203c);
        temp_v15[2] = *(float *)(temp_v2 + 0x2040);
        temp_v15[0] = *(float *)(temp_v2 + 0x2038) + temp_v12 * 0.025f;
        linkHolderRunAll(*(unsigned int *)(temp_v2 + 0x2034),temp_v15);
        FUN_003e5558(*(unsigned int *)(temp_v2 + 0x2034));
        modelApplyNonzeroGroupRotation(*(unsigned int *)(temp_v2 + 0x2034),temp_v2 + 0x2044);
LAB_002093e4:
        if ((*(char *)(temp_v2 + 0x1382) != '\0') ||
           ((*(char *)(temp_v2 + 0x2018) != '\x03' && (*(char *)(temp_v2 + 0x2018) != '\n')))) {
          uiSpriteSetKeyframe(temp_v2 + 0x418,1,0);
          *(unsigned char *)(temp_v2 + 0x1382) = 0;
        }
        temp_v14 = aocDataBlockResolveEntries();
        temp_v7 = DAT_00588fd4;
        temp_v3 = (int)((unsigned long long)temp_v14 >> 0x20);
        if ((int)temp_v14 != 0) {
          temp_v4 = 0;
          if (*(int *)(temp_v2 + 0x136c) == 0) {
            gameStateChange(temp_v4);
            break;
          }
          if (*(int *)(temp_v2 + 0x136c) != 5) {
            if (*(int *)(temp_v2 + 0x20c0) == 0) {
              temp_v5 = *(int *)(DAT_00588fd4 + 0x20bc);
              if (temp_v5 != 0) {
                temp_v3 = *(int *)(DAT_00588fd4 + 0x20b8);
              }
              if (temp_v5 == 0 || temp_v3 == 0) break;
              if (*(int *)(DAT_00588fd4 + 0x20c0) == 0) {
                temp_v4 = dataTableFileGetTable(temp_v5,0);
                temp_v6 = dataTableGetEntries();
                *(unsigned int *)(temp_v7 + 0x20c0) = temp_v6;
                temp_v4 = dataTableGetCount(temp_v4);
                *(unsigned int *)(temp_v7 + 0x20c4) = temp_v4;
              }
            }
            temp_v0 = *(char *)(temp_v2 + 0x2018);
            if ((!(temp_v0 == '\x05' || temp_v0 == '\x06')) && (temp_v0 != '\a')) {
              temp_v4 = 9;
            }
            else {
              *(unsigned char *)(temp_v2 + 0x759) = 0;
              *(unsigned char *)(temp_v2 + 0x7e5) = 0;
              uiSpriteSelectAnim(temp_v2 + 0x6d4,9);
              uiSpriteSelectAnim(temp_v2 + 0x760,9);
              temp_v4 = 8;
            }
            gameStateChange(temp_v4);
            temp_v0 = *(char *)(temp_v2 + 0x2017);
            if ((temp_v0 == '\t' || temp_v0 == '\n') ||
               ((temp_v0 == '\v' || temp_v0 == '\f') || temp_v0 == '\b')) {
              *(unsigned int *)(temp_v2 + 0x1378) = 1;
              FUN_0021af2c();
            }
          }
          else {
            gameStateChange(5);
            *(unsigned int *)(temp_v2 + 0x136c) = 9;
          }
        }
      }
    }
    break;
  case 8:
    if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
      FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
    }
    temp_v3 = FUN_00163aa4(temp_v2 + 0x6d4);
    if (temp_v3 != 0) {
      if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
        FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
      }
      temp_v3 = FUN_00163aa4(temp_v2 + 0x760);
      if (temp_v3 != 0) {
        temp_v4 = 9;
        gameStateChange(temp_v4);
      }
    }
    break;
  case 9:
    temp_v0 = *(char *)(temp_v2 + 0x2018);
    *(unsigned char *)(temp_v2 + 0x2014) = 0;
    if (temp_v0 != '\n') {
      if (temp_v0 != '\x03') {
        if (((temp_v0 == '\n') && (*(char *)(temp_v2 + 0x2011) != '\0')) &&
           ((*(char *)(temp_v2 + 0x2015) == '\0' || (*(char *)(DAT_00588e2c + 0xc) != '\0')))) {
LAB_002097e0:
          if (*(short *)(temp_v2 + 0x138e) < 0) {
            temp_v3 = slotIsActive(0xe);
            if (temp_v3 != 0) {
              if ((int)*(float *)(temp_v2 + 0x2050) < 0x3cf5c28f) {
                *(float *)(temp_v2 + 0x2050) = *(float *)(temp_v2 + 0x2050) + 0.0005f;
                *(int *)(temp_v2 + 0x2054) = *(int *)(temp_v2 + 0x2054) + 1;
              }
              FUN_003e5558(*(unsigned int *)(temp_v2 + 0x2034));
              FUN_00240170();
            }
            temp_v3 = slotIsActive(0xf);
            if (temp_v3 != 0) {
              if ((int)*(float *)(temp_v2 + 0x2050) >= 0x3c449ba7) {
                *(float *)(temp_v2 + 0x2050) = *(float *)(temp_v2 + 0x2050) - 0.0005f;
                *(int *)(temp_v2 + 0x2054) = *(int *)(temp_v2 + 0x2054) - 1;
              }
              FUN_003e5558(*(unsigned int *)(temp_v2 + 0x2034));
              FUN_00240170();
            }
            temp_v3 = slotIsActive(0xd);
            if (temp_v3 != 0) {
              temp_v12 = *(float *)(temp_v2 + 0x2048) - 5.0f;
              *(float *)(temp_v2 + 0x2048) = temp_v12;
              temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f < temp_v12) << 0x1f) |
                       ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
              in_fpscr = temp_v8 | ((unsigned int)(temp_v12 != temp_v12) << 0x1c);
              temp_v9 = (unsigned char)(temp_v8 >> 0x18);
              if (!(unsigned char)((temp_v9 >> 6) & 1) && temp_v9 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                *(float *)(temp_v2 + 0x2048) = temp_v12 + 360.0f;
              }
            }
            temp_v3 = slotIsActive(0xc);
            if (temp_v3 != 0) {
              temp_v12 = *(float *)(temp_v2 + 0x2048) + 5.0f;
              *(float *)(temp_v2 + 0x2048) = temp_v12;
              if ((int)temp_v12 >= 0x43b40001) {
                *(float *)(temp_v2 + 0x2048) = temp_v12 - 360.0f;
              }
            }
            modelApplyNonzeroGroupRotation(*(unsigned int *)(temp_v2 + 0x2034),temp_v2 + 0x2044);
            statusCameraApply();
            FUN_003e5858(*(unsigned int *)(temp_v2 + 0x2034));
            temp_v4 = vec2GetXInt(temp_v2 + 0x418);
            temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15[1] = *(float *)(temp_v2 + 0x203c);
            temp_v15[2] = *(float *)(temp_v2 + 0x2040);
            temp_v15[0] = *(float *)(temp_v2 + 0x2038) + temp_v12 * 0.025f;
            linkHolderRunAll(*(unsigned int *)(temp_v2 + 0x2034),temp_v15);
          }
        }
      }
      else if (*(char *)(temp_v2 + 0x2016) == '\0') goto LAB_002097e0;
    }
    else if (*(char *)(temp_v2 + 0x2011) != '\0') {
      if (*(char *)(temp_v2 + 0x2015) == '\0') goto LAB_002097e0;
      temp_v4 = vec2GetXInt(temp_v2 + 0x418);
      temp_v15[1] = *(float *)(temp_v2 + 0x203c);
      temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15[2] = *(float *)(temp_v2 + 0x2040);
      temp_v15[0] = *(float *)(temp_v2 + 0x2038) + temp_v12 * 0.025f;
      linkHolderRunAll(*(unsigned int *)(temp_v2 + 0x2034),temp_v15);
    }
    if ((*(char *)(temp_v2 + 0x2015) == '\0') && (temp_v3 = useCounterIsFinished(), temp_v3 != 0)) {
      temp_v7 = statusDownGetMode();
      *(char *)(temp_v2 + 0x137c) = (char)temp_v7;
      temp_v3 = temp_v7;
      if (temp_v7 < 0) {
        temp_v3 = -1;
      }
      if (0 < temp_v7) {
        *(unsigned int *)(temp_v2 + 0x1378) = 1;
      }
      if (temp_v7 < 0) {
        *(int *)(temp_v2 + 0x1378) = temp_v3;
      }
      if (temp_v7 != 0) {
        temp_v4 = 0x100020d;
LAB_00209b8c:
        eventQueueAddUniqueIfValid(temp_v4);
      }
      else {
        temp_v7 = padButtonIsPressed(2);
        temp_v3 = DAT_00588fd4;
        if (temp_v7 != 0) {
          if (!(*(char *)(temp_v2 + 0x2018) == '\x03' || *(char *)(temp_v2 + 0x2018) == '\n')) {
            if (*(char *)(temp_v2 + 0x2032) != '\0') {
              eventQueueAddUnique(0x100020e);
              if (*(short *)(temp_v2 + 0x138c) != 0) {
                FUN_0038b3f8((int)*(short *)(temp_v2 + 0x138c),1);
                *(unsigned short *)(temp_v2 + 0x138c) = 0;
              }
              if ((0 < *(short *)(temp_v2 + 0x138e)) && (*(int *)(temp_v2 + 0x2028) != 0)) {
                FUN_0040a244();
                *(unsigned int *)(temp_v2 + 0x2028) = 0;
                *(unsigned short *)(temp_v2 + 0x138e) = 0xffff;
              }
              *(unsigned char *)(temp_v2 + 0x137d) = *(unsigned char *)(temp_v2 + 0x137d) ^ 1;
              gameStateChange(5);
            }
          }
          else {
            eventQueueAddUnique(0x100020e);
            temp_v15[0] = 0.0f;
            temp_v15[1] = 2.8026e-45f;
            temp_v15[2] = 2.52234e-44f;
            temp_v3 = *(int *)(temp_v2 + 5000) + 1;
            *(int *)(temp_v2 + 5000) = temp_v3;
            if (temp_v3 >= 3) {
              *(unsigned int *)(temp_v2 + 5000) = 0;
            }
            linkHolderApplyFirst(*(unsigned int *)(temp_v2 + 0x2034),temp_v15[*(int *)(temp_v2 + 5000)]);
          }
        }
        else {
          if ((((((*(char *)(DAT_00588fd4 + 0x2012) != '\0') &&
                 (*(char *)(DAT_00588fd4 + 0x2011) != '\0')) && (temp_v7 = FUN_00334044(), temp_v7 >= 2))
               && ((temp_v7 = statusDownGetFlag(), temp_v7 != 0 || (*(int *)(temp_v3 + 0x14) >= 0xc)))) &&
              (temp_v3 = FUN_002c7cb4(), temp_v3 != 0)) &&
             (((temp_v3 = FUN_002effbc(), temp_v3 != 0 && (temp_v3 = objStateNotEnding(), temp_v3 != 0)) &&
              (temp_v3 = FUN_0039c1f4(), temp_v3 == 0)))) {
            temp_v3 = 8;
            FUN_001517b4(8,0);
            if (temp_v3 != 0) {
              temp_v3 = FUN_00334044();
              temp_v7 = *(int *)(temp_v2 + 0x1374) - 1;
              if (temp_v7 < 0) {
                temp_v3 = temp_v3 - 1;
              }
              *(int *)(temp_v2 + 0x1374) = temp_v7;
              if (temp_v7 < 0) {
                *(int *)(temp_v2 + 0x1374) = temp_v3;
              }
              *(unsigned int *)(temp_v2 + 0x1378) = 0xffffffff;
              FUN_0021af2c();
              temp_v4 = 0x1000210;
              goto LAB_00209b8c;
            }
          }
          temp_v3 = DAT_00588fd4;
          temp_v8 = DAT_00588fd4 + 0x2000;
          temp_v11 = *(char *)(DAT_00588fd4 + 0x2012) != '\0';
          if (temp_v11) {
            temp_v8 = (unsigned int)*(unsigned char *)(DAT_00588fd4 + 0x2011);
          }
          if (((temp_v11 && temp_v8 != 0) && (temp_v7 = FUN_00334044(), temp_v7 >= 2)) &&
             (((temp_v7 = statusDownGetFlag(), temp_v7 != 0 || (*(int *)(temp_v3 + 0x14) >= 0xc)) &&
              ((((temp_v3 = FUN_002c7cb4(), temp_v3 != 0 && (temp_v3 = FUN_002effbc(), temp_v3 != 0)) &&
                (temp_v3 = objStateNotEnding(), temp_v3 != 0)) && (temp_v3 = FUN_0039c1f4(), temp_v3 == 0)))))) {
            temp_v3 = 7;
            FUN_001517b4(7,0);
            if (temp_v3 != 0) {
              temp_v3 = FUN_00334044();
              temp_v7 = *(int *)(temp_v2 + 0x1374) + 1;
              *(int *)(temp_v2 + 0x1374) = temp_v7;
              if (temp_v3 <= temp_v7) {
                *(unsigned int *)(temp_v2 + 0x1374) = 0;
              }
              *(unsigned int *)(temp_v2 + 0x1378) = 1;
              FUN_0021af2c();
              temp_v4 = 0x1000210;
              goto LAB_00209b8c;
            }
          }
          temp_v3 = DAT_00588fd4;
          temp_v8 = DAT_00588fd4 + 0x2000;
          temp_v11 = *(char *)(DAT_00588fd4 + 0x2012) != '\0';
          if (temp_v11) {
            temp_v8 = (unsigned int)*(unsigned char *)(DAT_00588fd4 + 0x2011);
          }
          if ((((temp_v11 && temp_v8 != 0) && (temp_v7 = FUN_00334044(), temp_v7 >= 2)) &&
              ((temp_v7 = statusDownGetFlag(), temp_v7 != 0 || (*(int *)(temp_v3 + 0x14) >= 0xc)))) &&
             ((((temp_v3 = FUN_002c7cb4(), temp_v3 != 0 && (temp_v3 = FUN_002effbc(), temp_v3 != 0)) &&
               (temp_v3 = objStateNotEnding(), temp_v3 != 0)) &&
              ((temp_v3 = FUN_0039c1f4(), temp_v3 == 0 && (*(int *)(temp_v2 + 0x1374) != 0)))))) {
            temp_v3 = 1;
            FUN_001517b4();
            if (temp_v3 != 0) {
              if (*(char *)(temp_v2 + 0x2018) != '\r') {
                *(unsigned int *)(temp_v2 + 0x1378) = 1;
                *(unsigned int *)(temp_v2 + 0x1374) = 0;
                FUN_0021af2c();
                temp_v4 = 0x100020f;
                eventQueueAddUniqueIfValid(temp_v4);
              }
              goto LAB_00209dc4;
            }
          }
          if (*(char *)(temp_v2 + 0x2018) == '\x03') {
            temp_v3 = 10;
            FUN_001517b4(10,1);
            if (temp_v3 != 0) {
              *(unsigned char *)(temp_v2 + 0x1380) = *(char *)(temp_v2 + 0x1380) != '\x01';
              uiSpriteSetKeyframe(temp_v2 + 0x648,7,0);
              temp_v4 = 0x100020e;
              eventQueueAddUniqueIfValid(temp_v4);
            }
          }
        }
      }
    }
LAB_00209dc4:
    temp_v3 = DAT_00588fd4;
    if (*(char *)(temp_v2 + 0x2024) != '\0') {
      if ((*(unsigned short *)(temp_v2 + 0x13ac) & 2) != 0) {
        temp_v4 = markerKindGetColor(1);
        temp_v3 = DAT_00588fd4;
        if (((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x2017) != '\x0e')) &&
           (((*(char *)(DAT_00588fd4 + 0x2017) != '\a' ||
             (temp_v7 = FUN_0026264c(*(unsigned short *)(DAT_00588fd4 + 0x1390)), temp_v7 != 0)) &&
            (*(char *)(temp_v3 + 0x2017) != '\x10')))) {
          *(unsigned int *)(temp_v3 + 0x1930) = temp_v4;
        }
      }
      else if ((((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x2017) != '\x0e')) &&
               ((*(char *)(DAT_00588fd4 + 0x2017) != '\a' ||
                (temp_v7 = FUN_0026264c(*(unsigned short *)(DAT_00588fd4 + 0x1390)), temp_v7 != 0)))) &&
              (*(char *)(temp_v3 + 0x2017) != '\x10')) {
        *(unsigned int *)(temp_v3 + 0x1930) = 0xffffffff;
      }
    }
    break;
  case 0xb:
    temp_v3 = aocDataBlockResolveEntries();
    if (temp_v3 != 0) {
      temp_v4 = 4;
      gameStateChange(temp_v4);
    }
  }
  temp_v12 = (float)temp_v13;
  if (*(char *)(temp_v2 + 0x2018) != '\n') {
    if (*(int *)(temp_v2 + 0x1368) >= 5) {
      if ((*(int *)(temp_v2 + 0x18) >= 10) && (*(char *)(temp_v2 + 0xd62) != '\0')) {
        FUN_00167458(temp_v2 + 0x7ec,1);
        FUN_00167458(temp_v2 + 0xd64,0);
      }
      else {
        temp_v3 = 0;
        do {
          if (temp_v3 <= *(int *)(temp_v2 + 0x18)) {
            if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
              FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
            }
            temp_v7 = temp_v2 + temp_v3 * 0x8c;
            FUN_00163aa4(temp_v7 + 0x7ec);
            if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
              FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
            }
            FUN_00163aa4(temp_v7 + 0xd64);
          }
          temp_v12 = (float)temp_v13;
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 10);
        *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
      }
      if ((DAT_00588fd4 != 0) && (*(char *)(DAT_00588fd4 + 0x20d1) != '\0')) {
        FUN_003e40d0(DAT_00588fd4 + 0x20d4,0,9);
      }
      FUN_00163aa4(temp_v2 + 0x12dc);
    }
  }
  else if (*(int *)(temp_v2 + 0x1368) >= 9) {
    FUN_00316580(temp_v2 + 0x4a4,1);
    FUN_00316580(temp_v2 + 0x530,0);
    if ((*(int *)(temp_v2 + 0x1c) >= 6) && (temp_v3 = FUN_00163aa4(temp_v2 + 0x5bc), temp_v3 != 0)) {
      *(unsigned char *)(temp_v2 + 0x20) = 1;
    }
    temp_v12 = (float)temp_v13;
    if (*(char *)(temp_v2 + 0x20) == '\0') {
      *(int *)(temp_v2 + 0x1c) = *(int *)(temp_v2 + 0x1c) + 1;
    }
    if ((*(int *)(temp_v2 + 0x18) >= 10) && (*(char *)(temp_v2 + 0xd62) != '\0')) {
      FUN_00167458(temp_v2 + 0x7ec,1);
      FUN_00167458(temp_v2 + 0xd64,0);
    }
    else {
      temp_v3 = 0;
      do {
        if (temp_v3 <= *(int *)(temp_v2 + 0x18)) {
          temp_v7 = temp_v2 + temp_v3 * 0x8c;
          FUN_00167458(temp_v7 + 0x7ec,1);
          FUN_00167458(temp_v7 + 0xd64,0);
        }
        temp_v12 = (float)temp_v13;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 10);
      FUN_00163aa4(temp_v2 + 0x12dc);
      *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + 1;
    }
  }
  if (*(int *)(temp_v2 + 0x1368) >= 8) {
    FUN_00163aa4(temp_v2 + 0x44);
    FUN_00163aa4(temp_v2 + 0xd0);
    temp_v7 = (int)*(short *)(temp_v2 + 0x1390);
    temp_v3 = 0;
    if (temp_v7 != 0x155) {
      temp_v3 = temp_v7 - 0x100;
    }
    if (!(temp_v7 != 0x155 && temp_v3 != 0x56)) {
      FUN_00340a94(temp_v2 + 0x418,1);
    }
    else {
      FUN_00340a94(temp_v2 + 0x418,0);
    }
    if ((0 < *(short *)(temp_v2 + 0x138e)) && (*(int *)(temp_v2 + 0x2028) != 0)) {
      *(int *)(temp_v2 + 0x202c) = *(int *)(temp_v2 + 0x202c) + 2;
      asdAnimGetTrackLastFrame(*(int *)(temp_v2 + 0x2028),0);
      __aeabi_uidivmod(*(unsigned int *)(temp_v2 + 0x202c),(int)temp_v12);
      *(unsigned int *)(temp_v2 + 0x202c) = temp_v10;
    }
    FUN_00163aa4(temp_v2 + 0x648);
  }
  *(int *)(temp_v2 + 0x10) = *(int *)(temp_v2 + 0x10) + 1;
  *(int *)(temp_v2 + 0x14) = *(int *)(temp_v2 + 0x14) + 1;
  return 0;
}

} /* extern "C" */
