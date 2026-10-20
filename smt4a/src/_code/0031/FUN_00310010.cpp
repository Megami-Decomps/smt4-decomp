#include "romwright_types.h"

extern "C" {


int FUN_00310010(int param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_1 + 8) + param_2 * 0xd8;
  }
  return param_1 + 0x10;
}

} /* extern "C" */
