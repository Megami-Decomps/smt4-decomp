/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282b60` (_code @ 0x282b60, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);

extern unsigned char DAT_0057f208; /* 0x57f208 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_00282b60(void)

{
/* irregular: 2 native warning(s); review required */
  if ((*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) < '\x01') {
    FUN_0014384c(9);
    FUN_0014afd0(9,0);
  }
  (*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) = (*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
