/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016afec` (_code @ 0x16afec, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001672ac(); /* 0x1672ac */
extern int FUN_0016a694(); /* 0x16a694 */

/* Supplied declaration required: FUN_00167694. */


void FUN_0016afec(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001672ac;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_0016a694;
  }
  (*pcVar1)();
  FUN_00167694();
  return;
}
