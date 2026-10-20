/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473244` (_code @ 0x473244, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


unsigned char FUN_00473244(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return *(unsigned char *)(temp_v0 + 0x27e98) - 1 < 3;
}

} /* extern "C" */
