/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1000` (_code @ 0x1e1000, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00262430. */
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_001e1000(int param_1,int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 4 native warning(s); review required */
  *(int *)(param_1 + 600) = param_2;
  *(unsigned char *)(param_1 + 0x25e) = 1;
  *(unsigned char *)(param_1 + 0x25c) = param_4;
  *(unsigned char *)(param_1 + 0x25d) = param_3;
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_002b90e0(param_1 + 0x20,0x2a);
      FUN_002bf030(param_1 + 0x20,0);
      FUN_00262430(param_1 + 0x138,3);
      FUN_002bf030(param_1 + 0x138,2);
      FUN_00262430(param_1 + 0xac,1);
      FUN_002bf030(param_1 + 0xac,1);
      FUN_002b90e0(param_1 + 0x1c4,10);
      FUN_002bdac0(param_1 + 0x1c4,2,0);
    }
  }
  else {
    FUN_002b90e0(param_1 + 0x20,0x29);
    FUN_002bf030(param_1 + 0x20,0);
    FUN_00262430(param_1 + 0x138,2);
    FUN_002bf030(param_1 + 0x138,2);
    FUN_00262430(param_1 + 0xac,0);
    FUN_002bf030(param_1 + 0xac,1);
    FUN_002b90e0(param_1 + 0x1c4,9);
    FUN_002bdac0(param_1 + 0x1c4,2,0);
  }
  *(unsigned int *)(param_1 + 0x250) = 0;
  *(unsigned int *)(param_1 + 0x254) = 2;
  return;
}
