/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f578` (_code @ 0x13f578, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e220(...);
int asdProcessCreateSimple(...);
int paramsInit(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int uiSpriteSelectAnim(...);
int sysMemClear(...);
int paramsClearPacket(...);

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

extern unsigned char LAB_0013f76c; /* 0x13f76c */
extern unsigned char LAB_0013f77c; /* 0x13f77c */
extern unsigned char LAB_0013f790; /* 0x13f790 */
extern int FUN_0015519c(...); /* 0x15519c */
extern int FUN_00156230(...); /* 0x156230 */
extern unsigned char DAT_0052f7bc; /* 0x52f7bc */
extern unsigned char DAT_0052f7d4; /* 0x52f7d4 */
extern unsigned char DAT_0052f804; /* 0x52f804 */
extern unsigned char DAT_0052f84c; /* 0x52f84c */
extern unsigned int *g_menuState; /* 0x57f56c */

/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_0013f578(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  
  if (g_menuState == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x2cc,1);
    g_menuState = puVar1;
  }
  puVar1 = g_menuState;
  sysMemClear();
  puVar2 = &LAB_0013f76c;
  asdProcessCreateSimple(&LAB_0013f76c,3,0,0,FUN_00156230,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0013f77c,0x86,0,0,FUN_0015519c,0,0,puVar2);
  taskCreateDraw(&LAB_0013f790,0xe2,0,0,FUN_0015519c,0,0,*puVar1);
  puVar1 = g_menuState;
  paramsClearPacket(g_menuState + 7);
  paramsInit(puVar1 + 7,&DAT_0052f7bc,0x18,&DAT_0052f7d4,0x30,&DAT_0052f804,0x48,0,0,&DAT_0052f84c
               ,0x1dc);
  puVar3 = puVar1 + 7;
  FUN_0014e220(puVar1 + 0xf,8,0xffffffff,2,puVar3,1);
  uiSpriteSelectAnim(puVar1 + 0xf,0);
  FUN_0014e220(puVar1 + 0x32,8,0xffffffff,3,puVar3,1);
  uiSpriteSelectAnim(puVar1 + 0x32,2);
  FUN_0014e220(puVar1 + 0x55,8,0x1a8,0xffffffff,puVar3,1);
  FUN_0014e220(puVar1 + 0x78,8,0x1a9,0xffffffff,puVar3,1);
  return;
}

} /* extern "C" */
