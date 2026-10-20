/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2f82` (_code @ 0x2f2f82, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb588(unsigned char [8]);
int FUN_002f8264(unsigned char [40]);
int _ZN9Obj55927c7vfunc10EP12Obj55927cArg(unsigned char [40], int, unsigned char [8]);
int FUN_002f84b0(int);

/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f8264. */
/* Supplied declaration required: _ZN9Obj55927c7vfunc10EP12Obj55927cArg. */
/* Supplied declaration required: FUN_002f84b0. */


void FUN_002f2f82(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [40];
  unsigned char temp_v1 [8];
  
  FUN_002eb588(temp_v1);
  _ZN9Obj55927c7vfunc10EP12Obj55927cArg(temp_v0,param_1 + 0x30,temp_v1);
  FUN_002f84b0(param_1 + 0x34);
  FUN_002f8264(temp_v0);
  return;
}

} /* extern "C" */
