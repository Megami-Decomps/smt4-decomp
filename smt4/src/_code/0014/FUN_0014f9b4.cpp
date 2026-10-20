#include "romwright_types.h"

extern "C" {

int FUN_001532fc(unsigned char *, unsigned int);

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */

/* Supplied declaration required: FUN_001532fc. */


void FUN_0014f9b4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001532fc(&DAT_004e6f14,param_1);
  return;
}

} /* extern "C" */
