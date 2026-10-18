/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c9fc` (_code @ 0x32c9fc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_00188444. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_002e0e04. */


unsigned char * FUN_0032c9fc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [496];
  
  puVar1 = temp_v0;
  FUN_002e0e04(param_1,temp_v0,0);
  if (param_1 != 0) {
    FUN_001886bc();
    FUN_00188444(temp_v0);
    FUN_0013ebd8();
    return puVar1;
  }
  FUN_0013ebd8();
  return (unsigned char *)0xe0e046bc;
}
