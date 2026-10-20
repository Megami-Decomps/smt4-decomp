/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110a7c` (_code @ 0x110a7c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrConstruct(...);

extern unsigned char DAT_00559418; /* 0x559418 */

/* Supplied declaration required: onlineSockAddrConstruct. */


void FUN_00110a7c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559418;
  temp_v0 = onlineSockAddrConstruct(param_1 + 2);
  temp_v0 = onlineSockAddrConstruct(temp_v0 + 0x20);
  temp_v0 = onlineSockAddrConstruct(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned char *)(temp_v0 - 0x44) = 2;
  return;
}

} /* extern "C" */
