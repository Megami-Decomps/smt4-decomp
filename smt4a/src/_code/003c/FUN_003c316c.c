/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c316c` (_code @ 0x3c316c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


int FUN_003c316c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  FUN_00187180(0x29,6);
  temp_v0 = FUN_00192748();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_00187180(0x29,6);
      temp_v2 = FUN_00192798();
      temp_v3 = FUN_00192748(temp_v1);
      if (((temp_v4 < temp_v3) && (temp_v2 = temp_v2 + temp_v4 * 0x10, temp_v2 != 0)) &&
         (*(short *)(temp_v2 + 0xc) == param_1)) {
        return temp_v2;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < temp_v0);
  }
  return 0;
}
