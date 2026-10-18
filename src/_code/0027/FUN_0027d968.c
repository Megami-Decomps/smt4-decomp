/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d968` (_code @ 0x27d968, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029022c(void);
extern int FUN_002903f0(void);


int FUN_0027d968(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0029022c();
  if ((temp_v0 == 0) || (temp_v0 = FUN_002903f0(), temp_v0 < 1)) {
    temp_v0 = -1;
  }
  return temp_v0;
}
