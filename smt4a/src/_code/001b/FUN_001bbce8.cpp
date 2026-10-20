#include "romwright_types.h"

extern "C" {


int FUN_001bbce8(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}

} /* extern "C" */
