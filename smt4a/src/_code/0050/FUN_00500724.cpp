/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500724` (_code @ 0x500724, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0019a37c(unsigned int, unsigned int, unsigned int);


unsigned int FUN_00500724(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int *p;
  unsigned int i;
  unsigned int n;
  
  p = (int *)*param_1;
  n = p[7];
  for (i = 0; i < n; i++) {
    temp_v0 = FUN_0019a37c(*(unsigned int *)(p[6] + i * 8),param_2,0x40);
    if (temp_v0 == 0) {
      return *(unsigned int *)(p[6] + i * 8 + 4);
    }
  }
  return 0;
}

} /* extern "C" */
