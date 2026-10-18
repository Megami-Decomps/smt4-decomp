/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8ecc` (_code @ 0x3d8ecc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003d8f04; /* 0x3d8f04 */
extern int DAT_0057f580; /* 0x57f580 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_003d8ecc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f580;
  FUN_00100388(DAT_0057f580 + 0xc4,&LAB_003d8f04);
  *(unsigned char *)(temp_v0 + 0x14) = 1;
  *(unsigned int *)(temp_v0 + 8) = 1;
  FUN_003d2150(0x10002a9);
  return 1;
}
