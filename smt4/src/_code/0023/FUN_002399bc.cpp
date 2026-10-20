#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00472a38; /* 0x472a38 */


void FUN_002399bc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int * *)((unsigned char *)&DAT_00472a38 + 0x4)) != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002399e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*(*(unsigned int * *)((unsigned char *)&DAT_00472a38 + 0x4)))((*(unsigned int * *)((unsigned char *)&DAT_00472a38 + 0x4)),param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
