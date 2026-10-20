/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cb954` (_code @ 0x1cb954, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1308(void);
int FUN_001d1374(void);

/* Supplied declaration required: FUN_001d1308. */
/* Supplied declaration required: FUN_001d1374. */


void FUN_001cb954(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  if ((*param_2 == 0x50545343) && (param_2[2] - 0x10000U < 0x10201)) {
    *param_1 = (int)param_2;
    FUN_001d1308();
    if (*param_2 == 0x4f464e49) {
      piVar1 = (int *)*param_1;
      FUN_001d1374();
      if (*piVar1 == 0x54414450) {
        param_1[1] = (int)(param_2 + 2);
        param_1[2] = (int)(piVar1 + 2);
      }
    }
  }
  return;
}

} /* extern "C" */
