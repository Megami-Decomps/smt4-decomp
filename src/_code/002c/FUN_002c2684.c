/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2684` (_code @ 0x2c2684, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: while (STORE). */


void FUN_002c2684(unsigned int param_1)

{
/* irregular: irregular input(s): in_cr0, in_s1, in_s2, in_s8; 6 native warning(s); review required */
  int unaff_r4;
  unsigned int in_cr0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  
  do {
    coprocessor_storelong(0,in_cr0,param_1);
    *(unsigned int *)(unaff_r4 + 0x94) = in_s1;
    in_s1 = *(unsigned int *)(unaff_r4 + 0x1a4);
    *(unsigned int *)(unaff_r4 + 0x1b8) = in_s8;
    *(unsigned int *)(unaff_r4 + 0x10) = in_s2;
  } while( 1 );
}
