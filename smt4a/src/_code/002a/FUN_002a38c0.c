/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a38c0` (_code @ 0x2a38c0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_0030f69c. */


unsigned int FUN_002a38c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002e6e26(), temp_v0 != 0)) {
    temp_v1 = FUN_002e6e26();
    FUN_0030f69c(temp_v1,0xffffffff,0);
  }
  return 0;
}
