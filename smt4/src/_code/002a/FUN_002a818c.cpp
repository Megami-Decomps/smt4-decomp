#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00465644; /* 0x465644 */

extern void nn_os_LightEvent_ClearSignal(unsigned int);


void FUN_002a818c(void)

{
  nn_os_LightEvent_ClearSignal((unsigned int)&DAT_00465644);
  return;
}

} /* extern "C" */
