#include "romwright_types.h"

extern "C" {


int FUN_002fd760(int param_1)

{
  return **(int **)(param_1 + 0x10) + 8;
}

} /* extern "C" */
