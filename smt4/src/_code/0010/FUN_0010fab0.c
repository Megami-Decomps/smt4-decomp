/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fab0` (_code @ 0x10fab0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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
