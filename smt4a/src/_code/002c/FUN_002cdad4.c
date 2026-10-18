/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdad4` (_code @ 0x2cdad4, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern unsigned char DAT_0052aa1c; /* 0x52aa1c */
extern unsigned char DAT_0052aa4c; /* 0x52aa4c */
extern unsigned char DAT_0052aa94; /* 0x52aa94 */
extern unsigned char DAT_0052aac4; /* 0x52aac4 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c40. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002cdad4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x3f8) = 0;
  *(unsigned int *)(param_1 + 0x3f4) = 0;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_001505ac(param_1,&DAT_0052aa1c,0x30,&DAT_0052aa4c,0x48,&DAT_0052aa94,0x30,0,0,&DAT_0052aac4,
               0x150);
  FUN_0014e188(param_1 + 0x20,0xc,0x29,param_1,0x33);
  *(unsigned short *)(param_1 + 0x5a) = 2;
  FUN_00387240(param_1 + 0x20,0xc,0x29);
  *(unsigned char *)(param_1 + 0x5c) = 1;
  FUN_001846d0(param_1 + 0x20,0);
  FUN_0014e220(param_1 + 0x1c4,0xc,0xffffffff,7,param_1,0x38);
  *(unsigned short *)(param_1 + 0x1fe) = 2;
  FUN_00387240(param_1 + 0x1c4,0xc,0x29);
  *(unsigned char *)(param_1 + 0x200) = 1;
  FUN_001846d0(param_1 + 0x1c4,0);
  FUN_0014e220(param_1 + 0x138,0xc,0xffffffff,2,param_1,0x3d);
  *(unsigned short *)(param_1 + 0x172) = 1;
  *(unsigned char *)(param_1 + 0x174) = 1;
  FUN_00184c40(param_1 + 0x138,200,0x78);
  FUN_001846d0(param_1 + 0x138,2);
  FUN_0014e220(param_1 + 0xac,0xc,0xffffffff,0,param_1,0x47);
  *(unsigned short *)(param_1 + 0xe6) = 2;
  FUN_00387240(param_1 + 0xac,0xc,0x2b);
  *(unsigned char *)(param_1 + 0xe8) = 1;
  FUN_001846d0(param_1 + 0xac,1);
  FUN_0014e188(param_1 + 0x2dc,0xc,9,param_1,0xb);
  FUN_00184758(param_1 + 0x2dc,2,0);
  FUN_0014e188(param_1 + 0x368,0xc,5000,param_1,0x51);
  FUN_00387240(param_1 + 0x368,0xc,0x29);
  FUN_001846d0(param_1 + 0x368,4);
  return;
}
