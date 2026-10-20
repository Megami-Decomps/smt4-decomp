/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a60b4` (_code @ 0x2a60b4, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b93b0(void);


unsigned char FUN_002a60b4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b93b0();
  return (*(unsigned int *)(temp_v0 + 0x10) & 4) != 0;
}

} /* extern "C" */
