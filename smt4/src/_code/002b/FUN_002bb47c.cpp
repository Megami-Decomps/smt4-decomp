/* NON_MATCHING: found outside every function: its address is in FUN_003eff64's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002bb47c for reference (not compiled; its own view of the boundaries):

int FUN_002bb47c(int param_1)

{
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
      FUN_002c52f8();
    }
    FUN_002b90b0(*(unsigned int *)(param_1 + 4) & 0xfffffffe);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return param_1;
}
*/
#include "common.h"
