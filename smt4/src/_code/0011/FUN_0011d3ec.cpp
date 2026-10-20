#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465690; /* 0x465690 */


void FUN_0011d3ec(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_00465690 + 0x1)) = param_1;
  return;
}

} /* extern "C" */
