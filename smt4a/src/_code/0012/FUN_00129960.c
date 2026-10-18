/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129960` (_code @ 0x129960, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_00594a00; /* 0x594a00 */

/* Supplied declaration required: FUN_002e6e14. */


void FUN_00129960(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (temp_v0 = 0; temp_v0 < DAT_00594a00; temp_v0 = temp_v0 + 1) {
      (*(romwright_code *)**(unsigned int **)(*(int *)(param_1 + 8) + temp_v0 * 0x14))
                (*(int *)(param_1 + 8) + temp_v0 * 0x14);
    }
    FUN_002e6e14(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
