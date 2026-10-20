/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_CloseAppletHook` (_code @ 0x11d1c4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern romwright_code *DAT_0044e3f0; /* 0x44e3f0 */
extern romwright_code *DAT_0044e3f4; /* 0x44e3f4 */
extern unsigned int DAT_0044e434; /* 0x44e434 */


void nn_applet_CTR_CloseAppletHook(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e3f0 != (romwright_code *)0x0) {
    (*DAT_0044e3f0)();
  }
  if (DAT_0044e3f4 == (romwright_code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0011d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0044e3f4)(DAT_0044e434);
  return;
}

} /* extern "C" */
