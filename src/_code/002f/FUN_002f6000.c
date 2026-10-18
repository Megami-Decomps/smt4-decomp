/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6000` (_code @ 0x2f6000, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00247344(void);
/* Supplied declaration required: FUN_0028df54. */


unsigned int FUN_002f6000(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00247344();
  if (temp_v0 == 4) {
    temp_v1 = 1;
  }
  else {
    if (temp_v0 != 5) {
      FUN_0028df54(0);
      return 1;
    }
    temp_v1 = 2;
  }
  FUN_0028df54(temp_v1);
  return 1;
}
