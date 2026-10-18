/* NON_MATCHING: romwright 0.5.0 decompilation of `mwmomobiclipDecoderRelease` (_code @ 0x3f65e0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0044e97c; /* 0x44e97c */

/* Supplied declaration required: VX2DecoderRelease. */


void mwmomobiclipDecoderRelease(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e97c != (romwright_code *)0x0 && param_1 != 0) {
    VX2DecoderRelease();
    (*DAT_0044e97c)(*(unsigned int *)(param_1 + 0x2c));
    (*DAT_0044e97c)(*(unsigned int *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x003f6624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e97c)(param_1);
    return;
  }
  return;
}
