/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c1b0` (_code @ 0x31c1b0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_00296f60(void);
/* Supplied declaration required: FUN_002b74a0. */


unsigned int FUN_0031c1b0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = *(int *)(DAT_0043dfc0 + 0x630);
  if (temp_v1 != 0) {
    if (temp_v0 != 0) {
      FUN_002b74a0(temp_v1,1);
    }
    else {
      FUN_002b74a0(temp_v1,0);
    }
  }
  return 1;
}
