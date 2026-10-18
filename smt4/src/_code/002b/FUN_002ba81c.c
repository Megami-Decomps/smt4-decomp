/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba81c` (_code @ 0x2ba81c, 0x52 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000000; /* 0x0 */
extern unsigned int uRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned int uRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern unsigned char uRam00000414; /* 0x414 */
extern unsigned char uRam00000415; /* 0x415 */
extern unsigned int uRam00000418; /* 0x418 */
extern unsigned int uRam0000041c; /* 0x41c */

/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002babf8) */

void FUN_002ba81c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  if (((param_1 | param_2) & 3) == 0) {
    uRam00000000 = 0;
    uRam00000004 = 0;
    uRam00000008 = 0;
    uRam0000000c = 0;
    uRam00000010 = 0;
    uRam00000414 = 1;
    uRam00000415 = 1;
    uRam0000041c = 0;
    uRam00000418 = 0;
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object
              (0x420,0,param_1 | param_2,(param_3 + param_1) - 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
