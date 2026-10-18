/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1a8c` (_code @ 0x1d1a8c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00433048; /* 0x433048 */

/* Supplied declaration required: FUN_0027ebe4. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002b2530(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c58f0. */


unsigned int FUN_001d1a8c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_00433048;
  if (DAT_00433048 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2530(*DAT_00433048);
    puVar2 = DAT_00433048;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if (DAT_00433048 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_00433048 + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_002c58f0();
        if (puVar2[7] != 0) {
          FUN_0027ebe4();
          FUN_002b2520();
          puVar2[7] = 0;
        }
      }
      FUN_002c4360(DAT_00433048);
      DAT_00433048 = (unsigned int *)0x0;
    }
  }
  return 0;
}
