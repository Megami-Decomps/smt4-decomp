/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126160` (_code @ 0x126160, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


int FUN_00126160(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return (int)*(char *)(temp_v0 + 0x8c);
}

} /* extern "C" */
