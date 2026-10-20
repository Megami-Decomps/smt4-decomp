#include "romwright_types.h"

extern "C" {


void FUN_00376c68(int *param_1)

{
  if (*param_1 != 0) {
    *(unsigned int *)(*param_1 + 0x20) = 0;
  }
  return;
}

} /* extern "C" */
