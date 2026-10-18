/* NON_MATCHING: romwright 0.5.0 decompilation of `mwmoimaadpcmDecoderRelease` (_code @ 0x5137b0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_00589524; /* 0x589524 */


void mwmoimaadpcmDecoderRelease(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00589524 != (romwright_code *)0x0 && param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      (*DAT_00589524)();
    }
                    /* WARNING: Could not recover jumptable at 0x005137e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00589524)(param_1);
    return;
  }
  return;
}
