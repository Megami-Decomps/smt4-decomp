#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_005c1484; /* 0x5c1484 */


void FUN_00430f2c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int * *)((unsigned char *)&DAT_005c1484 + 0x4)) != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00430f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*(*(unsigned int * *)((unsigned char *)&DAT_005c1484 + 0x4)))((*(unsigned int * *)((unsigned char *)&DAT_005c1484 + 0x4)),param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
