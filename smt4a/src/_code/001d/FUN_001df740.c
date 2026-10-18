/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df740` (_code @ 0x1df740, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001dc550(); /* 0x1dc550 */
extern int FUN_001ddfc4(); /* 0x1ddfc4 */

/* Supplied declaration required: FUN_001dd104. */


void FUN_001df740(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001dc550;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001ddfc4;
  }
  (*pcVar1)();
  FUN_001dd104();
  return;
}
