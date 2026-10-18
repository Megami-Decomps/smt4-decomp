/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011367e` (_code @ 0x11367e, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ec75c(int);
extern int FUN_002ecd54(int);
extern int FUN_002f7a28(int);


int FUN_0011367e(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002ecd54(param_1 + 4);
  temp_v0 = FUN_002f7a28(temp_v0 + 0x230);
  temp_v0 = FUN_002ec75c(temp_v0 + 0xb0);
  return temp_v0 - 0x2e4;
}
