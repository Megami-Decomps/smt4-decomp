/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103640` (_code @ 0x103640, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_idivmod. */


void FUN_00103640(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  while( 1 ) {
    if (*(int *)(param_1 + 0x34) <= temp_v4) break;
    aeabi_idivmod(*(int *)(param_1 + 0x128) + temp_v4);
    temp_v3 = temp_v1 * 8 + param_1;
    temp_v2 = *(unsigned int *)(temp_v3 + 0x38);
    temp_v0 = temp_v4 * 8 + param_1;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v0 + 0xb4) = *(unsigned int *)(temp_v3 + 0x3c);
    *(unsigned int *)(temp_v0 + 0xb0) = temp_v2;
  }
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}
