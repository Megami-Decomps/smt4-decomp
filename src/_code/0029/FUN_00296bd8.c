/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296bd8` (_code @ 0x296bd8, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_001ad8d4. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00296bd8(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043dd50;
  if (DAT_0043dd50 != (unsigned int *)0x0) {
    temp_v0 = 0;
    if (*(short *)(DAT_0043dd50 + 0x27e) != 0) {
      do {
        FUN_002b9008();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x27e));
    }
    FUN_002a755c(puVar1[0x16d]);
    FUN_002c4360(puVar1[0x16c]);
    FUN_002c4360(puVar1[0x16b]);
    if (puVar1[0x16e] != 0) {
      FUN_002a755c(puVar1[0x170]);
      FUN_002c4360(puVar1[0x16e]);
      FUN_002c4360(puVar1[0x16f]);
    }
    FUN_002aeb2c(0x29,0);
    FUN_002aea7c(0x29);
    FUN_002a497c(0x34);
    FUN_001ad8d4(1);
    FUN_002c45b8(*puVar1,0);
    FUN_002c4360(puVar1);
    DAT_0043dd50 = (unsigned int *)0x0;
  }
  return;
}
