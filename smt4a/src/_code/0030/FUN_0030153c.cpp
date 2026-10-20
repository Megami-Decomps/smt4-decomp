/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030153c` (_code @ 0x30153c, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);

typedef int romwright_code(...);
extern unsigned char DAT_00559854; /* 0x559854 */

/* Supplied declaration required: asdOperatorDeleteArray. */


unsigned int * FUN_0030153c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00559854;
  for (temp_v1 = 0; temp_v1 < (unsigned int)((int)(param_1[2] - param_1[1]) >> 2); temp_v1 = temp_v1 + 1) {
    piVar1 = *(int **)(param_1[1] + temp_v1 * 4);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
    }
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[4] + 4))();
  }
  for (temp_v0 = param_1[1]; temp_v0 != param_1[2]; temp_v0 = temp_v0 + 4) {
  }
  asdOperatorDeleteArray();
  return param_1;
}

} /* extern "C" */
