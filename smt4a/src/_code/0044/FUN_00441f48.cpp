/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441f48` (_code @ 0x441f48, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_applet_CTR_detail_IsRegistered(int);

/* Supplied declaration required: nn_applet_CTR_detail_IsRegistered. */


void FUN_00441f48(void)

{
/* irregular: 1 native warning(s); review required */
  nn_applet_CTR_detail_IsRegistered(0x406);
  return;
}

} /* extern "C" */
