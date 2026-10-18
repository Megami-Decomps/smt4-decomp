/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6e70` (_code @ 0x3b6e70, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003b6ee4; /* 0x3b6ee4 */
extern unsigned char DAT_005f172b; /* 0x5f172b */
extern short DAT_005f172c; /* 0x5f172c */
extern unsigned char DAT_005f1730; /* 0x5f1730 */

extern short FUN_00236038(unsigned int);
extern unsigned int FUN_002360dc(unsigned int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_003b6e70(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_002360dc(1);
  DAT_005f172b = 1;
  DAT_005f172c = temp_v0;
  FUN_002e342c(&DAT_005f1730,temp_v1);
  if (DAT_005f172c == 0x288) {
    puVar3 = &DAT_005f1730;
    FUN_0030ea58(&DAT_005f1730,&LAB_003b6ee4);
    if (puVar3 == (unsigned char *)0x0) {
      FUN_003fd63c(0x593,1);
    }
  }
  return 1;
}
