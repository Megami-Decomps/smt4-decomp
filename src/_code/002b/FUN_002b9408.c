/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9408` (_code @ 0x2b9408, 0x1e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c6388. */
extern int FUN_002c68e2(unsigned int, unsigned int);


void FUN_002b9408(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_3 == 0) {
    param_3 = FUN_002c68e2(0,4);
  }
  FUN_002c6388(0,param_1,param_2,param_3);
  return;
}
