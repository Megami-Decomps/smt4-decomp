#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465058; /* 0x465058 */


void FUN_0010e604(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00465058 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
