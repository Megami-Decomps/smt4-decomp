/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022033c` (_code @ 0x22033c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254ac4. */
/* Supplied declaration required: FUN_002a882c. */
/* Supplied declaration required: FUN_002adb14. */
/* Supplied declaration required: FUN_002c3714. */


unsigned char * FUN_0022033c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [496];
  
  puVar1 = temp_v0;
  FUN_00254ac4(param_1,temp_v0,1);
  if (param_1 != 0) {
    FUN_002adb14();
    FUN_002a882c(temp_v0);
    FUN_002c3714();
    return puVar1;
  }
  FUN_002c3714();
  return (unsigned char *)0xe0e046bc;
}
