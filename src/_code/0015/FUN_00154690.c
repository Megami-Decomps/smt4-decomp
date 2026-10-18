/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154690` (_code @ 0x154690, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */
extern unsigned char DAT_00471c58; /* 0x471c58 */

/* Supplied declaration required: FUN_002acaac. */


void FUN_00154690(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002acaac(DAT_004652a0,&DAT_00471c58,0x170);
  DAT_004652a0 = DAT_004652a0 + 0x170;
  return;
}
