/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b668c` (_code @ 0x2b668c, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float fRam00000018; /* 0x18 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */


void FUN_002b668c(void)

{
/* irregular: irregular input(s): in_cr15, in_s4, in_s6; 4 native warning(s); review required */
  unsigned int in_cr15;
  float in_s4;
  float in_s6;
  
  fRam00000018 = in_s4 * in_s6;
  coprocessor_store(0xf,in_cr15,0x78);
  return;
}
