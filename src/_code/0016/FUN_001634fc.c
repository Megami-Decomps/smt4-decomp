/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001634fc` (_code @ 0x1634fc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0015f7bc(); /* 0x15f7bc */
extern int FUN_00162ba4(); /* 0x162ba4 */

/* Supplied declaration required: FUN_0015fba4. */


void FUN_001634fc(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_0015f7bc;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00162ba4;
  }
  (*pcVar1)();
  FUN_0015fba4();
  return;
}
