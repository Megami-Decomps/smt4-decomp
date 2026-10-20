#include "romwright_types.h"

extern "C" {


int FUN_002fbabc(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x18;
}

} /* extern "C" */
