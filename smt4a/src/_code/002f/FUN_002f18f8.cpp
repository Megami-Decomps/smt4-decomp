/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f18f8` (_code @ 0x2f18f8, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ff6ca(unsigned int, int *, int, int *);

/* Supplied declaration required: FUN_002ff6ca. */


void FUN_002f18f8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_10;
  int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_002ff6ca(param_1,&uStack_10,0,&uStack_c);
  return;
}

} /* extern "C" */
