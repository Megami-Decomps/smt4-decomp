#include "romwright_types.h"

extern "C" {


int FUN_002fea6a(int param_1)

{
  return *(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 4;
}

} /* extern "C" */
