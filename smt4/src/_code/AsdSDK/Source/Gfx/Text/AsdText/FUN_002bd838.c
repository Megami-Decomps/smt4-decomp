/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd838` (_code @ 0x2bd838, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464d50; /* 0x464d50 */

/* Supplied declaration required: FUN_00124bd8. */


void FUN_002bd838(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0xb4;
  FUN_00124bd8(0xb4,param_1);
  *(unsigned int *)(temp_v0 + 0x34) = 0x402;
  *(unsigned char *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x38) = DAT_00464d50 & 0xffffff00;
  return;
}
