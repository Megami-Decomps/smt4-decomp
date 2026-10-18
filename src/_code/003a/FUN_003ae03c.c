/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae03c` (_code @ 0x3ae03c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002af5c0. */


void FUN_003ae03c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00439ca8;
  *(unsigned char *)(DAT_00439ca8 + 0x7e4b) = 1;
  FUN_002af5c0(temp_v0 + 0x7ec0,0xd,0);
  return;
}
