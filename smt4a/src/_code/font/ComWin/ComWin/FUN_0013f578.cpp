/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f578` (_code @ 0x13f578, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e220(...);
int FUN_0014e38c(...);
int FUN_001505ac(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001846d0(...);
int FUN_002e6354(...);
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

extern unsigned char LAB_0013f76c; /* 0x13f76c */
extern unsigned char LAB_0013f77c; /* 0x13f77c */
extern unsigned char LAB_0013f790; /* 0x13f790 */
extern int FUN_0015519c(...); /* 0x15519c */
extern int FUN_00156230(...); /* 0x156230 */
extern unsigned char DAT_0052f7bc; /* 0x52f7bc */
extern unsigned char DAT_0052f7d4; /* 0x52f7d4 */
extern unsigned char DAT_0052f804; /* 0x52f804 */
extern unsigned char DAT_0052f84c; /* 0x52f84c */
extern unsigned int *DAT_0057f56c; /* 0x57f56c */

/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0013f578(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  
  if (DAT_0057f56c == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x2cc,1);
    DAT_0057f56c = puVar1;
  }
  puVar1 = DAT_0057f56c;
  FUN_002e6354();
  puVar2 = &LAB_0013f76c;
  FUN_0014e38c(&LAB_0013f76c,3,0,0,FUN_00156230,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0013f77c,0x86,0,0,FUN_0015519c,0,0,puVar2);
  FUN_0015155c(&LAB_0013f790,0xe2,0,0,FUN_0015519c,0,0,*puVar1);
  puVar1 = DAT_0057f56c;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0057f56c + 7);
  FUN_001505ac(puVar1 + 7,&DAT_0052f7bc,0x18,&DAT_0052f7d4,0x30,&DAT_0052f804,0x48,0,0,&DAT_0052f84c
               ,0x1dc);
  puVar3 = puVar1 + 7;
  FUN_0014e220(puVar1 + 0xf,8,0xffffffff,2,puVar3,1);
  FUN_001846d0(puVar1 + 0xf,0);
  FUN_0014e220(puVar1 + 0x32,8,0xffffffff,3,puVar3,1);
  FUN_001846d0(puVar1 + 0x32,2);
  FUN_0014e220(puVar1 + 0x55,8,0x1a8,0xffffffff,puVar3,1);
  FUN_0014e220(puVar1 + 0x78,8,0x1a9,0xffffffff,puVar3,1);
  return;
}

} /* extern "C" */
