/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001136a2` (_code @ 0x1136a2, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002ec70c(int);
extern int destroyObj0055ae64(int);
extern int _ZN9Obj558c00D1Ev(int);


int FUN_001136a2(int param_1)

{
  int temp_v0;
  
  temp_v0 = destroyObj0055ae64(param_1 + 0x2e4);
  temp_v0 = FUN_002ec70c(temp_v0 - 0xb0);
  temp_v0 = _ZN9Obj558c00D1Ev(temp_v0 - 0x230);
  return temp_v0 - 4;
}

} /* extern "C" */
