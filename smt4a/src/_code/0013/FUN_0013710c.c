/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013710c` (_code @ 0x13710c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057ffd0; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */

/* Supplied declaration required: FUN_0014166c. */
extern int FUN_001696f4(void);


unsigned int FUN_0013710c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001696f4();
  if (temp_v0 == 1) {
    if ((DAT_0057ffd1 != '\0') && (DAT_0057ffd0 == '\0')) {
      FUN_0014166c();
    }
  }
  return 0;
}
