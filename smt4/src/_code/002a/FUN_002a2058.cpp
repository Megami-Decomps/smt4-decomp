#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_004734c8; /* 0x4734c8 */


void FUN_002a2058(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x002a2080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004734c8)(*param_1);
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x002a2078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_004734c8 + 0x4)))(*param_1);
    return;
  }
  return;
}

} /* extern "C" */
