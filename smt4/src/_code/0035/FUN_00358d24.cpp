#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00472a38; /* 0x472a38 */


void FUN_00358d24(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00472a38 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
