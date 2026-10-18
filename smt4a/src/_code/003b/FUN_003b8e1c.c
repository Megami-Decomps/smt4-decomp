/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8e1c` (_code @ 0x3b8e1c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_001add24. */
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00333474. */
/* Supplied declaration required: FUN_003f86f8. */


unsigned int FUN_003b8e1c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_003f86f8(0x4b);
  for (; temp_v0 <= temp_v1; temp_v0 = temp_v0 + 1) {
    FUN_00187180(0x4b,0);
    temp_v2 = FUN_00192798();
    temp_v2 = temp_v2 + temp_v0 * 100;
    if (temp_v2 != 0) {
      *(unsigned short *)(temp_v2 + 0x34) = *(unsigned short *)(temp_v2 + 0x60);
      FUN_00333474();
    }
  }
  FUN_001add24(0x4b);
  return 1;
}
