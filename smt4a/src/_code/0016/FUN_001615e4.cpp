#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061a470; /* 0x61a470 */


void FUN_001615e4(unsigned int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) + 0x38) = param_1;
  }
  return;
}

} /* extern "C" */
