/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137020` (_code @ 0x137020, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057ffd0; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0057ffdc; /* 0x57ffdc */

/* Supplied declaration required: FUN_00153f74. */
extern int FUN_001696f4(void);


unsigned int FUN_00137020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_0057ffd0 == '\0') && (temp_v0 = FUN_001696f4(), temp_v0 == 1)) && (DAT_0057ffd1 != '\0')) {
    FUN_00153f74(DAT_0057ffdc);
  }
  return 0;
}
