#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465690; /* 0x465690 */


void FUN_0011d57c(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00465690 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
