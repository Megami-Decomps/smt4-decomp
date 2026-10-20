/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003251e4` (_code @ 0x3251e4, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00242914(unsigned int, int);

/* Supplied declaration required: FUN_00242914. */
extern int btlGetMainState(void);


unsigned int FUN_003251e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00242914(*param_1,1);
  temp_v0 = btlGetMainState();
  *(unsigned int *)(temp_v0 + 0x44a0) = *(unsigned int *)(temp_v0 + 0x44a0) | 0x20000000;
  return 1;
}

} /* extern "C" */
