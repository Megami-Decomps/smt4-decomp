/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001409e4` (_code @ 0x1409e4, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_0014e38c(...);
int FUN_001505ac(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001846d0(...);
int FUN_002e6354(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00140b5c; /* 0x140b5c */
extern unsigned char LAB_00140b70; /* 0x140b70 */
extern unsigned char LAB_00140b84; /* 0x140b84 */
extern int FUN_00155840(...); /* 0x155840 */
extern int FUN_001563dc(...); /* 0x1563dc */
extern unsigned char DAT_0052fa2c; /* 0x52fa2c */
extern unsigned char DAT_0052fa44; /* 0x52fa44 */
extern unsigned char DAT_0052fa5c; /* 0x52fa5c */
extern unsigned int *DAT_0057f570; /* 0x57f570 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_001409e4(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f570 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0xbc,1);
    DAT_0057f570 = puVar1;
  }
  puVar1 = DAT_0057f570;
  FUN_002e6354();
  puVar2 = &LAB_00140b5c;
  FUN_0014e38c(&LAB_00140b5c,3,0,0,FUN_001563dc,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_00140b70,0x86,0,0,FUN_00155840,0,0,puVar2);
  FUN_0015155c(&LAB_00140b84,0xe2,0,0,FUN_00155840,0,0,*puVar1);
  puVar1 = DAT_0057f570;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0057f570 + 4);
  FUN_001505ac(puVar1 + 4,&DAT_0052fa2c,0x18,&DAT_0052fa44,0x18,0,0,0,0,&DAT_0052fa5c,0x70);
  FUN_0014e188(puVar1 + 0xc,8,0x87,puVar1 + 4,1);
  FUN_001846d0(puVar1 + 0xc,0);
  return;
}

} /* extern "C" */
