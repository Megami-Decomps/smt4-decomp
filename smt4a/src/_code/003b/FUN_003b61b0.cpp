/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b61b0` (_code @ 0x3b61b0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_003b61b0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x191) = 1;
  *(unsigned char *)(temp_v0 + 0x192) = 1;
  *(unsigned char *)(temp_v0 + 400) = 3;
  FUN_001846d0(temp_v0 + 0x1820,0x1d);
  return 1;
}

} /* extern "C" */
