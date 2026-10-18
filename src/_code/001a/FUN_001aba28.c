/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aba28` (_code @ 0x1aba28, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd08; /* 0x43dd08 */

/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001aba28(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dd08;
  FUN_002aeb2c(0x30,0);
  FUN_002a497c(0x37);
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x358)) {
    do {
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x358));
  }
  if (temp_v0 != 0) {
    FUN_002c4360(temp_v0);
    DAT_0043dd08 = 0;
  }
  return;
}
