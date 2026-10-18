/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038df2c` (_code @ 0x38df2c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_001ab854(int);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_0023acdc. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f3170. */


unsigned int FUN_0038df2c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 < 0x6d) {
    FUN_0014aa78();
    temp_v1 = FUN_0014aa78();
    FUN_003f0e20(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x3fc);
  }
  else {
    temp_v0 = FUN_001ab854(temp_v0 - 0x6d);
  }
  FUN_003f3170();
  if (0 < temp_v0) {
    FUN_0023acdc();
  }
  FUN_003283ac(temp_v0);
  return 1;
}
