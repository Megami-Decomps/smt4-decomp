/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaa94` (_code @ 0x4aaa94, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003bcf80(int);

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003bcf80. */


void FUN_004aaa94(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned int *)(DAT_0057a9c8 + 0x74a0) = 5;
  FUN_003bcf80(temp_v0 + 0x24bc);
  return;
}

} /* extern "C" */
