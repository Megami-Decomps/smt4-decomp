/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263c1c` (_code @ 0x263c1c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c5c04(void);
/* Supplied declaration required: FUN_003100f4. */


void FUN_00263c1c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c5c04();
  temp_v1 = temp_v0;
  FUN_003100f4();
  *(int *)(temp_v1 + 0x14) = temp_v0;
  return;
}
