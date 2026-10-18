/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6f60` (_code @ 0x1a6f60, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_001a6f60(int *param_1,unsigned int param_2)

{
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x52434254)) || ((unsigned int)param_1[2] <= param_2)) ||
     ((param_1 = (int *)((int)param_1 + param_1[param_2 + 3] + param_1[1]), param_1 == (int *)0x0 ||
      (*param_1 != 0x314c4254)))) {
    param_1 = (int *)0x0;
  }
  return param_1;
}
