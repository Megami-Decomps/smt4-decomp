/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f27c` (_code @ 0x31f27c, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int FUN_001505ac(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_001846d0(...);
int FUN_00184c00(...);
int FUN_001b4a90(...);
int sysMemClear(...);
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

extern int FUN_0022a0a0(...); /* 0x22a0a0 */
extern int FUN_0022a5d8(...); /* 0x22a5d8 */
extern unsigned char LAB_0031f4d8; /* 0x31f4d8 */
extern unsigned char LAB_0031f4e8; /* 0x31f4e8 */
extern unsigned char DAT_0052ded8; /* 0x52ded8 */
extern unsigned char DAT_0052def0; /* 0x52def0 */
extern unsigned char DAT_0052df2c; /* 0x52df2c */
extern signed char DAT_0057f27c; /* 0x57f27c */
extern unsigned int *DAT_0057f280; /* 0x57f280 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0031f27c(unsigned int param_1,unsigned char param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v0;
  
  if (DAT_0057f27c < '\x01') {
    if (DAT_0057f280 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x878,1);
      DAT_0057f280 = puVar2;
    }
    puVar2 = DAT_0057f280;
    sysMemClear();
    puVar3 = &LAB_0031f4d8;
    asdProcessCreateSimple(&LAB_0031f4d8,4,0,0,FUN_0022a0a0,0,0);
    *puVar2 = (unsigned int)puVar3;
    puVar4 = &LAB_0031f4e8;
    taskCreateDraw(&LAB_0031f4e8,0xeb,0,0,FUN_0022a5d8,0,0,puVar3);
    puVar2[1] = (unsigned int)puVar4;
    puVar1 = DAT_0057f280;
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0057f280 + 2);
    FUN_001505ac(puVar1 + 2,&DAT_0052ded8,0x18,&DAT_0052def0,0x3c,0,0,0,0,&DAT_0052df2c,0x118);
    temp_v0 = 0;
    do {
      FUN_0014e188(puVar1 + temp_v0 * 0x23 + 10,0x15,0,puVar1 + 2,1);
      FUN_00184c00(puVar1 + temp_v0 * 0x23 + 10,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0xd);
    FUN_0014e188(puVar1 + 0x168,0x15,0,puVar1 + 2,1);
    FUN_001846d0(puVar1 + 0x168,0);
    FUN_0014e188(puVar1 + 0x18b,0x15,0,puVar1 + 2,1);
    FUN_001846d0(puVar1 + 0x18b,1);
    FUN_0014e188(puVar1 + 0x1ae,0x15,0,puVar1 + 2,1);
    FUN_001846d0(puVar1 + 0x1ae,2);
    FUN_001b4a90(puVar1 + 0x1db,0x1a,0xffffffff);
    puVar1[0x1d1] = 0;
    *(unsigned char *)((int)puVar1 + 0x74d) = 1;
    *(unsigned char *)((int)puVar2 + 0x74e) = param_2;
    puVar2[0x1d4] = param_1;
  }
  DAT_0057f27c = DAT_0057f27c + '\x01';
  return;
}

} /* extern "C" */
