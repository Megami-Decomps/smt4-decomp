/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cedd8` (_code @ 0x2cedd8, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern int FUN_001acdd8(); /* 0x1acdd8 */
extern unsigned char LAB_001ad180; /* 0x1ad180 */
extern unsigned char DAT_00403b80; /* 0x403b80 */
extern unsigned char DAT_00403ba4; /* 0x403ba4 */
extern unsigned char DAT_00403bc8; /* 0x403bc8 */
extern unsigned int *DAT_0043e170; /* 0x43e170 */

/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002cedd8(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  if (DAT_0043e170 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0xe4,1);
    DAT_0043e170 = puVar1;
  }
  puVar1 = DAT_0043e170;
  FUN_002c4938();
  pcVar2 = "SearchWin Calc";
  FUN_002c5788("SearchWin Calc",1,0,0,&LAB_001ad180,0,0);
  *puVar1 = (unsigned int)pcVar2;
  FUN_002c4a08("SearchWin DrawUpLeft",0x81,0,0,FUN_001acdd8,0,0,pcVar2);
  FUN_002c4a08("SearchWin DrawUpRight",0xdf,0,0,FUN_001acdd8,0,0,*puVar1);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 6);
  FUN_002c312c(puVar1 + 6,&DAT_00403b80,0x24,&DAT_00403ba4,0x24,0,0,0,0,&DAT_00403bc8,0x70);
  FUN_002bd954(puVar1 + 0xe,0xe,0x87,puVar1 + 6,1);
  FUN_002bee58(puVar1 + 0xe,0);
  return;
}
