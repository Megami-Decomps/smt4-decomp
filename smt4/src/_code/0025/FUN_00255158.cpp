/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255158` (_code @ 0x255158, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00282924. */
extern unsigned int btlGetMainState(void);


void FUN_00255158(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = btlGetMainState();
  FUN_00282924(temp_v0,param_1);
  return;
}

} /* extern "C" */
