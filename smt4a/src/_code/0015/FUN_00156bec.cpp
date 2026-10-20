#include "romwright_types.h"

extern "C" {


unsigned char FUN_00156bec(int param_1)

{
  return *(int *)(param_1 + 0x18) != 0;
}

} /* extern "C" */
