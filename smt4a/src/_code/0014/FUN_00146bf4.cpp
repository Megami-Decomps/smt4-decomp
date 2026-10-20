#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, unsigned int, unsigned int);

extern signed char DAT_005c0ad4; /* 0x5c0ad4 */
extern unsigned char DAT_00643310; /* 0x643310 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_00146bf4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005c0ad4 == '\0') {
    DAT_005c0ad4 = 1;
    nnosAddressSpaceManagerInitialize(&DAT_00643310,param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
