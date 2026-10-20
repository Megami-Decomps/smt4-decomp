/* NON_MATCHING: romwright 0.5.0 decompilation of `jobGetStatus` (_code @ 0x165058, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


int jobGetStatus(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return *(int *)(temp_v0 + 8) + *(int *)(temp_v0 + 4);
}

} /* extern "C" */
