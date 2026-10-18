/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ba0` (_code @ 0x103ba0, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db1; /* 0x446db1 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bdd1c. */
/* Supplied declaration required: FUN_002c3734. */
/* Supplied declaration required: FUN_002c37b4. */
/* Supplied declaration required: FUN_002c3ba8. */
/* Supplied declaration required: FUN_002c3c18. */
extern int FUN_002c540c(void);


unsigned int FUN_00103ba0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c540c();
  if ((temp_v0 == 1) && (DAT_00446db1 != '\0')) {
    FUN_002c37b4(1);
    *(unsigned int *)(DAT_0044ea00 + 0x528) = 1;
    FUN_002bdd1c();
    FUN_002c3734(1,0);
    FUN_002c3c18(DAT_0044ea00);
    FUN_002c3ba8(DAT_0044ea00);
  }
  return 0;
}
