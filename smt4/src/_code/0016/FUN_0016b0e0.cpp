/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b0e0` (_code @ 0x16b0e0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167788(void);

typedef int romwright_code(...);
extern int FUN_00167398(...); /* 0x1673a0 */
extern int FUN_0016a788(...); /* 0x16a788 */

/* Supplied declaration required: FUN_00167788. */


void FUN_0016b0e0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00167398;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_0016a788;
  }
  (*pcVar1)();
  FUN_00167788();
  return;
}

} /* extern "C" */
