/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d3b8` (_code @ 0x39d3b8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0039d3b8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003eaf20();
  if (temp_v1 != 0) {
    FUN_003283ac(temp_v0 <= (int)(unsigned int)*(unsigned short *)(temp_v1 + 0x27a));
  }
  else {
    FUN_003283ac(0);
  }
  return 1;
}
