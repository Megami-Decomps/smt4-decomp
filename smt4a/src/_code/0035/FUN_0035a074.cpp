/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a074` (_code @ 0x35a074, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int *, unsigned int, int);

/* Supplied declaration required: FUN_002e59f8. */


void FUN_0035a074(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_c;
  unsigned int uStack_8;
  unsigned int uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_002e59f8(&uStack_c,param_1,0xe);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
