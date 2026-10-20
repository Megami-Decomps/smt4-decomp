/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114a88` (_code @ 0x114a88, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dac(void);

typedef int romwright_code(...);
extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e6dac. */


void FUN_00114a88(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x68)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x68)))();
    return;
  }
  FUN_002e6dac();
  return;
}

} /* extern "C" */
