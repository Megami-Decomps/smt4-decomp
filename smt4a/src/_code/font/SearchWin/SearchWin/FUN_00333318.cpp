/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333318` (_code @ 0x333318, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int FUN_001505ac(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_001846d0(...);
int sysMemClear(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_0023a5f8(...); /* 0x23a5f8 */
extern unsigned char LAB_0023a9a0; /* 0x23a9a0 */
extern unsigned char DAT_0052fcb4; /* 0x52fcb4 */
extern unsigned char DAT_0052fcd8; /* 0x52fcd8 */
extern unsigned char DAT_0052fcfc; /* 0x52fcfc */
extern unsigned int *DAT_0057f584; /* 0x57f584 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00333318(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  if (DAT_0057f584 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0xe4,1);
    DAT_0057f584 = puVar1;
  }
  puVar1 = DAT_0057f584;
  sysMemClear();
  pcVar2 = "SearchWin Calc";
  asdProcessCreateSimple("SearchWin Calc",3,0,0,&LAB_0023a9a0,0,0);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("SearchWin DrawUpLeft",0x86,0,0,FUN_0023a5f8,0,0,pcVar2);
  taskCreateDraw("SearchWin DrawUpRight",0xe2,0,0,FUN_0023a5f8,0,0,*puVar1);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 6);
  FUN_001505ac(puVar1 + 6,&DAT_0052fcb4,0x24,&DAT_0052fcd8,0x24,0,0,0,0,&DAT_0052fcfc,0x70);
  FUN_0014e188(puVar1 + 0xe,8,0x87,puVar1 + 6,1);
  FUN_001846d0(puVar1 + 0xe,0);
  return;
}

} /* extern "C" */
