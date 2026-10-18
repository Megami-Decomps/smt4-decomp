/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c567c` (_code @ 0x2c567c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00118584. */
/* Supplied declaration required: FUN_0011c95c. */


void FUN_002c567c(void)

{
/* irregular: 5 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  FUN_0011c95c();
  FUN_00118584();
                    /* WARNING: Could not recover jumptable at 0x002c57b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
