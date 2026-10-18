/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001027c0` (_code @ 0x1027c0, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_00446dbc; /* 0x446dbc */

/* Supplied declaration required: FUN_002c5094. */
/* Supplied declaration required: FUN_002c522c. */
extern int FUN_002c540c(void);


unsigned int FUN_001027c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00446db0 == '\0') && (temp_v0 = FUN_002c540c(), temp_v0 == 1)) && (DAT_00446db1 != '\0')) {
    FUN_002c5094(DAT_00446dbc);
  }
  temp_v0 = FUN_002c540c();
  if (temp_v0 == 1) {
    FUN_002c522c(0x410);
  }
  return 0;
}
