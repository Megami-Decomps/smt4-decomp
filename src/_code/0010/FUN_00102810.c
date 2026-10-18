/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102810` (_code @ 0x102810, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */

/* Supplied declaration required: FUN_0010ba7c. */
extern int FUN_002c540c(void);


unsigned int FUN_00102810(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c540c();
  if (temp_v0 == 1) {
    if ((DAT_00446db1 != '\0') && (DAT_00446db0 == '\0')) {
      FUN_0010ba7c();
    }
  }
  return 0;
}
