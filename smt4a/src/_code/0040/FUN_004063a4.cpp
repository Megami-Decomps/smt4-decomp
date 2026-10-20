#include "romwright_types.h"

extern "C" {


int FUN_004063a4(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x108) + param_2 * 8;
}

} /* extern "C" */
