#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_005b3274;

void FUN_002914bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(romwright_code **)(&DAT_005b3274 + (unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x28);
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002914dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(unsigned int *)(param_1 + 8));
    return;
  }
  return;
}

} /* extern "C" */
