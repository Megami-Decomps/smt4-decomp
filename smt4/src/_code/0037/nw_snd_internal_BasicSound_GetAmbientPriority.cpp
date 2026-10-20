#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_snd_internal_BasicSound_GetAmbientPriority(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003799b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*piVar1 + 0xc))(piVar1,param_1[3],param_2);
    return;
  }
  return;
}

} /* extern "C" */
