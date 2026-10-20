#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char g_handlerTable[]; /* 0x464110 */

void FUN_001f728c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(romwright_code **)(g_handlerTable + (unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x24);
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001f72ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(unsigned int *)(param_1 + 8),param_2);
    return;
  }
  return;
}

} /* extern "C" */
