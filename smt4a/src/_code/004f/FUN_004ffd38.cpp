#include "romwright_types.h"

extern "C" {


unsigned char FUN_004ffd38(int *param_1)

{
  return *(int *)(*param_1 + 0x14) != 0;
}

} /* extern "C" */
