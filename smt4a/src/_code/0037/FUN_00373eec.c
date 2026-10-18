/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373eec` (_code @ 0x373eec, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00373eec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_00236038(0);
  FUN_003283ac(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x23a4));
  return 1;
}
