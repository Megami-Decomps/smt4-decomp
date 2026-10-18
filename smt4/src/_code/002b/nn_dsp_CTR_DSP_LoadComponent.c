/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dsp_CTR_DSP_LoadComponent` (_code @ 0x2b59e8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000000; /* 0x0 */
extern unsigned int uRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned int uRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern unsigned int uRam00000014; /* 0x14 */


/* WARNING: Control flow encountered bad instruction data */

void nn_dsp_CTR_DSP_LoadComponent(void)

{
/* irregular: irregular input(s): in_r12, in_r3; 8 native warning(s); review required */
  unsigned int in_r3;
  unsigned int unaff_r4;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  unsigned int unaff_r10;
  unsigned int in_r12;
  
  uRam00000000 = unaff_r4;
  uRam00000004 = in_r3;
  uRam00000008 = unaff_r8;
  uRam0000000c = unaff_r9;
  uRam00000010 = unaff_r10;
  uRam00000014 = in_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
