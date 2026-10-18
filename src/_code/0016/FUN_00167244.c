/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167244` (_code @ 0x167244, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00164054(); /* 0x164054 */
extern int FUN_00165ac8(); /* 0x165ac8 */

/* Supplied declaration required: FUN_00164c08. */


void FUN_00167244(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00164054;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00165ac8;
  }
  (*pcVar1)();
  FUN_00164c08();
  return;
}
