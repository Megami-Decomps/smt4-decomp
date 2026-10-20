#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_00647660; /* 0x647660 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_00146c6c(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_00647660,0x10000000,0x4000000);
  return;
}

} /* extern "C" */
