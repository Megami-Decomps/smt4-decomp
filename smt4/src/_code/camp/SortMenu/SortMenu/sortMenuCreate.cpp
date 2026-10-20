/* NON_MATCHING: romwright 0.5.0 decompilation of `sortMenuCreate` (_code @ 0x29e39c, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetImageKeyframe(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int FUN_002c312c(...);
int __aeabi_memset4(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern int FUN_001a1f8c(...); /* 0x1a1f8c */
extern int FUN_001a26dc(...); /* 0x1a26dc */
extern unsigned char LAB_0029e5fc; /* 0x29e5fc */
extern unsigned char LAB_0029e60c; /* 0x29e60c */
extern unsigned char DAT_00402d1c; /* 0x402d1c */
extern unsigned char DAT_00402d34; /* 0x402d34 */
extern unsigned char DAT_00402d58; /* 0x402d58 */
extern signed char g_useCounter; /* 0x43dd20 */
extern unsigned int *DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void sortMenuCreate(unsigned int param_1,unsigned char param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v0;
  
  if (g_useCounter < '\x01') {
    if (DAT_0043dd24 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x100;
      asdMemAlloc(0x100,0x100,0,0x878,1);
      DAT_0043dd24 = puVar2;
    }
    puVar2 = DAT_0043dd24;
    memClear();
    puVar3 = &LAB_0029e5fc;
    asdProcessCreateSimple(&LAB_0029e5fc,2,0,0,FUN_001a1f8c,0,0);
    *puVar2 = (unsigned int)puVar3;
    puVar4 = &LAB_0029e60c;
    taskCreateDraw(&LAB_0029e60c,0xe7,0,0,FUN_001a26dc,0,0,puVar3);
    puVar2[1] = (unsigned int)puVar4;
    puVar1 = DAT_0043dd24;
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0043dd24 + 2);
    FUN_002c312c(puVar1 + 2,&DAT_00402d1c,0x18,&DAT_00402d34,0x24,0,0,0,0,&DAT_00402d58,0xa8);
    temp_v0 = 0;
    do {
      FUN_002bd954(puVar1 + temp_v0 * 0x23 + 10,0x1e,0,puVar1 + 2,1);
      uiSpriteSetImageKeyframe(puVar1 + temp_v0 * 0x23 + 10,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0xd);
    FUN_002bd954(puVar1 + 0x168,0x1e,0,puVar1 + 2,1);
    FUN_002bee58(puVar1 + 0x168,0);
    FUN_002bd954(puVar1 + 0x18b,0x1e,0,puVar1 + 2,1);
    timerStart(puVar1 + 0x18b,0);
    FUN_002bd954(puVar1 + 0x1ae,0x1e,0,puVar1 + 2,1);
    FUN_002bee58(puVar1 + 0x1ae,1);
    __aeabi_memset4(puVar1 + 0x1db,0x1a,0xffffffff);
    puVar1[0x1d1] = 0;
    *(unsigned char *)((int)puVar1 + 0x74d) = 1;
    *(unsigned char *)((int)puVar2 + 0x74e) = param_2;
    puVar2[0x1d4] = param_1;
  }
  g_useCounter = g_useCounter + '\x01';
  return;
}

} /* extern "C" */
