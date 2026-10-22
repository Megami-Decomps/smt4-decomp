/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427a10` (_code @ 0x427a10, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18WindowStatusResultC1Ej(...);

/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */


void FUN_00427a10(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_2 + 0x20);
  if (temp_v0 == 1) {
    _ZN18WindowStatusResultC1Ej(param_1,0);
    return;
  }
  if (temp_v0 < 2) {
    if (temp_v0 == -3) {
      temp_v1 = *(unsigned int *)(param_2 + 0x28);
      *param_1 = *(unsigned int *)(param_2 + 0x24);
      param_1[1] = temp_v1;
      return;
    }
    if (temp_v0 == -2) {
      if (-1 < *(int *)(param_2 + 0x24)) {
        _ZN18WindowStatusResultC1Ej(param_1,0xf9613919);
        return;
      }
      _ZN18WindowStatusResultC1Ej();
      return;
    }
    if (temp_v0 == 0) {
      _ZN18WindowStatusResultC1Ej(param_1,0xc9213801);
      return;
    }
  }
  else {
    if (temp_v0 == 10) {
      _ZN18WindowStatusResultC1Ej(param_1,0xc9213802);
      return;
    }
    if (temp_v0 == 0xb) {
      _ZN18WindowStatusResultC1Ej(param_1,0xc9213803);
      return;
    }
    if (temp_v0 == 0xc) {
      _ZN18WindowStatusResultC1Ej(param_1,0xc9213804);
      return;
    }
  }
  _ZN18WindowStatusResultC1Ej(param_1,0xc9613918);
  return;
}

} /* extern "C" */
