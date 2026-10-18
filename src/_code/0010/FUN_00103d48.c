/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103d48` (_code @ 0x103d48, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465210; /* 0x465210 */

/* Supplied declaration required: FUN_002c3414. */
/* Supplied declaration required: FUN_002c3510. */
extern unsigned int FUN_002c3dfc(void);


unsigned int FUN_00103d48(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00465210 == '\0') {
    temp_v0 = 1;
  }
  else {
    FUN_002c3414(DAT_00465210);
    temp_v1 = FUN_002c3dfc();
    FUN_002c3510();
    temp_v0 = 0;
    if ((temp_v1 & 0x80000000) == 0) {
      DAT_00465210 = '\0';
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
