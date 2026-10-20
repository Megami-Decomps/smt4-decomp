#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_0010fb04(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_004eac5c,0x10000000,0x4000000);
  return;
}

} /* extern "C" */
