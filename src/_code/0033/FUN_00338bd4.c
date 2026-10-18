/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338bd4` (_code @ 0x338bd4, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00240530. */


void FUN_00338bd4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_2 < 0) {
    return;
  }
  temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1fc0) + param_2 * 0x288 + 8);
  if (-1 < temp_v0) {
    FUN_00240530(0,0,*(int *)(param_1 + 0x1e98) + temp_v0 * 0x114,8,5);
  }
  return;
}
