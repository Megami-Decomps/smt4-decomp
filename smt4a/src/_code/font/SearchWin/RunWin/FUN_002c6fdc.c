/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6fdc` (_code @ 0x2c6fdc, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_00208650(); /* 0x208650 */
extern unsigned char LAB_00208984; /* 0x208984 */
extern unsigned char LAB_002c7128; /* 0x2c7128 */
extern unsigned char LAB_002c7138; /* 0x2c7138 */
extern unsigned char DAT_0052fbfc; /* 0x52fbfc */
extern unsigned char DAT_0052fc20; /* 0x52fc20 */
extern unsigned char DAT_0052fc44; /* 0x52fc44 */
extern unsigned int *DAT_0057f580; /* 0x57f580 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002c6fdc(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f580 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0xe4,1);
    DAT_0057f580 = puVar1;
  }
  puVar1 = DAT_0057f580;
  FUN_002e6354();
  puVar2 = &LAB_002c7128;
  FUN_0014e38c(&LAB_002c7128,3,0,0,&LAB_00208984,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_002c7138,0xed,0,0,FUN_00208650,0,0,puVar2);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 6);
  FUN_001505ac(puVar1 + 6,&DAT_0052fbfc,0x24,&DAT_0052fc20,0x24,0,0,0,0,&DAT_0052fc44,0x70);
  FUN_0014e188(puVar1 + 0xe,8,0x87,puVar1 + 6,1);
  FUN_001846d0(puVar1 + 0xe,0);
  return;
}
