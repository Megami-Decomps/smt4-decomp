/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001026c4` (_code @ 0x1026c4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_00446db8; /* 0x446db8 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c50d0. */
/* Supplied declaration required: FUN_002c5188. */
/* Supplied declaration required: FUN_002c5218. */
extern int FUN_002c540c(void);


unsigned int FUN_001026c4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c5218();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c5218();
    FUN_002c5188(DAT_0044ea00,temp_v1);
  }
  if (((DAT_00446db0 == '\0') && (DAT_00446db1 != '\0')) && (temp_v0 = FUN_002c540c(), temp_v0 == 1)) {
    FUN_002c50d0(DAT_00446db8);
  }
  return 0;
}
