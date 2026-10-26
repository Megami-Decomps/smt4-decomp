/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7e6c` (_code @ 0x2c7e6c, 0x6c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0014e188(...);
int asdProcessCreateSimple(...);

int positionStateSet(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int sysMemClear(...);
int FUN_0034a544(...);
int FUN_003e4140(...);
int paramsClearPacket(...);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_00208c08(...); /* 0x208c08 */
extern int FUN_0022b2d4(...); /* 0x22b2d4 */
extern int FUN_0026c1a8(...); /* 0x26c1a8 */
extern unsigned char LAB_002c8278; /* 0x2c8278 */
extern unsigned char LAB_002c8288; /* 0x2c8288 */
extern unsigned char LAB_002c82a0; /* 0x2c82a0 */
extern unsigned char LAB_002c82bc; /* 0x2c82bc */
extern unsigned char LAB_002c82d0; /* 0x2c82d0 */
extern unsigned char LAB_002c82e4; /* 0x2c82e4 */
extern unsigned char DAT_005362a8; /* 0x5362a8 */
extern unsigned char DAT_0053638c; /* 0x53638c */
extern unsigned char DAT_00536458; /* 0x536458 */
extern signed char g_gameGlobals; /* 0x588fd0 */
extern unsigned char DAT_00588fd2; /* 0x588fd2 */
extern unsigned int *DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: textFormatBuffer. */
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0034a544. */
/* Supplied declaration required: FUN_003e4140. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_002c7e6c(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  
  if (g_gameGlobals < '\x01') {
    if (DAT_00588fd4 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x20f4,1);
      DAT_00588fd4 = puVar1;
    }
    puVar1 = DAT_00588fd4;
    sysMemClear();
    puVar2 = &LAB_002c8278;
    asdProcessCreateSimple(&LAB_002c8278,4,0,0,FUN_00208c08,0,0);
    *puVar1 = (unsigned int)puVar2;
    taskCreateDraw(&LAB_002c8288,0x65,0,0,FUN_0026c1a8,0,0,puVar2);
    taskCreateDraw(&LAB_002c82a0,0xcc,0,0,FUN_0026c1a8,0,0,*puVar1);
    taskCreateDraw(&LAB_002c82bc,0x81,0,0,FUN_0022b2d4,0,0,*puVar1);
    taskCreateDraw(&LAB_002c82d0,0xdd,0,0,FUN_0022b2d4,0,0,*puVar1);
    FUN_0034a544();
    puVar1 = DAT_00588fd4;
    *(unsigned short *)(DAT_00588fd4 + 0x4e3) = 0;
    *(unsigned short *)((int)puVar1 + 0x138e) = 0xffff;
    *(unsigned char *)((int)puVar1 + 0x137f) = 0xff;
    *(unsigned char *)(puVar1 + 0x4e1) = 0;
    *(unsigned char *)(puVar1 + 0x82c) = 1;
    DAT_00588fd2 = 0;
    *(unsigned char *)((int)puVar1 + 0x20b1) = 1;
    textFormatBuffer(puVar1 + 0x81a,&LAB_002c82e4);
    puVar1[0x82a] = 0xffffffff;
    *(unsigned char *)(puVar1 + 0x82b) = 0;
    *(unsigned char *)((int)puVar1 + 0x2012) = 1;
    *(unsigned char *)((int)puVar1 + 0x2011) = 0;
    *(unsigned char *)(puVar1 + 0x805) = 0;
    puVar1[0x4da] = 1;
    *(unsigned char *)(puVar1 + 0x80c) = 0;
    *(unsigned char *)((int)puVar1 + 0x2031) = 0;
    puVar1[0x82f] = 0;
    puVar1[0x830] = 0;
    puVar1[0x831] = 0;
    puVar1[0x833] = 0;
    *(unsigned char *)(puVar1 + 0x83c) = 1;
    asdLoadFileAsyncSimple("status/status.tbb",puVar1 + 0x833,0);
    puVar5 = DAT_00588fd4;
    if (DAT_00588fd4[0x82f] == 0) {
      asdLoadFileAsyncSimple("camp/PartnerData.tbb",DAT_00588fd4 + 0x82f,0);
      asdLoadFileAsyncSimple("camp/partnerDescriptionMsg.mbm",puVar5 + 0x82e,0);
    }
    puVar5 = DAT_00588fd4;
    temp_v0 = spriteHandleCreate(0);
    puVar5[0x82d] = temp_v0;
    FUN_001527d8(temp_v0,0xffffffff);
    positionStateSet(puVar5[0x82d],0,0x646464ff);
    paramsClearPacket(puVar1 + 9);
    paramsInit(reinterpret_cast<UiResourceParameters *>(puVar1 + 9), &DAT_005362a8,0xe4,&DAT_0053638c,0xcc,0,0,0,0,&DAT_00536458,0x3f0);
    FUN_0014e188(puVar1 + 0x106,0xf,0,puVar1 + 9,1);
    uiSpriteSetKeyframe(puVar1 + 0x106,1,0);
    FUN_0014e188(puVar1 + 0x129,0x12,1,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x129,0);
    FUN_0014e188(puVar1 + 0x14c,0x12,2,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x14c,1);
    FUN_0014e188(puVar1 + 0x16f,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x16f,2);
    FUN_0014e188(puVar1 + 0x192,0x12,0,puVar1 + 9,1);
    uiSpriteSetKeyframe(puVar1 + 0x192,7,0);
    temp_v1 = 0;
    do {
      puVar5 = puVar1 + temp_v1 * 0x23 + 0x1fb;
      FUN_0014e188(puVar5,0x12,0,puVar1 + 9,1);
      uiSpriteSetKeyframe(puVar5,0x10,0);
      uiSpriteSetImageKeyframe(puVar5,0xd,0);
      FUN_0014e188(puVar1 + temp_v1 * 0x23 + 0x359,0x12,0,puVar1 + 9,1);
      uiSpriteSetKeyframe(puVar1 + temp_v1 * 0x23 + 0x359,1,0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
    FUN_0014e188(puVar1 + 0x4b7,0x12,0,puVar1 + 9,1);
    FUN_0014e188(puVar1 + 0x11,0x12,0,puVar1 + 9,1);
    uiSpriteSetKeyframe(puVar1 + 0x11,6,0);
    FUN_0014e188(puVar1 + 0x57,0x12,0,puVar1 + 9,1);
    uiSpriteSetImageKeyframe(puVar1 + 0x57,4,0);
    FUN_0014e188(puVar1 + 0x7a,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x7a,6);
    FUN_0014e188(puVar1 + 0x9d,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x9d,7);
    FUN_0014e188(puVar1 + 0xc0,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0xc0,8);
    FUN_0014e188(puVar1 + 0x34,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0x34,4);
    FUN_0014e188(puVar1 + 0x1b5,0x12,0,puVar1 + 9,1);
    uiSpriteSetKeyframe(puVar1 + 0x1b5,8,0);
    FUN_0014e188(puVar1 + 0x1d8,0x12,0,puVar1 + 9,1);
    uiSpriteSetKeyframe(puVar1 + 0x1d8,8,0);
    FUN_0014e188(puVar1 + 0xe3,0x12,0,puVar1 + 9,1);
    uiSpriteSelectAnim(puVar1 + 0xe3,10);
    puVar1 = DAT_00588fd4;
    if (DAT_00588fd4 != (unsigned int *)0x0) {
      *(unsigned char *)((int)DAT_00588fd4 + 0x20d1) = 0;
      FUN_003e4140(puVar1 + 0x835);
    }
  }
  g_gameGlobals = g_gameGlobals + '\x01';
  return;
}

} /* extern "C" */
