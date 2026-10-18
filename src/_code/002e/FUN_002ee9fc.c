/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee9fc` (_code @ 0x2ee9fc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249f1c. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);
/* Supplied declaration required: FUN_0030ac20. */


unsigned int FUN_002ee9fc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 >= 0xe8) {
    temp_v0 = 0;
  }
  FUN_0030ac20(temp_v0,0);
  if (temp_v0 != 0) {
    FUN_00249f1c();
  }
  FUN_0028df54(temp_v0);
  return 1;
}
