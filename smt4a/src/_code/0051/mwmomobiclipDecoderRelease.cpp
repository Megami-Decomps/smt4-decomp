/* NON_MATCHING: romwright 0.5.0 decompilation of `mwmomobiclipDecoderRelease` (_code @ 0x513c54, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VX2DecoderRelease(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0058952c; /* 0x58952c */

/* Supplied declaration required: VX2DecoderRelease. */


void mwmomobiclipDecoderRelease(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0058952c != (romwright_code *)0x0 && param_1 != 0) {
    VX2DecoderRelease();
    (*DAT_0058952c)(*(unsigned int *)(param_1 + 0x2c));
    (*DAT_0058952c)(*(unsigned int *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00513c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0058952c)(param_1);
    return;
  }
  return;
}

} /* extern "C" */
