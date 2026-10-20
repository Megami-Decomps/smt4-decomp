/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00329d68` (_code @ 0x329d68, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002dd40c(void);

/* Supplied declaration required: FUN_002dd40c. */


unsigned int FUN_00329d68(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(*param_1 + 0x48);
  if (((temp_v0 >= 2) && (temp_v0 < 0x12)) && (temp_v0 != 10)) {
    if (temp_v0 < 0xb) {
      if (temp_v0 != 5 && temp_v0 != 6) {
        return 0;
      }
      if (*(int *)(*param_1 + 0xc) == 3) {
        return 0;
      }
    }
    else {
      if (temp_v0 == 0xb) {
        return 0;
      }
      if (temp_v0 != 0xe) {
        return 0;
      }
    }
    FUN_002dd40c();
  }
  return 0;
}

} /* extern "C" */
