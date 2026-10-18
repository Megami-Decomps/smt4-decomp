/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1b8c` (_code @ 0x1d1b8c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00433048; /* 0x433048 */

/* Supplied declaration required: FUN_0027e974. */
/* Supplied declaration required: FUN_002b2368. */
extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c5700. */


unsigned int FUN_001d1b8c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_00433048;
  if (DAT_00433048 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_00433048);
    puVar2 = DAT_00433048;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if (DAT_00433048 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_00433048 + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_002c5700();
        if (puVar2[7] != 0) {
          FUN_0027e974();
          FUN_002b2368();
          puVar2[7] = 0;
        }
      }
      FUN_002c415c(DAT_00433048);
      DAT_00433048 = (unsigned int *)0x0;
    }
  }
  return 0;
}
