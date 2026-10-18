/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d0c0` (_code @ 0x37d0c0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00348304. */
/* Supplied declaration required: FUN_0036f298. */
extern int FUN_0039af04(void);
/* Supplied declaration required: FUN_003c8fd4. */


unsigned int FUN_0037d0c0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0039af04();
  if (temp_v1 != 0) {
    FUN_003c8fd4(temp_v0);
    FUN_00348304();
    FUN_0036f298(temp_v0);
  }
  return 1;
}
