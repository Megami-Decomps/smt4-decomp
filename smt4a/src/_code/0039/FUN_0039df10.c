/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039df10` (_code @ 0x39df10, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003ea2b0. */


void FUN_0039df10(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003ea2b0(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v1 = FUN_0014aa78();
    FUN_003283ac(*(unsigned int *)(temp_v1 + 0x4554));
  }
  return;
}
