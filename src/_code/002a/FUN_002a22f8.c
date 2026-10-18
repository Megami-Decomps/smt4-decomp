/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a22f8` (_code @ 0x2a22f8, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_004734c8; /* 0x4734c8 */
extern romwright_code *DAT_004734cc; /* 0x4734cc */


void FUN_002a22f8(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x002a2320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004734c8)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x002a2318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004734cc)();
    return;
  }
  return;
}
