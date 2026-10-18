/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db9e0` (_code @ 0x3db9e0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00246874(void);
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */


unsigned int FUN_003db9e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if ((temp_v0 != 0) || (temp_v0 = FUN_00246874(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
