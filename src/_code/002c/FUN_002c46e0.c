/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c46e0` (_code @ 0x2c46e0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */


void FUN_002c46e0(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int in_s0;
  
  puVar1 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar1 = DAT_00464a74;
  }
  if ((DAT_00464a70 != 0 && param_1 < puVar1) &&
     (temp_v0 = DAT_00464a70 + (int)param_1 * 0x2c, temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 0x28) = in_s0;
  }
  return;
}
