/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114efc` (_code @ 0x114efc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00559758; /* 0x559758 */

/* Supplied declaration required: FUN_0010b410. */
/* Supplied declaration required: FUN_001136a2. */
/* Supplied declaration required: FUN_002ea124. */
/* Supplied declaration required: FUN_00300bb0. */
/* Supplied declaration required: FUN_00300bf0. */


void FUN_00114efc(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559758;
  if (param_1[5] != 0) {
    FUN_001136a2();
    FUN_002ea124();
  }
  if (param_1[6] != 0) {
    FUN_0010b410();
    FUN_002ea124();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[4] + 4))();
  }
  FUN_00300bb0();
  FUN_00300bf0(param_1);
  return;
}
