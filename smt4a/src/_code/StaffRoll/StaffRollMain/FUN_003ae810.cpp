/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae810` (_code @ 0x3ae810, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d2d34(int, int, int);

extern int DAT_0056fcc8; /* 0x56fcc8 */

extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_003d2d34. */


void FUN_003ae810(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e07f4();
  if (temp_v0 != 0) {
    FUN_003d2d34(0x1000000,0,0x3c);
    *(unsigned int *)(DAT_0056fcc8 + 0x14c) = 2;
  }
  return;
}

} /* extern "C" */
