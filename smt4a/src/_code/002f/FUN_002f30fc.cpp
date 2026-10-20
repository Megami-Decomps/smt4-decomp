/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f30fc` (_code @ 0x2f30fc, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00128eac(int);
extern int FUN_002f8520(int);


int FUN_002f30fc(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002f8520(param_1 + 0x30);
  temp_v0 = FUN_00128eac(temp_v0 - 0x28);
  return temp_v0 - 8;
}

} /* extern "C" */
