#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_002a60cc(int *param_1)

{
  int base = *param_1;
  if (base == 0) {
    return base;
  }
  (**(romwright_code **)(**(int **)(base + 8) + 0x14))(*(int *)(base + 8));
  return 0;
}

} /* extern "C" */
