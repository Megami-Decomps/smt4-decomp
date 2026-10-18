/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eea50` (_code @ 0x2eea50, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249dc4. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(void);
/* Supplied declaration required: FUN_0030ac54. */


unsigned int FUN_002eea50(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 >= 0xe8) {
    temp_v0 = 0;
  }
  FUN_0030ac54(temp_v0,0);
  if (temp_v0 != 0) {
    FUN_00249dc4();
  }
  FUN_0028dcb0(temp_v0);
  return 1;
}
