/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f31cc` (_code @ 0x2f31cc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00558c08; /* 0x558c08 */

/* Supplied declaration required: FUN_002f31f0. */


void FUN_002f31cc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558c08;
  if ((int *)param_1[0x8b] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x8b] + 4))();
  }
  FUN_002f31f0(param_1);
  return;
}
