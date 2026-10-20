/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010726c` (_code @ 0x10726c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3d04(void);

typedef int romwright_code(...);
extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e3d04. */


void FUN_0010726c(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x4c)) != (romwright_code *)0x0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_00594958 + 0x4c)))();
    return;
  }
  FUN_002e3d04();
  return;
}

} /* extern "C" */
