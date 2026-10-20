#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00472718; /* 0x472718 */


void FUN_0021a6a8(int param_1)

{
  (**(romwright_code **)(&DAT_00472718 + *(int *)(param_1 + 0x38) * 0x18))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
