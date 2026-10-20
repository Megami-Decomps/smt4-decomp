/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad588` (_code @ 0x1ad588, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int rt_memcmp(int, char *, unsigned int);


unsigned int FUN_001ad588(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = rt_memcmp(param_1,"ATBC",4);
  if ((temp_v0 == 0) || (temp_v0 = rt_memcmp(param_1,"ABCH",4), temp_v0 == 0)) {
    temp_v1 = *(unsigned int *)(param_1 + 8);
  }
  return temp_v1;
}

} /* extern "C" */
