#include "romwright_types.h"

extern "C" {


unsigned char FUN_003f1230(int param_1)

{
  return *(int *)(param_1 + 0x2290) != 0;
}

} /* extern "C" */
