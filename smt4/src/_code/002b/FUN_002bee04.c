/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bee04` (_code @ 0x2bee04, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002bee04(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + param_2 * 0x20 + 0x11ec);
  do {
    temp_v0 = *piVar2;
    *piVar2 = temp_v0 + 1;
    piVar2[temp_v0 + 3] = param_3;
    param_3 = ((unsigned int)piVar2 & 0x7fffffff) >> 7;
  } while( 1 );
}
