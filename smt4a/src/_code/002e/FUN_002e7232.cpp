/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7232` (_code @ 0x2e7232, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_00432210(int *, unsigned int);


void FUN_002e7232(int *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00432210(param_1 + 1,0xffffffff);
  if ((temp_v0 == 0) && ((char)param_1[2] == '\0')) {
    *(unsigned char *)(param_1 + 2) = 1;
    (**(romwright_code **)(*param_1 + 4))(param_1);
  }
  return;
}

} /* extern "C" */
