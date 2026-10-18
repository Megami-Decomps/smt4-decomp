/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167368` (_code @ 0x167368, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00163628(); /* 0x163628 */
extern int FUN_00166a10(); /* 0x166a10 */

/* Supplied declaration required: FUN_00163a10. */


void FUN_00167368(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00163628;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00166a10;
  }
  (*pcVar1)();
  FUN_00163a10();
  return;
}
