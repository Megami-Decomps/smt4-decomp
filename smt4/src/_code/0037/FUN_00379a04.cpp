#include "romwright_types.h"

extern "C" {


unsigned char FUN_00379a04(int param_1)

{
  return *(int *)(param_1 + 0xc) != 0;
}

} /* extern "C" */
