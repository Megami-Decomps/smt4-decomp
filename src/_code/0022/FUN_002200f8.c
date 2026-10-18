/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002200f8` (_code @ 0x2200f8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */


unsigned int FUN_002200f8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar1 = DAT_00464a74;
  }
  if ((DAT_00464a70 != 0 && param_1 < puVar1) &&
     (temp_v0 = DAT_00464a70 + (int)param_1 * 0x2c, temp_v0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0022012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v1 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0xc))();
    return temp_v1;
  }
  return 0;
}
