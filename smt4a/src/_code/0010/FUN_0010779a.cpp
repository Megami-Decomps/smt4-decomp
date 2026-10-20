/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010779a` (_code @ 0x10779a, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ef268(int, int);

/* Supplied declaration required: FUN_002ef268. */


void FUN_0010779a(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x26c) != '\0') {
    *(unsigned char *)(param_1 + 0x26c) = 0;
  }
  else {
    if (param_3 != 0) {
      FUN_002ef268(param_1,param_2);
    }
    else {
      *(int *)(param_1 + 0xc0) = param_2;
    }
    if (param_2 != 2) {
      *(char *)(param_1 + 0x14a) = (char)param_2;
      return;
    }
  }
  return;
}

} /* extern "C" */
