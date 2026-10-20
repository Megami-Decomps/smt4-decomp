/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016917c` (_code @ 0x16917c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


unsigned char FUN_0016917c(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return *(unsigned char *)(*(int *)(temp_v0 + 8) + param_2 * 3 + 0x52f75c);
}

} /* extern "C" */
