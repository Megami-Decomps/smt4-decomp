/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ec74` (_code @ 0x30ec74, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDelete(void);
int FUN_002e4e6c(void);

/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_002e4e6c. */


int * FUN_0030ec74(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_2;
  if (*param_1 != temp_v0) {
    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
    temp_v0 = *(int *)(*param_1 + 0x1c) - 1;
    *(int *)(*param_1 + 0x1c) = temp_v0;
    if ((temp_v0 == 0) && (*param_1 != 0)) {
      FUN_002e4e6c();
      asdOperatorDelete();
    }
    *param_1 = *param_2;
  }
  return param_1;
}

} /* extern "C" */
