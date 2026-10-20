#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, unsigned int, unsigned int);

extern signed char DAT_00471b54; /* 0x471b54 */
extern unsigned char DAT_004e6ef0; /* 0x4e6ef0 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_0010fab0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00471b54 == '\0') {
    DAT_00471b54 = 1;
    nnosAddressSpaceManagerInitialize(&DAT_004e6ef0,param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
