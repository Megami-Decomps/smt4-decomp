/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002333d4` (_code @ 0x2333d4, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_002333d4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  switch(param_2) {
  case 0:
    FUN_002bdac0(param_1 + 0x20,0);
    return;
  case 1:
    FUN_002bdac0(param_1 + 0xac,1,0);
    return;
  case 2:
    FUN_002bf030(param_1 + 0x138,0);
    return;
  case 3:
    FUN_002bdac0(param_1 + 0x1c4,2,0);
    return;
  case 4:
    FUN_002bdac0(param_1 + 0x250,3,0);
    return;
  case 5:
    FUN_002bdac0(param_1 + 0x2dc,4,0);
    return;
  case 6:
    FUN_002bdac0(param_1 + 0x368,5,0);
    return;
  case 7:
    FUN_002bdac0(param_1 + 0x3f4,6,0);
    return;
  default:
    return;
  }
}
