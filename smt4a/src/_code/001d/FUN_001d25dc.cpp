#include "romwright_types.h"

extern "C" {


unsigned char FUN_001d25dc(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}

} /* extern "C" */
