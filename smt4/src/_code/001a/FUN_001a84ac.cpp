#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char g_handlerTable;

void FUN_001a84ac(int param_1)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned char *p = &g_handlerTable + (unsigned int)*(unsigned short *)(param_1 + 4) * 0x44;
  
  UNRECOVERED_JUMPTABLE = *(romwright_code **)(p + 0x1c);
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001a84cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(unsigned int *)(param_1 + 8));
    return;
  }
  return;
}

} /* extern "C" */
