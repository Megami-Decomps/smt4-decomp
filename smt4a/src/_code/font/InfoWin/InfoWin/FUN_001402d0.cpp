/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001402d0` (_code @ 0x1402d0, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int FUN_001505ac(...);
int FUN_00151408(...);
int taskCreateDraw(...);
int FUN_001527d8(...);
int asdMemoryAllocTracked(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int sysMemClear(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

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

extern unsigned char LAB_00140510; /* 0x140510 */
extern unsigned char LAB_00140524; /* 0x140524 */
extern unsigned char LAB_00140538; /* 0x140538 */
extern int FUN_00155ca8(...); /* 0x155ca8 */
extern int FUN_00156478(...); /* 0x156478 */
extern unsigned char DAT_0052facc; /* 0x52facc */
extern unsigned char DAT_0052fb14; /* 0x52fb14 */
extern unsigned int *g_infoWin; /* 0x57f574 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_001402d0(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (g_infoWin == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x330,1);
    g_infoWin = puVar1;
  }
  puVar1 = g_infoWin;
  sysMemClear();
  puVar2 = &LAB_00140510;
  asdProcessCreateSimple(&LAB_00140510,3,0,0,FUN_00156478,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00140524,0x86,0,0,FUN_00155ca8,0,0,puVar2);
  taskCreateDraw(&LAB_00140538,0xe2,0,0,FUN_00155ca8,0,0,*puVar1);
  puVar1 = g_infoWin;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(g_infoWin + 0xd);
  FUN_001505ac(puVar1 + 0xd,&DAT_0052facc,0x48,&DAT_0052fb14,0x18,0,0,0,0,0,0);
  FUN_0014e188(puVar1 + 0x15,8,0x87,puVar1 + 0xd,1);
  uiSpriteSetKeyframe(puVar1 + 0x15,0);
  FUN_0014e188(puVar1 + 0x5b,8,0x87,puVar1 + 0xd,1);
  uiSpriteSetKeyframe(puVar1 + 0x5b,2,0);
  FUN_0014e188(puVar1 + 0x38,0x1b,4000,puVar1 + 0xd,1);
  uiSpriteSetKeyframe(puVar1 + 0x38,3,0);
  uiSpriteSetImageKeyframe(puVar1 + 0x38,0);
  temp_v0 = spriteHandleCreate(0);
  puVar1[0xca] = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_00151408(puVar1[0xca],0,0x646464ff);
  puVar1[4] = 0x1e;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xa1] = 0;
  *(unsigned char *)(puVar1 + 0xcb) = 0;
  *(unsigned char *)((int)puVar1 + 0x32d) = 0;
  return;
}

} /* extern "C" */
