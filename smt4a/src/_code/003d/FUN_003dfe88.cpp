/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfe88` (_code @ 0x3dfe88, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


int FUN_003dfe88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return (int)*(short *)(temp_v0 + 0x2830c);
}

} /* extern "C" */
