/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a998c` (_code @ 0x4a998c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00184c00. */


void FUN_004a998c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned char *)(DAT_0057a9c8 + 0x74b3) = 1;
  FUN_00184c00(temp_v0 + 0x7528,0xd,0);
  return;
}
