#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00472608; /* 0x472608 */


void FUN_002c7aa0(int param_1)

{
  (**(romwright_code **)(&DAT_00472608 + *(int *)(param_1 + 0x38) * 0x1c))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
