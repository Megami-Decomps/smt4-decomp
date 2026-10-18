/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1458` (_code @ 0x2e1458, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254884. */
/* Supplied declaration required: FUN_002a84e8. */
/* Supplied declaration required: FUN_002ad888. */
/* Supplied declaration required: FUN_002c3510. */


unsigned char * FUN_002e1458(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [496];
  
  puVar1 = temp_v0;
  FUN_00254884(param_1,temp_v0,2);
  if (param_1 != 0) {
    FUN_002ad888();
    FUN_002a84e8(temp_v0);
    FUN_002c3510();
    return puVar1;
  }
  FUN_002c3510();
  return (unsigned char *)0xe0e046bc;
}
