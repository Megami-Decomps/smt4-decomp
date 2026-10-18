/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112770` (_code @ 0x112770, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00594eb8; /* 0x594eb8 */
extern unsigned int DAT_00594ebc; /* 0x594ebc */
extern unsigned int DAT_00594ec0; /* 0x594ec0 */

/* Supplied declaration required: FUN_002e92e4. */


unsigned int FUN_00112770(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d4),DAT_00594eb8);
  if ((temp_v0 != 0) &&
     (temp_v0 = FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d4),DAT_00594ebc), temp_v0 != 0)) {
    FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d4),DAT_00594ec0);
  }
  temp_v0 = FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d8),DAT_00594eb8);
  if ((temp_v0 != 0) &&
     (temp_v0 = FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d8),DAT_00594ebc), temp_v0 != 0)) {
    FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d8),DAT_00594ec0);
  }
  temp_v0 = FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d4),DAT_00594ebc);
  if (temp_v0 != 0) {
    FUN_002e92e4(*(unsigned int *)(param_1 + 0x2d4),DAT_00594ec0);
  }
  return 1;
}
