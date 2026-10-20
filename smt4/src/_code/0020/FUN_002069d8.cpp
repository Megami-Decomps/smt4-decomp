/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002069d8` (_code @ 0x2069d8, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295eb0(...);
int FUN_002b2650(int, int, int);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int FUN_002beed0(...);
int FUN_002c312c(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, int, int, unsigned char *, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_00401824; /* 0x401824 */
extern unsigned char DAT_00401854; /* 0x401854 */
extern unsigned char DAT_00401884; /* 0x401884 */
extern unsigned char DAT_004018b4; /* 0x4018b4 */

/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_002b2650. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002beed0. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002069d8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x254) = 0;
  *(unsigned int *)(param_1 + 0x250) = 0;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_002c312c(param_1,&DAT_00401824,0x30,&DAT_00401854,0x30,&DAT_00401884,0x30,0,0,&DAT_004018b4,
               0x118);
  FUN_002bd954(param_1 + 0x20,0x14,0x29,param_1,0x33);
  *(unsigned short *)(param_1 + 0x5a) = 2;
  FUN_00295eb0(param_1 + 0x20,0x14,0x29);
  *(unsigned char *)(param_1 + 0x5c) = 1;
  FUN_002bee58(param_1 + 0x20,0);
  FUN_002beed0(param_1 + 0x138,0x14,0xffffffff,2,param_1,0x3d);
  *(unsigned short *)(param_1 + 0x172) = 1;
  *(unsigned char *)(param_1 + 0x174) = 1;
  FUN_002b2650(param_1 + 0x138,200,0x78);
  FUN_002bee58(param_1 + 0x138,2);
  FUN_002beed0(param_1 + 0xac,0x14,0xffffffff,0,param_1,0x47);
  *(unsigned short *)(param_1 + 0xe6) = 2;
  FUN_00295eb0(param_1 + 0xac,0x14,0x2b);
  *(unsigned char *)(param_1 + 0xe8) = 1;
  FUN_002bee58(param_1 + 0xac,1);
  FUN_002bd954(param_1 + 0x1c4,0x14,9,param_1,0xb);
  timerStart(param_1 + 0x1c4,2,0);
  return;
}

} /* extern "C" */
