/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202940` (_code @ 0x202940, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd954(...);
int FUN_002bee58(...);
int FUN_002c312c(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

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

extern int FUN_0018f278(...); /* 0x18f278 */
extern unsigned char LAB_0018f5ac; /* 0x18f5ac */
extern unsigned char LAB_00202a8c; /* 0x202a8c */
extern unsigned char LAB_00202a9c; /* 0x202a9c */
extern unsigned char DAT_00403ac8; /* 0x403ac8 */
extern unsigned char DAT_00403aec; /* 0x403aec */
extern unsigned char DAT_00403b10; /* 0x403b10 */
extern unsigned int *DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00202940(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e158 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0xe4,1);
    DAT_0043e158 = puVar1;
  }
  puVar1 = DAT_0043e158;
  FUN_002c4938();
  puVar2 = &LAB_00202a8c;
  FUN_002c5788(&LAB_00202a8c,1,0,0,&LAB_0018f5ac,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_00202a9c,0xe9,0,0,FUN_0018f278,0,0,puVar2);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 6);
  FUN_002c312c(puVar1 + 6,&DAT_00403ac8,0x24,&DAT_00403aec,0x24,0,0,0,0,&DAT_00403b10,0x70);
  FUN_002bd954(puVar1 + 0xe,0xe,0x87,puVar1 + 6,1);
  FUN_002bee58(puVar1 + 0xe,0);
  return;
}

} /* extern "C" */
