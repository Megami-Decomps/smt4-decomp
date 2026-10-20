/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d7c50` (_code @ 0x1d7c50, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d5614(void);

typedef int romwright_code(...);
extern int FUN_001d4a60(...); /* 0x1d4a60 */
extern int FUN_001d64d4(...); /* 0x1d64d4 */

/* Supplied declaration required: FUN_001d5614. */


void FUN_001d7c50(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001d4a60;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001d64d4;
  }
  (*pcVar1)();
  FUN_001d5614();
  return;
}

} /* extern "C" */
