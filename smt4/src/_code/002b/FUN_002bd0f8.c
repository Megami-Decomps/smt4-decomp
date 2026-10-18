/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd0f8` (_code @ 0x2bd0f8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000004; /* 0x4 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd0f8(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int unaff_r6;
  
  if (param_2 != 0 && param_3 != 0) {
    for (temp_v0 = 0; *(short *)(param_3 + temp_v0 * 2) != 0; temp_v0 = temp_v0 + 1) {
    }
    uRam00000004 = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned short *)(unaff_r6 + 2) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
