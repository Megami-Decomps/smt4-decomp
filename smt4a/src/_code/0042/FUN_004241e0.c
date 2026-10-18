/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004241e0` (_code @ 0x4241e0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_004241e0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0xc) != 1;
  temp_v0 = 1;
  if (temp_v1) {
    temp_v0 = *(int *)(param_1 + 0xc);
  }
  if (!temp_v1 || temp_v0 == 8) {
    nn_os_CriticalSection_Enter(param_1);
    *(unsigned int *)(param_1 + 0xc) = 5;
    nn_os_CriticalSection_Leave(param_1);
    FUN_001a08d8(param_1 + 0x20);
    while( 1 ) {
      if (*(int *)(param_1 + 0xc) == 3) {
        return 1;
      }
      temp_v0 = *(int *)(param_1 + 0xc);
      temp_v1 = temp_v0 == 7;
      if (!temp_v1) {
        temp_v0 = *(int *)(param_1 + 0xc);
      }
      if (temp_v1 || temp_v0 == 1) break;
      FUN_001bcd48(500000,0);
    }
  }
  return 0;
}
