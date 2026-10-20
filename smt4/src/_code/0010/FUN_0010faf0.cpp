#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_0010faf0(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_004d4600,0xe000000,0x2000000);
  return;
}

} /* extern "C" */
