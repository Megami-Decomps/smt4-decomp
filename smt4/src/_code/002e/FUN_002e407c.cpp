/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e407c` (_code @ 0x2e407c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8838(int);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_002b8838. */


unsigned int FUN_002e407c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  *(unsigned int *)(temp_v0 + 0x44a0) = *(unsigned int *)(temp_v0 + 0x44a0) | 0x100000;
  FUN_002b8838(0xdd);
  return 1;
}

} /* extern "C" */
