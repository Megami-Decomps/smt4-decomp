/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fbc8` (_code @ 0x34fbc8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c4040. */


unsigned int FUN_0034fbc8(int param_1)

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
    FUN_002c38a4(param_1);
    *(unsigned int *)(param_1 + 0xc) = 5;
    FUN_002c3820(param_1);
    FUN_002c4040(param_1 + 0x20);
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
      FUN_002bb150(500000,0);
    }
  }
  return 0;
}
