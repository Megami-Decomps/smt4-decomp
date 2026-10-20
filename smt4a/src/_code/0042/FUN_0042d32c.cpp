#include "romwright_types.h"

extern "C" {

int FUN_0042cea0(unsigned char *, unsigned int, unsigned int);

extern unsigned char g_nnosAddressSpaceManager; /* 0x643310 */

/* Supplied declaration required: FUN_0042cea0. */


void FUN_0042d32c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0042cea0(&g_nnosAddressSpaceManager,param_1,param_2);
  return;
}

} /* extern "C" */
