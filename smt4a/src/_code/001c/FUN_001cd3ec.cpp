/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd3ec` (_code @ 0x1cd3ec, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcfb4(unsigned int, int, int, int, int, int);

/* Supplied declaration required: FUN_001bcfb4. */


void FUN_001cd3ec(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_001bcfb4(param_2,param_1 + 0x10,1,0,0,0x80);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
