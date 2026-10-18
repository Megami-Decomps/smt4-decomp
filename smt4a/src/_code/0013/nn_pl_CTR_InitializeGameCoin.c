/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_pl_CTR_InitializeGameCoin` (_code @ 0x13b764, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005894e0; /* 0x5894e0 */

/* Supplied declaration required: FUN_00146d90. */
/* Supplied declaration required: FUN_0016e2a8. */


void nn_pl_CTR_InitializeGameCoin(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005894e0 == '\0') {
    FUN_00146d90();
    FUN_0016e2a8();
    DAT_005894e0 = '\x01';
  }
  return;
}
