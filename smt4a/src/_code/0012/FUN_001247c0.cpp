/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001247c0` (_code @ 0x1247c0, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3ef4(unsigned int, unsigned int, unsigned int *);

/* Supplied declaration required: FUN_002e3ef4. */


void FUN_001247c0(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int uStack_18;
  int uStack_14;
  
  puVar2 = (unsigned int *)&uStack_14;
  if (*(int *)(*param_2 + 0x18) != 0) {
    temp_v0 = *(unsigned int *)(*param_2 + 0x18);
    puVar2 = (unsigned int *)&uStack_18;
  }
  else {
    temp_v0 = 0x1247f0;
  }
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_002e3ef4(param_1,temp_v0,puVar2);
  return;
}

} /* extern "C" */
