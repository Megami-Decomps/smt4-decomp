/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d208` (_code @ 0x10d208, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00465064; /* 0x465064 */
extern unsigned int DAT_00465068; /* 0x465068 */


void FUN_0010d208(unsigned int *param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00465064 - 0xc)) = 0;
  DAT_00465064 = *param_1;
  DAT_00465068 = param_1[1];
  return;
}

} /* extern "C" */
