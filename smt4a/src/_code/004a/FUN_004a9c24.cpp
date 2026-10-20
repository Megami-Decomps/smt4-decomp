/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9c24` (_code @ 0x4a9c24, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae554(int, int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_002ae554. */


void FUN_004a9c24(unsigned int param_1,short param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ae554((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4,(int)param_2);
  return;
}

} /* extern "C" */
