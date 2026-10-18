/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d548c` (_code @ 0x2d548c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003ba85c. */


unsigned int FUN_002d548c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v1 + 5);
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 8);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_003ba85c();
    }
  }
  return 0;
}
