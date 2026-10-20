#include "romwright_types.h"

extern "C" {


unsigned char FUN_004f2294(int param_1)

{
  return *(int *)(param_1 + 0x65c) != 0;
}

} /* extern "C" */
