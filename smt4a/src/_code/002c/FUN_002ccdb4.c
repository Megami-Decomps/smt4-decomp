/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ccdb4` (_code @ 0x2ccdb4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022a030(void);
/* Supplied declaration required: FUN_004009d0. */


void FUN_002ccdb4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0022a030();
  if (temp_v0 != 0) {
    FUN_004009d0(param_2,0);
  }
  return;
}
