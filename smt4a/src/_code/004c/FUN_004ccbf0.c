/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccbf0` (_code @ 0x4ccbf0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
extern int FUN_00203b1c(void);


unsigned int FUN_004ccbf0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_00187180(9,1);
  temp_v0 = FUN_00192798();
  temp_v1 = FUN_00203b1c();
  if (param_1 >= temp_v1) {
    temp_v2 = 0;
  }
  else {
    if (param_1 < 99) {
      return *(unsigned int *)((temp_v0 + param_1 * 4) - 4);
    }
    temp_v2 = param_1 * param_1 * 3 + (unsigned int)(param_1 * param_1 * param_1) / 100 + param_1 * 0xdb8 +
            0x184c6;
    if (temp_v2 >= 1000000) {
      temp_v2 = 999999;
    }
  }
  return temp_v2;
}
