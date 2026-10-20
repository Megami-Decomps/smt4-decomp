/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102154` (_code @ 0x102154, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5684(unsigned int, int *);

/* Supplied declaration required: FUN_002e5684. */


void FUN_00102154(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_10;
  
  uStack_10 = param_4;
  FUN_002e5684(param_1,&uStack_10);
  return;
}

} /* extern "C" */
