/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ab804` (_code @ 0x2ab804, 0x760 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGetEntries(...);

int FUN_0013c174(...);
int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdOperatorNew(...);
int asdMemoryAllocTracked(...);
int memAlloc(...);
int resultReportIfFailed(...);
int FUN_00178b04(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int FUN_00184b90(...);
int __aeabi_memset4(...);
int FUN_001cd3ec(...);
int asdLoadFileSyncDefault(...);
int rebuildFusionCatalogLists(...);
int FUN_00275bc8(...);
int FUN_002e3140(...);
int sysMemClear(...);
int FUN_002fb0d4(...);
int FUN_0031416c(...);
int mapSettings5BSetValueIfActive(...);
int loadSlotEnsureLoaded(...);
int _ZN9Obj557af8C1EPK21AsdAnimCameraResource(...);
int gameFlagSetValue(...);
int fusionListAvailableSpecialRecipes(...);
int fusionRaceSelectionInitialize(...);
int paramsClearPacket(...);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int FUN_001f5294(...); /* 0x1f5294 */
extern int FUN_0023b8b0(...); /* 0x23b8b0 */
extern int FUN_0028625c(...); /* 0x28625c */
extern unsigned char LAB_002abbd8; /* 0x2abbd8 */
extern unsigned char LAB_002abc10; /* 0x2abc10 */
extern unsigned char LAB_002abc20; /* 0x2abc20 */
extern unsigned char LAB_002abf64; /* 0x2abf64 */
extern unsigned char LAB_002abf74; /* 0x2abf74 */
extern unsigned char LAB_002abfa0; /* 0x2abfa0 */
extern unsigned char LAB_00514a54; /* 0x514a54 */
extern unsigned char LAB_00514b08; /* 0x514b08 */
extern unsigned char LAB_00514b80; /* 0x514b80 */
extern unsigned char DAT_0052ef50; /* 0x52ef50 */
extern unsigned char DAT_0052efd4; /* 0x52efd4 */
extern unsigned char DAT_0052f034; /* 0x52f034 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int *g_unite; /* 0x57f290 */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: resultReportIfFailed. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_00184b90. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern int gameGetSlotRecord(void);
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
extern int FUN_0026140c(void);
/* Supplied declaration required: rebuildFusionCatalogLists. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002e3140. */
extern int FUN_002e50d4(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002fb0d4. */
/* Supplied declaration required: FUN_0031416c. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: mapSettings5BSetValueIfActive. */
/* Supplied declaration required: loadSlotEnsureLoaded. */
/* Supplied declaration required: _ZN9Obj557af8C1EPK21AsdAnimCameraResource. */
/* Supplied declaration required: gameFlagSetValue. */
extern int modelListInit(void);
extern int bitsAt60Test(int, unsigned int);
extern int FUN_004dad8c(void);
/* Supplied declaration required: fusionListAvailableSpecialRecipes. */
/* Supplied declaration required: fusionRaceSelectionInitialize. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_002ab804(void)

{
/* irregular: 34 native warning(s); review required */
  unsigned short temp_v0;
  int *piVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char *temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  unsigned char temp_v12 [16];
  
  if (g_unite == (int *)0x0) {
    piVar2 = (int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x92c0,1);
    g_unite = piVar2;
  }
  piVar2 = g_unite;
  sysMemClear();
  piVar2[0x2428] = -1;
  mapSettings5BSetValueIfActive(0);
  puVar3 = &LAB_002abc10;
  asdProcessCreateSimple(&LAB_002abc10,4,0,0,FUN_001f5294,0,0);
  piVar2[0xfe] = (int)puVar3;
  taskCreateDraw(&LAB_002abc20,0xea,0,0,FUN_0023b8b0,0,0,puVar3);
  temp_v1 = 0x1b8;
  asdOperatorNew();
  if (temp_v1 != 0) {
    fusionRaceSelectionInitialize();
  }
  *piVar2 = temp_v1;
  temp_v1 = FUN_004dad8c();
  piVar2[0x2429] = temp_v1;
  *(unsigned char *)(piVar2 + 0x2499) = 0;
  temp_v1 = 0x100;
  memAlloc(0x100,0x100,0,0x1000,0x1000,1);
  piVar2[0x249d] = temp_v1;
  puVar5 = (unsigned int *)0x18;
  asdOperatorNew();
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(unsigned char *)(puVar5 + 4) = 0;
  }
  piVar2[0x249a] = (int)puVar5;
  resultReportIfFailed();
  temp_v8 = 4;
  temp_v9 = &LAB_00514a54;
  piVar6 = piVar2 + 0x249b;
  temp_v10 = &LAB_00514b80;
  temp_v11 = &LAB_00514b08;
  temp_v6 = piVar2;
  FUN_002fb0d4(piVar6,&temp_v8,FUN_0028625c,&temp_v6,
               *(int *)(piVar2[0x249a] + 0xc) + *(int *)(piVar2[0x249a] + 8),0x11,0xfffffffe,0);
  if (((unsigned int)piVar6 & 0x7e00000) != 0x600000 && (int)piVar6 < 0) {
    FUN_002e3140();
  }
  temp_v1 = gameFlagIsSet(0x418);
  if (temp_v1 == 0) {
    temp_v1 = FUN_0026140c();
    *(unsigned short *)(temp_v1 + 0x20) = 0xffff;
    *(unsigned short *)(temp_v1 + 0x22) = 0xffff;
    *(unsigned short *)(temp_v1 + 0x24) = 0;
    *(unsigned short *)(temp_v1 + 0x26) = 0;
    *(unsigned short *)(temp_v1 + 0x28) = 0;
    *(unsigned char *)(temp_v1 + 0x43) = 0;
    *(unsigned short *)(temp_v1 + 0x2a) = 0;
    *(unsigned short *)(temp_v1 + 0x2c) = 0;
    *(unsigned short *)(temp_v1 + 0x2e) = 0xffff;
    *(unsigned char *)(temp_v1 + 0x33) = 0;
    *(unsigned char *)(temp_v1 + 0x34) = 0;
    *(unsigned char *)(temp_v1 + 0x35) = 0xff;
    *(unsigned char *)(temp_v1 + 0x37) = 0;
    *(unsigned char *)(temp_v1 + 0x36) = *(unsigned char *)(temp_v1 + 0x36) & 0xfc;
    rebuildFusionCatalogLists();
  }
  temp_v1 = FUN_0026140c();
  if (-1 < *(short *)(temp_v1 + 0x20)) {
    if (*(short *)(temp_v1 + 0x24) == 0) {
      *(unsigned short *)(temp_v1 + 0x20) = 0xffff;
    }
    else {
      temp_v2 = gameGetSlotRecord();
      if ((*(short *)(temp_v2 + 0x62) != *(short *)(temp_v1 + 0x24)) ||
         (temp_v2 = bitsAt60Test(temp_v2,10), temp_v2 != 0)) {
        *(unsigned short *)(temp_v1 + 0x20) = 0xffff;
        *(unsigned short *)(temp_v1 + 0x24) = 0;
      }
    }
  }
  if (-1 < *(short *)(temp_v1 + 0x22)) {
    if (*(short *)(temp_v1 + 0x26) == 0) {
      *(unsigned short *)(temp_v1 + 0x22) = 0xffff;
    }
    else {
      temp_v2 = gameGetSlotRecord();
      if (*(short *)(temp_v2 + 0x62) != *(short *)(temp_v1 + 0x26)) {
        *(unsigned short *)(temp_v1 + 0x22) = 0xffff;
        *(unsigned short *)(temp_v1 + 0x26) = 0;
      }
    }
  }
  __aeabi_memset4(piVar2 + 0x10e,0xa0,0xffffffff);
  rebuildFusionCatalogLists();
  paramsClearPacket(piVar2 + 1);
  paramsInit(reinterpret_cast<UiResourceParameters *>(piVar2 + 1),&DAT_0052ef50,0x84,&DAT_0052efd4,0x60,0,0,0,0,&DAT_0052f034,0x1dc);
  FUN_0014e188(piVar2 + 9,0x1a,0,piVar2 + 1,1);
  uiSpriteSelectAnim(piVar2 + 9,0);
  FUN_0014e188(piVar2 + 0x2c,0x1a,0,piVar2 + 1,1);
  uiSpriteSelectAnim(piVar2 + 0x2c,4);
  FUN_0014e188(piVar2 + 0x4f,0x1a,0,piVar2 + 1,1);
  uiSpriteSelectAnim(piVar2 + 0x4f,1);
  FUN_0014e188(piVar2 + 0x72,0x1a,0,piVar2 + 1,1);
  FUN_00184b90(piVar2,1);
  FUN_0014e188(piVar2 + 0x95,0x1a,0,piVar2 + 1,1);
  uiSpriteSetKeyframe(piVar2 + 0x95,5,0);
  FUN_0014e188(piVar2 + 0xb8,0x1a,0,piVar2 + 1,1);
  uiSpriteSelectAnim(piVar2 + 0xb8,2);
  FUN_0014e188(piVar2 + 0xdb,0x1a,0,piVar2 + 1,1);
  uiSpriteSelectAnim(piVar2 + 0xdb,3);
  loadSlotEnsureLoaded(0x24);
  loadSlotEnsureLoaded(0x22);
  piVar2[0x10d] = -1;
  puVar3 = &LAB_002abf64;
  piVar2[0x122] = -1;
  asdLoadFileSyncDefault();
  piVar2[0x109] = (int)puVar3;
  puVar3 = &LAB_002abf74;
  asdLoadFileSyncDefault();
  piVar2[0x10a] = (int)puVar3;
  FUN_00275bc8();
  piVar2[0x10b] = (int)puVar3;
  temp_v1 = lmapSceneGetScript();
  if ((temp_v1 != 0) || (temp_v1 = lmapMainIsRunning(), temp_v1 != 0)) {
    temp_v6 = (int *)0x0;
    temp_v7 = 0;
    FUN_0031416c(0,0,0,0,0,0,0xff,0,0,0xff);
  }
  FUN_0013c174(&LAB_002abfa0,temp_v12,1);
  temp_v1 = 0x48;
  FUN_00178b04(0x48,&LAB_002abbd8,0x1d13);
  if (temp_v1 != 0) {
    _ZN9Obj557af8C1EPK21AsdAnimCameraResource();
  }
  piVar2[0x2484] = temp_v1;
  temp_v2 = 0x20;
  FUN_00178b04(0x20,&LAB_002abbd8,0x1d15);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = modelListInit();
  }
  piVar2[0x2482] = temp_v1;
  FUN_001cd3ec();
  temp_v2 = 0x20;
  FUN_00178b04(0x20,&LAB_002abbd8,0x1d18);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = modelListInit();
  }
  piVar2[0x2483] = temp_v1;
  FUN_001cd3ec();
  *(unsigned int *)(g_handleRegistry + 0x34) = *(unsigned int *)(g_handleRegistry + 0x34) | 1;
  piVar2[0x2497] = 0;
  piVar2[0x2498] = 0;
  temp_v1 = FUN_002e50d4();
  piVar2[0x107] = temp_v1;
  temp_v1 = *piVar2;
  fusionListAvailableSpecialRecipes(temp_v1,piVar2 + 0x23df);
  gameFlagSetValue(0x52c,temp_v1 != 0,1);
  piVar2 = g_unite;
  *(unsigned short *)(g_unite + 0x24af) = 0;
  *(unsigned short *)((int)piVar2 + 0x92be) = 0;
  temp_v3 = dataTableGet(0x24,0);
  dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v3);
  temp_v5 = 0;
  if ((int)temp_v5 < temp_v1) {
    do {
      temp_v3 = dataTableGet(0x24,0);
      temp_v2 = dataTableGetEntries();
      temp_v4 = dataTableGetCount(temp_v3);
      if ((temp_v5 < temp_v4) && (*(char *)(temp_v2 + temp_v5 * 0x94) == '\x0f')) {
        temp_v3 = dataTableGet(0x24,0);
        temp_v2 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v3);
        if ((temp_v5 < temp_v4) && (*(short *)(temp_v2 + temp_v5 * 0x94 + 4) != 0)) {
          temp_v3 = dataTableGet(0x24,0);
          temp_v2 = dataTableGetEntries();
          temp_v4 = dataTableGetCount(temp_v3);
          if (temp_v5 < temp_v4) {
            temp_v0 = *(unsigned short *)(temp_v2 + temp_v5 * 0x94 + 4);
          }
          else {
            temp_v0 = 0;
          }
          *(unsigned short *)(piVar2 + 0x24af) = temp_v0;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < temp_v1);
  }
  return;
}

} /* extern "C" */
