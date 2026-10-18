/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c448` (_code @ 0x39c448, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_00230d30. */


void FUN_0039c448(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x518);
  *(unsigned int *)(temp_v0 + 0x518) = 7;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
  FUN_00230d30();
  *(unsigned char *)(temp_v0 + 0x24a9) = 0;
  return;
}
