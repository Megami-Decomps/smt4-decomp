/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003173c4` (_code @ 0x3173c4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_005b3bc0; /* 0x5b3bc0 */
extern unsigned int *DAT_005b3bc4; /* 0x5b3bc4 */


unsigned int FUN_003173c4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)&DAT_005b3bc0;
  if (DAT_005b3bc0 != 0) {
    puVar1 = DAT_005b3bc4;
  }
  if ((DAT_005b3bc0 != 0 && param_1 < puVar1) &&
     (temp_v0 = DAT_005b3bc0 + (int)param_1 * 0x2c, temp_v0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003173f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v1 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0xc))();
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
