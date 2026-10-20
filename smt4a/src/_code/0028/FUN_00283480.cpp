#include "romwright_types.h"

extern "C" {

int FUN_0014bdb4(unsigned int, unsigned int);

extern unsigned int *DAT_0057f3b0; /* 0x57f3b0 */

/* Supplied declaration required: FUN_0014bdb4. */


void FUN_00283480(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0014bdb4(*DAT_0057f3b0,param_1);
  return;
}

} /* extern "C" */
