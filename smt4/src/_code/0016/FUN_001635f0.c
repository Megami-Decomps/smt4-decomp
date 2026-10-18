/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001635f0` (_code @ 0x1635f0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0015f8b0(); /* 0x15f8b0 */
extern int FUN_00162c98(); /* 0x162c98 */

/* Supplied declaration required: FUN_0015fc98. */


void FUN_001635f0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_0015f8b0;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00162c98;
  }
  (*pcVar1)();
  FUN_0015fc98();
  return;
}
