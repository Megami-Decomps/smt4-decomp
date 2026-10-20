/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba1f4` (_code @ 0x4ba1f4, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int FUN_00184528(int, int);
int uiSpriteSetImageKeyframe(int, int);
int FUN_004cf7cc(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_00532900; /* 0x532900 */
extern unsigned char DAT_0053290c; /* 0x53290c */
extern unsigned char DAT_00532924; /* 0x532924 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_004cf7cc. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004ba1f4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  *(unsigned char *)(param_1 + 0x9ec) = 0;
  *(unsigned char *)(param_1 + 0x9ed) = 0;
  *(unsigned char *)(param_1 + 0x9ee) = 0;
  *(unsigned int *)(param_1 + 0x1014) = 0;
  *(unsigned int *)(param_1 + 0x1018) = 0;
  *(unsigned int *)(param_1 + 0x1034) = 0;
  *(unsigned int *)(param_1 + 0x1038) = 0;
  *(unsigned int *)(param_1 + 0x103c) = 0;
  *(unsigned int *)(param_1 + 0x1040) = 0;
  *(unsigned int *)(param_1 + 0x1044) = 0;
  *(unsigned int *)(param_1 + 0x1048) = 0;
  *(unsigned int *)(param_1 + 0x104c) = 0;
  *(unsigned int *)(param_1 + 0x1050) = 0;
  *(unsigned int *)(param_1 + 0x1054) = 0;
  *(unsigned int *)(param_1 + 0x1058) = 0;
  *(unsigned int *)(param_1 + 0x105c) = 0;
  *(unsigned int *)(param_1 + 0x1060) = 0;
  *(unsigned int *)(param_1 + 0x1064) = 0;
  *(unsigned int *)(param_1 + 0x1068) = 0;
  *(unsigned int *)(param_1 + 0x106c) = 0;
  *(unsigned int *)(param_1 + 0x101c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1070) = 0;
  *(unsigned int *)(param_1 + 0x1020) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1024) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1028) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x102c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x1030) = 0xffffffff;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x9f0);
  FUN_001505ac(param_1 + 0x9f0,&DAT_00532900,0xc,&DAT_0053290c,0x18,0,0,0,0,&DAT_00532924,0x38);
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0xa10,0x1f,0,param_1 + 0x9f0,0x15);
    uiSpriteSetImageKeyframe(temp_v1 + 0xa10,0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  FUN_0014e188(param_1 + 0xf88,0x1f,0,param_1 + 0x9f0,0x15);
  FUN_004cf7cc(param_1 + 0xa8);
  FUN_00184528(param_1 + 0xa8,0xc);
  return;
}

} /* extern "C" */
