/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016afbc` (_code @ 0x16afbc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00167dcc(); /* 0x167dcc */
extern int FUN_00169840(); /* 0x169840 */

/* Supplied declaration required: FUN_00168980. */


void FUN_0016afbc(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00167dcc;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00169840;
  }
  (*pcVar1)();
  FUN_00168980();
  return;
}
