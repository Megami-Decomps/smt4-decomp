#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e8e0; /* 0x44e8e0 */


void FUN_0015d91c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int *p = (int *)*param_1;
  if (*p == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e8e0)(p);
    return;
  }
  if (*p == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x0015d93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e8e0 + 0x4)))(p);
    return;
  }
  return;
}

} /* extern "C" */
