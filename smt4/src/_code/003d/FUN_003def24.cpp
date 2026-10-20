#include "romwright_types.h"

extern "C" {


unsigned char FUN_003def24(int *param_1)

{
  return *(int *)(*param_1 + 0x14) != 0;
}

} /* extern "C" */
