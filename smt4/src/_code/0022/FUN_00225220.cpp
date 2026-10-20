#include "romwright_types.h"

extern "C" {


unsigned char FUN_00225220(int param_1)

{
  return *(int *)(param_1 + 0x2180) != 2;
}

} /* extern "C" */
