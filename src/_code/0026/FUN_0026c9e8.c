/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c9e8` (_code @ 0x26c9e8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002bf030. */


void FUN_0026c9e8(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned char *)(DAT_0043e0f8 + 0x12) = param_1;
  *(unsigned int *)(temp_v0 + 8) = 1;
  FUN_002bf030(temp_v0 + 0x3c,0);
  return;
}
