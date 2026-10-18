/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003810c4` (_code @ 0x3810c4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003810c4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_003f0e20(temp_v2,temp_v0);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v2 + 0x3f4) = temp_v1 != 0;
  }
  return 1;
}
