/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed32c` (_code @ 0x1ed32c, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025955c. */
extern int FUN_00289640(void);
extern int FUN_002c1f28(void);


unsigned int FUN_001ed32c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00289640();
    if (temp_v0 != 9) {
      temp_v0 = FUN_00289640();
      if (temp_v0 != 0x15) {
        return 0;
      }
      return 1;
    }
    temp_v1 = 0xc;
    temp_v2 = 0;
  }
  else {
    temp_v1 = 10;
    temp_v2 = 1;
  }
  FUN_0025955c(0xffffffff,temp_v1,temp_v2);
  return 0;
}
