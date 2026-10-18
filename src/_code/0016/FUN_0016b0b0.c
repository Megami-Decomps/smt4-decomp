/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b0b0` (_code @ 0x16b0b0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00167ec0(); /* 0x167ec0 */
extern int FUN_00169934(); /* 0x169934 */

/* Supplied declaration required: FUN_00168a74. */


void FUN_0016b0b0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00167ec0;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00169934;
  }
  (*pcVar1)();
  FUN_00168a74();
  return;
}
