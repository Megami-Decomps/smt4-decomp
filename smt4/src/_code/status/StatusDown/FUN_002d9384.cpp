/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d9384` (_code @ 0x2d9384, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd81c(...);
int FUN_002bd82c(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int FUN_002beed0(...);
int paramsInit(...);
int __aeabi_memset4(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_001ca748(...); /* 0x1ca748 */
extern int FUN_001cca14(...); /* 0x1cca14 */
extern unsigned char LAB_002d9654; /* 0x2d9654 */
extern unsigned char LAB_002d9664; /* 0x2d9664 */
extern unsigned char DAT_00407bc0; /* 0x407bc0 */
extern unsigned char DAT_00407c08; /* 0x407c08 */
extern unsigned char DAT_00407c50; /* 0x407c50 */
extern unsigned char DAT_00407c68; /* 0x407c68 */
extern unsigned int *g_statusDown; /* 0x44e190 */

/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int asdTextCreate(unsigned int);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002beed0. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002d9384(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  
  if (g_statusDown == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x2394,1);
    g_statusDown = puVar1;
  }
  puVar1 = g_statusDown;
  memClear();
  puVar2 = &LAB_002d9654;
  asdProcessCreateSimple(&LAB_002d9654,2,0,0,FUN_001ca748,0,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_002d9664;
  taskCreateDraw(&LAB_002d9664,0xe7,0,0,FUN_001cca14,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar1 = g_statusDown;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(g_statusDown + 2);
  paramsInit(puVar1 + 2,&DAT_00407bc0,0x48,&DAT_00407c08,0x48,&DAT_00407c50,0x18,0,0,&DAT_00407c68
               ,0x134);
  FUN_002bd954(puVar1 + 10,0x1a,1000,puVar1 + 2,1);
  timerStart(puVar1 + 10,0);
  FUN_002bd954(puVar1 + 0x2d,0x1a,1000,puVar1 + 2,1);
  FUN_002bee58(puVar1 + 0x2d,0);
  FUN_002bd954(puVar1 + 0x50,0x1a,1000,puVar1 + 2,1);
  FUN_002bee58(puVar1 + 0x50,1);
  FUN_002bd954(puVar1 + 0x73,0x1a,1000,puVar1 + 2,1);
  timerStart(puVar1 + 0x73,4,0);
  FUN_002bd954(puVar1 + 0x96,0x1a,1000,puVar1 + 2,1);
  timerStart(puVar1 + 0x96,5,0);
  FUN_002bd954(puVar1 + 0xb9,0x1a,1000,puVar1 + 2,1);
  timerStart(puVar1 + 0xb9,0);
  FUN_002beed0(puVar1 + 0xdc,0x1a,0xffffffff,0x1c,puVar1 + 2,0xc9);
  FUN_002bee58(puVar1 + 0xdc,2);
  *(unsigned short *)((int)puVar1 + 0x3aa) = 2;
  temp_v0 = asdTextCreate(0);
  puVar1[0x8a8] = temp_v0;
  FUN_002bd82c(temp_v0,0xff);
  FUN_002bd81c(puVar1[0x8a8],0,0x646464ff);
  __aeabi_memset4(puVar1 + 0x10b,0x29,0xffffffff);
  *(unsigned char *)((int)puVar1 + 0x2392) = 1;
  return;
}

} /* extern "C" */
