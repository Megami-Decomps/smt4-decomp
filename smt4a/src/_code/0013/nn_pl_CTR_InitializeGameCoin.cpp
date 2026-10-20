#include "romwright_types.h"

extern "C" {

int FUN_00146d90(void);
int FUN_0016e2a8(void);

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

} /* extern "C" */
