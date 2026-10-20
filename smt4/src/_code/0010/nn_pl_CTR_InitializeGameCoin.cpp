#include "romwright_types.h"

extern "C" {

int FUN_0010fc28(void);
int FUN_00128174(void);

extern signed char DAT_0044e7bc; /* 0x44e7bc */

/* Supplied declaration required: FUN_0010fc28. */
/* Supplied declaration required: FUN_00128174. */


void nn_pl_CTR_InitializeGameCoin(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e7bc == '\0') {
    FUN_0010fc28();
    FUN_00128174();
    DAT_0044e7bc = '\x01';
  }
  return;
}

} /* extern "C" */
