#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_005c1d10; /* 0x5c1d10 */


void FUN_004509fc(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x00450a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_005c1d10)((int *)*param_1);
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x00450a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_005c1d10 + 0x4)))((int *)*param_1);
    return;
  }
  return;
}

} /* extern "C" */
