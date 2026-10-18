/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167274` (_code @ 0x167274, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00163534(); /* 0x163534 */
extern int FUN_0016691c(); /* 0x16691c */

/* Supplied declaration required: FUN_0016391c. */


void FUN_00167274(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00163534;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_0016691c;
  }
  (*pcVar1)();
  FUN_0016391c();
  return;
}
