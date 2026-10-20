/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2a22` (_code @ 0x2f2a22, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], unsigned int *);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002f9fd4(unsigned int, int *);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002f9fd4. */


void FUN_002f2a22(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [16];
  unsigned int *puStack_10;
  int uStack_c;
  
  puStack_10 = param_1;
  uStack_c = param_2;
  FUN_002e6e34(temp_v0,param_1 + 1);
  FUN_002f9fd4(*param_1,&uStack_c);
  _ZN9Obj55b28cD1Ev(temp_v0);
  return;
}

} /* extern "C" */
