/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201410` (_code @ 0x201410, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_00201410(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0043dfc0 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf244(*DAT_0043dfc0), temp_v0 != 0)) {
    FUN_002c43b4(*DAT_0043dfc0,0);
  }
  return 1;
}

} /* extern "C" */
