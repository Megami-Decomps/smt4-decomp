/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b034` (_code @ 0x16b034, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0016b034(int param_1,int param_2)

{
  int *piVar1;
  
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = *(int **)(param_1 + 0x114);
  while( 1 ) {
    if (piVar1 == *(int **)(param_1 + 0x118)) {
      return 0;
    }
    if (*(char *)(*piVar1 + 1) != '\0') break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}
