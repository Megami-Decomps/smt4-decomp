/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1efc` (_code @ 0x1c1efc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c2278(void);
int nw_snd_internal_MoveValue_float_int_SetTarget(...);

/* Supplied declaration required: FUN_001c2278. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */


void FUN_001c1efc(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 != 0) {
    nw_snd_internal_MoveValue_float_int_SetTarget(param_1 + 0x14,(param_3 + 4U) / 5);
  }
  else {
    FUN_001c2278();
    if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x20)) {
      nw_snd_internal_MoveValue_float_int_SetTarget(param_1 + 0x14,0);
      return;
    }
  }
  return;
}

} /* extern "C" */
