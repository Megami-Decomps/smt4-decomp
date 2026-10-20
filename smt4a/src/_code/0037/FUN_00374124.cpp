/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00374124` (_code @ 0x374124, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00374124(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003283ac((*(unsigned int *)(temp_v1 + 0x4cc8) & (1 << (temp_v0 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
