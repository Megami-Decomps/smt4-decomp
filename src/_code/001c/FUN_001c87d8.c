/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c87d8` (_code @ 0x1c87d8, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001c87d8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044dc20;
  if (DAT_0044dc20 != 0) {
    FUN_002a755c(*(unsigned int *)(DAT_0044dc20 + 0x3568));
    FUN_002c4360(*(unsigned int *)(temp_v0 + 0x3564));
    FUN_002c4360(*(unsigned int *)(temp_v0 + 0x356c));
    FUN_002c0128();
    FUN_002c4360(*(unsigned int *)(temp_v0 + 0x3570));
    FUN_002a497c(0x14);
    FUN_002a497c(0x25);
    temp_v0 = 0;
    do {
      FUN_002aeb2c(0x28,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    FUN_002c4360(DAT_0044dc20);
    DAT_0044dc20 = 0;
  }
  return;
}
