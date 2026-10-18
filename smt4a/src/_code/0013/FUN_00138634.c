/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138634` (_code @ 0x138634, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014192c. */
/* Supplied declaration required: FUN_00144ab4. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001575cc. */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_0017dd80. */


unsigned int FUN_00138634(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001696f4();
  if ((temp_v0 == 1) && (DAT_0057ffd1 != '\0')) {
    FUN_00144ab4(1);
    *(unsigned int *)(DAT_0059dbb4 + 0x52c) = 1;
    FUN_0017dd80();
    FUN_0014192c(1,0);
    FUN_001575cc(DAT_0059dbb4);
    FUN_00157558(DAT_0059dbb4);
  }
  return 0;
}
