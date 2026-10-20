/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b6c2` (_code @ 0x11b6c2, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0010aaf0(int, int);
extern int FUN_0010ab42(void);


void FUN_0011b6c2(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0010ab42();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0010aaf0(param_1,param_1 + 0x18), temp_v0 != 0)) {
    *(unsigned char *)(param_1 + 0x14) = 1;
  }
  return;
}

} /* extern "C" */
