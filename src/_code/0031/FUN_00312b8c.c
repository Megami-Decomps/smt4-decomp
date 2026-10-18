/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312b8c` (_code @ 0x312b8c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002954cc. */
/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_00312b8c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00293c98();
  if ((((*(unsigned int *)(temp_v0 + 0x44a0) & 2) == 0) &&
      (temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0xf2), temp_v2 != 0)) &&
     (temp_v1 = temp_v2, FUN_002b9364(), temp_v1 != 0)) {
    FUN_002954cc(temp_v2,3);
  }
  return 1;
}
