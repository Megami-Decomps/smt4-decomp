/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ccc` (_code @ 0x103ccc, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465210; /* 0x465210 */

/* Supplied declaration required: FUN_002c3618. */
/* Supplied declaration required: FUN_002c3714. */
extern unsigned int FUN_002c4000(void);


unsigned int FUN_00103ccc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00465210 == '\0') {
    temp_v0 = 1;
  }
  else {
    FUN_002c3618(DAT_00465210);
    temp_v1 = FUN_002c4000();
    FUN_002c3714();
    temp_v0 = 0;
    if ((temp_v1 & 0x80000000) == 0) {
      DAT_00465210 = '\0';
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
