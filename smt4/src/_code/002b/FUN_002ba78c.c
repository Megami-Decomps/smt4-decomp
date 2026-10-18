/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba78c` (_code @ 0x2ba78c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002ba78c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
