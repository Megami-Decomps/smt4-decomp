/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103d10` (_code @ 0x103d10, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0010d1a8. */
/* Supplied declaration required: FUN_0010f464. */
extern int FUN_002c540c(void);


unsigned int FUN_00103d10(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00446db0 == '\0') && (temp_v0 = FUN_002c540c(), temp_v0 == 1)) && (DAT_00446db1 != '\0')) {
    FUN_0010d1a8(1);
  }
  FUN_0010f464(DAT_0044ea00);
  return 0;
}
