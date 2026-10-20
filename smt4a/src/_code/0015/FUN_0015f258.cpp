/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f258` (_code @ 0x15f258, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001505ac(unsigned int *, unsigned char *, int, unsigned char *, int, unsigned char *, int, int, int, unsigned char *, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(unsigned int *);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_005265b4; /* 0x5265b4 */
extern unsigned char DAT_005266c8; /* 0x5266c8 */
extern unsigned char DAT_00526794; /* 0x526794 */
extern unsigned char DAT_005267e8; /* 0x5267e8 */

/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0015f258(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 0x105) = 1;
  *(unsigned char *)((int)param_1 + 0x415) = 1;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x108);
  FUN_001505ac(param_1 + 0x108,&DAT_005265b4,0x114,&DAT_005266c8,0xcc,&DAT_00526794,0x54,0,0,
               &DAT_005267e8,0x94c);
  return;
}

} /* extern "C" */
