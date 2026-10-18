/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291a5c` (_code @ 0x291a5c, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043da28; /* 0x43da28 */
extern unsigned int *DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002a8a8c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00291a5c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043da2c;
  DAT_0043da28 = DAT_0043da28 - '\x01';
  if (DAT_0043da28 < '\x01') {
    FUN_002a7b50(DAT_0043da2c[0x156]);
    puVar1[0x156] = 0;
    if (puVar1[4] != 3) {
      temp_v0 = 0;
      do {
        FUN_002bf030(puVar1 + temp_v0 * 0x23 + 0xd,1);
        if (*(char *)(puVar1 + temp_v0 + 0x125) != '\0') {
          FUN_002a8a8c();
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
    }
    FUN_002a755c(puVar1[0x158]);
    FUN_002c45b8(*puVar1,0);
    FUN_002c4360(puVar1);
    DAT_0043da2c = (unsigned int *)0x0;
    DAT_0043da28 = '\0';
  }
  return;
}
