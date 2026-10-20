#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_005c11a8; /* 0x5c11a8 */


void FUN_00323ca0(int param_1)

{
  (**(romwright_code **)(&DAT_005c11a8 + *(int *)(param_1 + 0x38) * 0x1c))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
