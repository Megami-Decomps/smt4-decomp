/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a224` (_code @ 0x12a224, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);

extern unsigned int DAT_00594a00; /* 0x594a00 */

/* Supplied declaration required: asdOperatorDeleteArray. */


void FUN_0012a224(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (temp_v0 = 0; temp_v0 < DAT_00594a00; temp_v0 = temp_v0 + 1) {
    }
    asdOperatorDeleteArray();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
