/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c040` (_code @ 0x28c040, 0x5a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetImageKeyframe(...);
int timerStart(...);
int FUN_002bd954(...);
int spriteStartAnimationByIndex(...);
int paramsInit(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int FUN_002d9384(...);
int drawParameterBlockClear(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_0018f660(...); /* 0x18f660 */
extern int FUN_001a321c(...); /* 0x1a321c */
extern int FUN_001cdef8(...); /* 0x1cdef8 */
extern unsigned char LAB_0028c464; /* 0x28c464 */
extern unsigned char LAB_0028c474; /* 0x28c474 */
extern unsigned char LAB_0028c48c; /* 0x28c48c */
extern unsigned char LAB_0028c4a8; /* 0x28c4a8 */
extern unsigned char LAB_0028c4bc; /* 0x28c4bc */
extern unsigned char DAT_00407728; /* 0x407728 */
extern unsigned char DAT_004077dc; /* 0x4077dc */
extern unsigned char DAT_0040786c; /* 0x40786c */
extern signed char g_gameGlobals; /* 0x44e140 */
extern unsigned char DAT_0044e142; /* 0x44e142 */
extern unsigned int *DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002d9384. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_0028c040(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  if (g_gameGlobals < '\x01') {
    if (DAT_0044e144 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      asdMemAlloc(0x100,0x100,0,0x1ebc,1);
      DAT_0044e144 = puVar1;
    }
    puVar1 = DAT_0044e144;
    memClear();
    puVar2 = &LAB_0028c464;
    asdProcessCreateSimple(&LAB_0028c464,2,0,0,FUN_0018f660,0,0);
    *puVar1 = (unsigned int)puVar2;
    taskCreateDraw(&LAB_0028c474,0x65,0,0,FUN_001cdef8,0,0,puVar2);
    taskCreateDraw(&LAB_0028c48c,0xcc,0,0,FUN_001cdef8,0,0,*puVar1);
    taskCreateDraw(&LAB_0028c4a8,0x7d,0,0,FUN_001a321c,0,0,*puVar1);
    taskCreateDraw(&LAB_0028c4bc,0xdb,0,0,FUN_001a321c,0,0,*puVar1);
    FUN_002d9384();
    puVar1 = DAT_0044e144;
    *(unsigned short *)(DAT_0044e144 + 0x4bf) = 0;
    *(unsigned short *)((int)puVar1 + 0x12fe) = 0xffff;
    *(unsigned char *)((int)puVar1 + 0x12ef) = 0xff;
    *(unsigned char *)(puVar1 + 0x4bd) = 0;
    *(unsigned char *)(puVar1 + 0x7ae) = 1;
    DAT_0044e142 = 0;
    *(unsigned char *)((int)puVar1 + 0x1eb9) = 1;
    *(unsigned char *)((int)puVar1 + 0x1e61) = 1;
    *(unsigned char *)(puVar1 + 0x798) = 0;
    *(unsigned char *)((int)puVar1 + 0x1e63) = 0;
    puVar1[0x4b7] = 1;
    *(unsigned char *)(puVar1 + 0x79f) = 0;
    *(unsigned char *)((int)puVar1 + 0x1e7d) = 0;
    drawParameterBlockClear(puVar1 + 9);
    paramsInit(puVar1 + 9,&DAT_00407728,0xb4,&DAT_004077dc,0x90,0,0,0,0,&DAT_0040786c,0x348);
    FUN_002bd954(puVar1 + 0xe3,0x17,0,puVar1 + 9,1);
    timerStart(puVar1 + 0xe3,1,0);
    FUN_002bd954(puVar1 + 0x106,0x1a,1,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x106,0);
    FUN_002bd954(puVar1 + 0x129,0x1a,2,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x129,1);
    FUN_002bd954(puVar1 + 0x14c,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x14c,2);
    FUN_002bd954(puVar1 + 0x16f,0x1a,0,puVar1 + 9,1);
    timerStart(puVar1 + 0x16f,7,0);
    temp_v0 = 0;
    do {
      FUN_002bd954(puVar1 + temp_v0 * 0x23 + 0x1fb,0x1a,0,puVar1 + 9,1);
      timerStart(puVar1 + temp_v0 * 0x23 + 0x1fb,4,0);
      FUN_002bd954(puVar1 + temp_v0 * 0x23 + 0x359,0x1a,0,puVar1 + 9,1);
      timerStart(puVar1 + temp_v0 * 0x23 + 0x359,1,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 10);
    FUN_002bd954(puVar1 + 0x11,0x1a,0,puVar1 + 9,1);
    timerStart(puVar1 + 0x11,6,0);
    FUN_002bd954(puVar1 + 0x57,0x1a,0,puVar1 + 9,1);
    uiSpriteSetImageKeyframe(puVar1 + 0x57,4,0);
    FUN_002bd954(puVar1 + 0x7a,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x7a,6);
    FUN_002bd954(puVar1 + 0x9d,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x9d,7);
    FUN_002bd954(puVar1 + 0xc0,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0xc0,8);
    FUN_002bd954(puVar1 + 0x34,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x34,4);
    FUN_002bd954(puVar1 + 0x192,0x1a,0,puVar1 + 9,1);
    timerStart(puVar1 + 0x192,8,0);
    FUN_002bd954(puVar1 + 0x1b5,0x1a,0,puVar1 + 9,1);
    timerStart(puVar1 + 0x1b5,9,0);
    FUN_002bd954(puVar1 + 0x1d8,0x1a,0,puVar1 + 9,1);
    spriteStartAnimationByIndex(puVar1 + 0x1d8,5);
  }
  g_gameGlobals = g_gameGlobals + '\x01';
  return;
}

} /* extern "C" */
