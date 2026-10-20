/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303d3a` (_code @ 0x303d3a, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strHolderAssignU32(unsigned int, int *, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: strHolderAssignU32. */


void FUN_00303d3a(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_c;
  
  uStack_c = param_2;
  strHolderAssignU32(param_1,&uStack_c,param_3,param_4,param_1);
  return;
}

} /* extern "C" */
