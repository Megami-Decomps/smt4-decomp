/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d7c80` (_code @ 0x1d7c80, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001d3f40(); /* 0x1d3f40 */
extern int FUN_001d7328(); /* 0x1d7328 */

/* Supplied declaration required: FUN_001d4328. */


void FUN_001d7c80(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001d3f40;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001d7328;
  }
  (*pcVar1)();
  FUN_001d4328();
  return;
}
