/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db9f8` (_code @ 0x1db9f8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d80a0(void);

typedef int romwright_code(...);
extern int FUN_001d7cb0(...); /* 0x1d7cb8 */
extern int FUN_001db0a0(...); /* 0x1db0a0 */

/* Supplied declaration required: FUN_001d80a0. */


void FUN_001db9f8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001d7cb0;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001db0a0;
  }
  (*pcVar1)();
  FUN_001d80a0();
  return;
}

} /* extern "C" */
