/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146eb0` (_code @ 0x146eb0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00159468(...);

extern unsigned char g_nnHidServiceHandle; /* 0x643098 */

/* Supplied declaration required: FUN_00159468. */


void FUN_00146eb0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00159468(&g_nnHidServiceHandle,"hid:USER");
  return;
}

} /* extern "C" */
