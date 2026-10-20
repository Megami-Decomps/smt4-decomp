#include "romwright_types.h"

extern "C" {


unsigned char FUN_00270bfc(int param_1)

{
  return *(int *)(param_1 + 0x387c) != 0xe;
}

} /* extern "C" */
