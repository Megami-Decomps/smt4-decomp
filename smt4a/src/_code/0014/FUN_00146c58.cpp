#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_0062d630; /* 0x62d630 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_00146c58(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_0062d630,0xe000000,0x2000000);
  return;
}

} /* extern "C" */
