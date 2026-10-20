/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea962` (_code @ 0x2ea962, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002ede60(void);


void FUN_002ea962(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  *(unsigned char *)(temp_v0 + 0x20) = *(unsigned char *)(param_2 + 0x20);
  return;
}

} /* extern "C" */
