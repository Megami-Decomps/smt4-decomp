/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360704` (_code @ 0x360704, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bce48. */
extern int FUN_00360ab8(void);


int FUN_00360704(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00360ab8();
  if (temp_v0 != -0x36bfafff) {
    if (temp_v0 < 0) {
      FUN_002bce48();
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
