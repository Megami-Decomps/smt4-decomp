/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480960` (_code @ 0x480960, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048026c(int, short [4]);

extern int FUN_0019c06c(int);
/* Supplied declaration required: FUN_0048026c. */


unsigned int FUN_00480960(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  short asStack_18 [4];
  short sStack_10;
  short sStack_e;
  short sStack_c;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_0048026c(param_1,asStack_18);
  temp_v1 = FUN_0019c06c(param_1);
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v0 = *(char *)(temp_v1 + 8);
  if (temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      if (0 < asStack_18[0]) {
        return 1;
      }
      return 0;
    }
    if (temp_v0 != '\x06') {
      return 0;
    }
    if (asStack_18[0] < 1) {
      asStack_18[0] = sStack_e;
    }
  }
  else {
    if (asStack_18[0] < 1) {
      asStack_18[0] = sStack_10;
    }
    if (asStack_18[0] < 1) {
      asStack_18[0] = sStack_c;
    }
  }
  if (0 < asStack_18[0]) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
