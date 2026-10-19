/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba78c` (_code @ 0x2ba78c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern unsigned char DAT_003ff2dc; /* 0x3ff2dc */
extern unsigned char DAT_003ff354; /* 0x3ff354 */
extern unsigned char DAT_003ff39c; /* 0x3ff39c */
extern unsigned char DAT_003ff3f0; /* 0x3ff3f0 */

/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002ba78c(unsigned int *param_1)

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
  FUN_002c312c(param_1 + 0x108,&DAT_003ff2dc,0x78,&DAT_003ff354,0x48,&DAT_003ff39c,0x54,0,0,
               &DAT_003ff3f0,0x310);
  return;
}
