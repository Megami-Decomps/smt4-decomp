#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c6290; /* 0x4c6290 */


void FUN_00123508(unsigned int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_004c6290 + 0x9c)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_004c6290 + 0x9c)) + 0x38) = param_1;
  }
  return;
}

} /* extern "C" */
