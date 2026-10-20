/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a52c` (_code @ 0x23a52c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5df4(void);

extern signed char DAT_005f1623; /* 0x5f1623 */
extern unsigned char DAT_0060fc08; /* 0x60fc08 */

/* Supplied declaration required: FUN_002c5df4. */


void FUN_0023a52c(void)

{
/* irregular: 1 native warning(s); review required */
  if (((*(signed char *)((unsigned char *)&DAT_0060fc08 + 0x394)) != '\0') && (DAT_005f1623 != '\0')) {
    FUN_002c5df4();
    return;
  }
  return;
}

} /* extern "C" */
