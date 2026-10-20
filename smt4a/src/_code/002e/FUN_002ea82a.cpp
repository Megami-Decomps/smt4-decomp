#include "romwright_types.h"

extern "C" {


void FUN_002ea82a(int param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}

} /* extern "C" */
