/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010aff8` (_code @ 0x10aff8, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern unsigned char LAB_0010b1d8; /* 0x10b1d8 */
extern unsigned char LAB_0010b1ec; /* 0x10b1ec */
extern unsigned char LAB_0010b200; /* 0x10b200 */
extern int FUN_0011aef0(); /* 0x11aef0 */
extern unsigned char LAB_0011b29c; /* 0x11b29c */
extern unsigned char DAT_00403a04; /* 0x403a04 */
extern unsigned int *DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0010aff8(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (DAT_0043e128 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x1bc,1);
    DAT_0043e128 = puVar1;
  }
  puVar1 = DAT_0043e128;
  FUN_002c4938();
  puVar2 = &LAB_0010b1d8;
  FUN_002c5788(&LAB_0010b1d8,1,0,0,&LAB_0011b29c,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_0010b1ec,0x81,0,0,FUN_0011aef0,0,0,puVar2);
  FUN_002c4a08(&LAB_0010b200,0xdf,0,0,FUN_0011aef0,0,0,*puVar1);
  puVar1 = DAT_0043e128;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0043e128 + 9);
  FUN_002c312c(puVar1 + 9,&DAT_00403a04,0x24,0,0,0,0,0,0,0,0);
  FUN_002bd954(puVar1 + 0x11,0xe,0x87,puVar1 + 9,1);
  FUN_002bd8e8(puVar1 + 0x11,0);
  FUN_002bd954(puVar1 + 0x34,0xe,0x87,puVar1 + 9,1);
  FUN_002bd8e8(puVar1 + 0x34,2,0);
  temp_v0 = FUN_002bd838(0);
  puVar1[0x6e] = temp_v0;
  FUN_002bd82c(temp_v0,0xffffffff);
  FUN_002bd81c(puVar1[0x6e],0,0x646464ff);
  puVar1[4] = 0x1e;
  return;
}
