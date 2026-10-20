#include "romwright_types.h"

extern "C" {


unsigned char FUN_003f9e6c(int param_1)

{
  return *(short *)(*(int *)(param_1 + 0x34) + 0x94) != 0;
}

} /* extern "C" */
