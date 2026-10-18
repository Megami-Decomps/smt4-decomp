/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db9c8` (_code @ 0x1db9c8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001d87d8(); /* 0x1d87d8 */
extern int FUN_001da24c(); /* 0x1da24c */

/* Supplied declaration required: FUN_001d938c. */


void FUN_001db9c8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001d87d8;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001da24c;
  }
  (*pcVar1)();
  FUN_001d938c();
  return;
}
