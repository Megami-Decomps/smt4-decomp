/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002917b8` (_code @ 0x2917b8, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043da28; /* 0x43da28 */
extern unsigned int *DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002a87e8. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002917b8(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043da2c;
  DAT_0043da28 = DAT_0043da28 - '\x01';
  if (DAT_0043da28 < '\x01') {
    FUN_002a780c(DAT_0043da2c[0x156]);
    puVar1[0x156] = 0;
    if (puVar1[4] != 3) {
      temp_v0 = 0;
      do {
        FUN_002bee58(puVar1 + temp_v0 * 0x23 + 0xd,1);
        if (*(char *)(puVar1 + temp_v0 + 0x125) != '\0') {
          FUN_002a87e8();
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
    }
    FUN_002a7218(puVar1[0x158]);
    FUN_002c43b4(*puVar1,0);
    FUN_002c415c(puVar1);
    DAT_0043da2c = (unsigned int *)0x0;
    DAT_0043da28 = '\0';
  }
  return;
}
