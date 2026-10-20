/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0a84` (_code @ 0x2c0a84, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c09bc(void);


unsigned char FUN_002c0a84(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  return *(unsigned char *)(temp_v0 + 0x1ec51);
}

} /* extern "C" */
