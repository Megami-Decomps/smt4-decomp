/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316164` (_code @ 0x316164, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0049597c(void);

/* Supplied declaration required: FUN_0049597c. */


unsigned int FUN_00316164(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if (*(unsigned char *)(temp_v0 + 5) < 3) {
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 0x18);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      FUN_0049597c();
    }
  }
  return 0;
}

} /* extern "C" */
