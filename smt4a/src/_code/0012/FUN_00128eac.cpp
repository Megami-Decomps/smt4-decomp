#include "romwright_types.h"

extern "C" {

int FUN_002f8520(void);

extern unsigned char DAT_00558ac4; /* 0x558ac4 */

/* Supplied declaration required: FUN_002f8520. */


void FUN_00128eac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558ac4;
  FUN_002f8520();
  return;
}

} /* extern "C" */
