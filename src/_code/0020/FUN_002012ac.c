/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002012ac` (_code @ 0x2012ac, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_002012ac(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0043dfc0 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf41c(*DAT_0043dfc0), temp_v0 != 0)) {
    FUN_002c45b8(*DAT_0043dfc0,0);
  }
  return 1;
}
