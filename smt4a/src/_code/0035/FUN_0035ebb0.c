/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ebb0` (_code @ 0x35ebb0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0035ebb0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003283ac(*(short *)(temp_v1 + 0x2002) <= temp_v0);
  return 1;
}
